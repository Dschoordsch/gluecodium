/*
 * Copyright (C) 2017 HERE Global B.V. and its affiliate(s). All rights reserved.
 *
 * This software, including documentation, is protected by copyright controlled by
 * HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
 * adapting or translating, any or all of this material requires the prior written
 * consent of HERE Global B.V. This material also contains confidential information,
 * which may not be disclosed to others without prior written consent of HERE Global B.V.
 *
 */

package com.here.ivi.api.generator.common.java;

import com.here.ivi.api.common.CollectionsHelper;
import com.here.ivi.api.generator.baseapi.StubCommentParser;
import com.here.ivi.api.generator.common.AbstractModelBuilder;
import com.here.ivi.api.generator.common.ModelBuilderContextStack;
import com.here.ivi.api.model.franca.FrancaElement;
import com.here.ivi.api.model.javamodel.JavaClass;
import com.here.ivi.api.model.javamodel.JavaConstant;
import com.here.ivi.api.model.javamodel.JavaElement;
import com.here.ivi.api.model.javamodel.JavaField;
import com.here.ivi.api.model.javamodel.JavaMethod;
import com.here.ivi.api.model.javamodel.JavaMethod.MethodQualifier;
import com.here.ivi.api.model.javamodel.JavaPackage;
import com.here.ivi.api.model.javamodel.JavaParameter;
import com.here.ivi.api.model.javamodel.JavaType;
import com.here.ivi.api.model.javamodel.JavaValue;
import com.here.ivi.api.model.javamodel.JavaVisibility;
import java.util.List;
import navigation.BaseApiSpec;
import navigation.BaseApiSpec.InterfacePropertyAccessor;
import org.eclipse.emf.common.util.EList;
import org.franca.core.franca.FAnnotationBlock;
import org.franca.core.franca.FArgument;
import org.franca.core.franca.FConstantDef;
import org.franca.core.franca.FInterface;
import org.franca.core.franca.FMethod;
import org.franca.core.franca.FModelElement;
import org.franca.core.franca.FStructType;
import org.franca.core.franca.FTypeCollection;
import org.franca.core.franca.FTypeRef;
import org.franca.core.franca.FTypedElement;

public class JavaModelBuilder extends AbstractModelBuilder<JavaElement> {

  private final JavaPackage basePackage;
  private final FrancaElement rootModel;

  public JavaModelBuilder(
      final ModelBuilderContextStack<JavaElement> contextStack,
      final JavaPackage basePackage,
      final FrancaElement rootModel) {
    super(contextStack);
    this.basePackage = basePackage;
    this.rootModel = rootModel;
  }

  public JavaModelBuilder(final JavaPackage basePackage, final FrancaElement rootModel) {
    super(new ModelBuilderContextStack<>());
    this.basePackage = basePackage;
    this.rootModel = rootModel;
  }

  @Override
  public void finishBuilding(FInterface francaInterface) {

    JavaClass javaClass = createJavaClass(francaInterface);

    List<JavaElement> previousResults = getCurrentContext().previousResults;
    javaClass.constants.addAll(CollectionsHelper.getAllOfType(previousResults, JavaConstant.class));
    javaClass.fields.addAll(CollectionsHelper.getAllOfType(previousResults, JavaField.class));
    javaClass.methods.addAll(CollectionsHelper.getAllOfType(previousResults, JavaMethod.class));

    storeResult(javaClass);
    closeContext();
  }

  @Override
  public void finishBuilding(FTypeCollection francaTypeCollection) {

    JavaClass javaClass = createJavaClass(francaTypeCollection);

    for (JavaElement javaElement : getCurrentContext().previousResults) {
      if (javaElement instanceof JavaConstant) {
        javaClass.constants.add((JavaConstant) javaElement);
      } else if (javaElement instanceof JavaClass) {
        javaClass.innerClasses.add((JavaClass) javaElement);
      }
    }

    storeResult(javaClass);
    closeContext();
  }

