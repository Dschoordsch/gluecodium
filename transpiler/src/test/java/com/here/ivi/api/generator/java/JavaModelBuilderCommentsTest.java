/*
 * Copyright (C) 2018 HERE Global B.V. and its affiliate(s). All rights reserved.
 *
 * This software, including documentation, is protected by copyright controlled by
 * HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
 * adapting or translating, any or all of this material requires the prior written
 * consent of HERE Global B.V. This material also contains confidential information,
 * which may not be disclosed to others without prior written consent of HERE Global B.V.
 *
 */

package com.here.ivi.api.generator.java;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import static org.mockito.ArgumentMatchers.any;
import static org.mockito.Mockito.when;

import com.here.ivi.api.common.CollectionsHelper;
import com.here.ivi.api.model.franca.CommentHelper;
import com.here.ivi.api.model.franca.FrancaDeploymentModel;
import com.here.ivi.api.model.java.*;
import com.here.ivi.api.model.java.JavaElement;
import com.here.ivi.api.test.MockContextStack;
import java.util.Arrays;
import java.util.List;
import org.franca.core.franca.*;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import org.mockito.MockitoAnnotations;
import org.powermock.api.mockito.PowerMockito;
import org.powermock.core.classloader.annotations.PrepareForTest;
import org.powermock.modules.junit4.PowerMockRunner;

@RunWith(PowerMockRunner.class)
@PrepareForTest(CommentHelper.class)
public class JavaModelBuilderCommentsTest {

  private static final String COMMENT = "nonsense";

  private static final List<String> BASE_PACKAGE_NAMES =
      Arrays.asList("these", "are", "prefix", "packages");

  private final MockContextStack<JavaElement> contextStack = new MockContextStack<>();

  @Mock private FrancaDeploymentModel deploymentModel;
  @Mock private JavaTypeMapper typeMapper;

  @Mock private FInterface francaInterface;
  @Mock private FMethod francaMethod;
  @Mock private FArgument francaArgument;
  @Mock private FConstantDef francaConstant;
  @Mock private FField francaField;
  @Mock private FStructType francaStructType;
  @Mock private FEnumerationType francaEnumerationType;
  @Mock private FEnumerator francaEnumerator;
  @Mock private FAttribute francaAttribute;

  private JavaModelBuilder modelBuilder;

  private final JavaCustomType nativeBase = new JavaCustomType("FooNativeBar");
  private final JavaCustomType javaCustomType = JavaCustomType.builder("typically").build();

  @Before
  public void setUp() {
    MockitoAnnotations.initMocks(this);
    PowerMockito.mockStatic(CommentHelper.class);

    when(typeMapper.getNativeBase()).thenReturn(nativeBase);

    modelBuilder =
        new JavaModelBuilder(
            contextStack, deploymentModel, new JavaPackage(BASE_PACKAGE_NAMES), typeMapper);

    when(CommentHelper.getDescription(any())).thenReturn(COMMENT);
  }

  @Test
  public void finishBuildingFrancaInterfaceReadsComment() {
    modelBuilder.finishBuilding(francaInterface);

    JavaClass javaClass = modelBuilder.getFinalResult(JavaClass.class);
    assertNotNull(javaClass);
    assertEquals(COMMENT, javaClass.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaInterface);
  }

  @Test
  public void finishBuildingFrancaMethodReadsComment() {
    modelBuilder.finishBuilding(francaMethod);

    JavaMethod javaMethod = modelBuilder.getFinalResult(JavaMethod.class);
    assertNotNull(javaMethod);
    assertEquals(COMMENT, javaMethod.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaMethod);
  }

  @Test
  public void finishBuildingFrancaMethodReadsReturnTypeComment() {
    JavaParameter returnTypeParameter = new JavaParameter(javaCustomType, "flowers", true);
    returnTypeParameter.comment = "foobar";
    contextStack.injectResult(returnTypeParameter);

    modelBuilder.finishBuilding(francaMethod);

    JavaMethod javaMethod = modelBuilder.getFinalResult(JavaMethod.class);
    assertNotNull(javaMethod);
    assertEquals("foobar", javaMethod.returnComment);
  }

  @Test
  public void finishBuildingInputArgumentReadsComment() {
    modelBuilder.finishBuildingInputArgument(francaArgument);

    JavaParameter javaParameter = modelBuilder.getFinalResult(JavaParameter.class);
    assertNotNull(javaParameter);
    assertEquals(COMMENT, javaParameter.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaArgument);
  }

  @Test
  public void finishBuildingOutputArgumentReadsComment() {
    modelBuilder.finishBuildingOutputArgument(francaArgument);

    JavaParameter javaParameter = modelBuilder.getFinalResult(JavaParameter.class);
    assertNotNull(javaParameter);
    assertEquals(COMMENT, javaParameter.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaArgument);
  }

  @Test
  public void finishBuildingFrancaConstantReadsComment() {
    modelBuilder.finishBuilding(francaConstant);

    JavaConstant javaConstant = modelBuilder.getFinalResult(JavaConstant.class);
    assertNotNull(javaConstant);
    assertEquals(COMMENT, javaConstant.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaConstant);
  }

  @Test
  public void finishBuildingFrancaFieldReadsComment() {
    modelBuilder.finishBuilding(francaField);

    JavaField javaField = modelBuilder.getFinalResult(JavaField.class);
    assertNotNull(javaField);
    assertEquals(COMMENT, javaField.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaField);
  }

  @Test
  public void finishBuildingFrancaStructTypeReadsComment() {
    modelBuilder.finishBuilding(francaStructType);

    JavaClass javaClass = modelBuilder.getFinalResult(JavaClass.class);
    assertNotNull(javaClass);
    assertEquals(COMMENT, javaClass.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaStructType);
  }

  @Test
  public void finishBuildingFrancaEnumerationTypeReadsComment() {
    modelBuilder.finishBuilding(francaEnumerationType);

    JavaEnum javaEnum = modelBuilder.getFinalResult(JavaEnum.class);
    assertNotNull(javaEnum);
    assertEquals(COMMENT, javaEnum.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaEnumerationType);
  }

  @Test
  public void finishBuildingFrancaEnumeratorReadsComment() {
    modelBuilder.finishBuilding(francaEnumerator);

    JavaEnumItem javaEnumItem = modelBuilder.getFinalResult(JavaEnumItem.class);
    assertNotNull(javaEnumItem);
    assertEquals(COMMENT, javaEnumItem.comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaEnumerator);
  }

  @Test
  public void finishBuildingFrancaAttributeReadsComment() {
    modelBuilder.finishBuilding(francaAttribute);

    List<JavaMethod> methods =
        CollectionsHelper.getAllOfType(modelBuilder.getFinalResults(), JavaMethod.class);
    assertEquals(2, methods.size());
    assertEquals(COMMENT, methods.get(0).comment);
    assertEquals(COMMENT, methods.get(1).comment);

    PowerMockito.verifyStatic();
    CommentHelper.getDescription(francaAttribute);
  }
}
