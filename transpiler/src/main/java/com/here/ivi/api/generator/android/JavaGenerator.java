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

package com.here.ivi.api.generator.android;

import com.here.ivi.api.generator.common.FrancaTreeWalker;
import com.here.ivi.api.generator.common.GeneratedFile;
import com.here.ivi.api.generator.common.java.JavaModelBuilder;
import com.here.ivi.api.generator.common.java.JavaNameRules;
import com.here.ivi.api.generator.common.java.templates.JavaClassTemplate;
import com.here.ivi.api.model.franca.Interface;
import com.here.ivi.api.model.franca.TypeCollection;
import com.here.ivi.api.model.javamodel.JavaClass;
import java.util.Collections;
import java.util.List;
import navigation.BaseApiSpec;
import navigation.BaseApiSpec.TypeCollectionPropertyAccessor;

public class JavaGenerator extends AbstractAndroidGenerator {

  public JavaGenerator(final List<String> packageList) {
    super(packageList);
  }

  public List<GeneratedFile> generateFiles(
      final Interface<BaseApiSpec.InterfacePropertyAccessor> anInterface) {

    JavaModelBuilder modelBuilder = new JavaModelBuilder(basePackage, anInterface);
    FrancaTreeWalker treeWalker = new FrancaTreeWalker(Collections.singletonList(modelBuilder));

    treeWalker.walk(anInterface);

    return generateFilesForClass(modelBuilder.getFirstResult(JavaClass.class));
  }

  public List<GeneratedFile> generateFiles(
      TypeCollection<TypeCollectionPropertyAccessor> typeCollection) {

    JavaModelBuilder modelBuilder = new JavaModelBuilder(basePackage, typeCollection);
    FrancaTreeWalker treeWalker = new FrancaTreeWalker(Collections.singletonList(modelBuilder));

    treeWalker.walk(typeCollection);

    return generateFilesForClass(modelBuilder.getFirstResult(JavaClass.class));
  }

  private static List<GeneratedFile> generateFilesForClass(JavaClass javaClass) {

    CharSequence fileContent = JavaClassTemplate.generate(javaClass);
    String fileName = JavaNameRules.getFileName(javaClass);

    return Collections.singletonList(new GeneratedFile(fileContent, fileName));
  }
}