  @Override
  public void finishBuilding(FMethod francaMethod) {

    JavaMethod javaMethod;

    // Map return type
    EList<FArgument> outArgs = francaMethod.getOutArgs();
    if (outArgs.isEmpty()) { // Void return type
      javaMethod = new JavaMethod(JavaNameRules.getMethodName(francaMethod.getName()));
    } else if (outArgs.size() == 1) {
      JavaType returnType = JavaTypeMapper.map(basePackage, outArgs.get(0).getType());
      javaMethod = new JavaMethod(JavaNameRules.getMethodName(francaMethod.getName()), returnType);
    } else {
      // TODO: Wrap complex return type in an immutable container class
      javaMethod = new JavaMethod(JavaNameRules.getMethodName(francaMethod.getName()));
    }

    // TODO: Map errors to exception(s)
    // Either create a per-Interface exception and add mapped enum values to it's EnumSet member
    // Or do something different...

    javaMethod.comment = StubCommentParser.FORMATTER.readDescription(francaMethod.getComment());

    if (isMethodStatic(francaMethod)) {
      javaMethod.qualifiers.add(MethodQualifier.STATIC);
    }
    // For now we assume all interface methods are native and public
    javaMethod.qualifiers.add(MethodQualifier.NATIVE);
    javaMethod.visibility = JavaVisibility.PUBLIC;

    for (JavaElement javaElement : getCurrentContext().previousResults) {
      if (javaElement instanceof JavaParameter) {
        javaMethod.parameters.add((JavaParameter) javaElement);
      }
    }

    storeResult(javaMethod);
    closeContext();
  }

  private boolean isMethodStatic(FMethod francaMethod) {
    BaseApiSpec.IDataPropertyAccessor propertyAccessor = rootModel.getPropertyAccessor();
    if (propertyAccessor instanceof InterfacePropertyAccessor) {
      return ((InterfacePropertyAccessor) propertyAccessor).getStatic(francaMethod);
    } else {
      return false;
    }
  }

  @Override
  public void finishBuildingInputArgument(FArgument francaArgument) {

    JavaType javaArgumentType = JavaTypeMapper.map(basePackage, francaArgument.getType());
    JavaParameter javaParameter =
        new JavaParameter(
            javaArgumentType, JavaNameRules.getArgumentName(francaArgument.getName()));

    storeResult(javaParameter);
    closeContext();
  }

  @Override
  public void finishBuilding(FConstantDef francaConstant) {

    JavaType type = JavaTypeMapper.map(basePackage, francaConstant.getType());
    JavaValue value = JavaValueMapper.map(type, francaConstant.getRhs());
    JavaConstant javaConstant =
        new JavaConstant(type, JavaNameRules.getConstantName(francaConstant.getName()), value);
    javaConstant.comment = getCommentString(francaConstant);

    storeResult(javaConstant);
    closeContext();
  }

  @Override
  public void finishBuilding(FTypedElement francaTypedElement) {

    JavaType javaType =
        CollectionsHelper.getFirstOfType(getCurrentContext().previousResults, JavaType.class);
    JavaField javaField =
        new JavaField(javaType, JavaNameRules.getFieldName(francaTypedElement.getName()));
    javaField.comment = getCommentString(francaTypedElement);

    storeResult(javaField);
    closeContext();
  }

  @Override
  public void finishBuilding(FStructType francaStructType) {

    JavaClass javaClass = createJavaClass(francaStructType);
    javaClass.qualifiers.add(JavaClass.ClassQualifier.STATIC);

    for (JavaElement javaElement : getCurrentContext().previousResults) {
      if (javaElement instanceof JavaField) {
        javaClass.fields.add((JavaField) javaElement);
      }
    }

    storeResult(javaClass);
    closeContext();
  }

  @Override
  public void finishBuilding(FTypeRef francaTypeRef) {

    storeResult(JavaTypeMapper.map(basePackage, francaTypeRef));
    closeContext();
  }

  private JavaClass createJavaClass(FModelElement francaTypeCollection) {

    JavaClass javaClass = new JavaClass(JavaNameRules.getClassName(francaTypeCollection.getName()));
    javaClass.visibility = JavaVisibility.PUBLIC;
    javaClass.javaPackage =
        JavaTypeMapper.createJavaPackage(basePackage, rootModel.getModelInfo().getFModel());
    javaClass.comment = getCommentString(francaTypeCollection);

    return javaClass;
  }

  private static String getCommentString(FModelElement francaModelElement) {

    String comment = "";
    FAnnotationBlock francaComment = francaModelElement.getComment();
    if (francaComment != null && francaComment.getElements() != null) {
      comment = StubCommentParser.FORMATTER.readDescription(francaComment);
    }

    return comment;
  }
}
