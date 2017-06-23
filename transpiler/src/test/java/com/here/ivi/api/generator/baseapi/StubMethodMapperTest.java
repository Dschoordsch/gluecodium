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

package com.here.ivi.api.generator.baseapi;

import static org.junit.Assert.*;
import static org.mockito.Mockito.*;

import com.here.ivi.api.model.FrancaElement;
import com.here.ivi.api.model.cppmodel.*;
import com.here.ivi.api.test.ArrayEList;
import navigation.BaseApiSpec;
import org.eclipse.emf.common.util.EList;
import org.franca.core.franca.*;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.JUnit4;
import org.mockito.Answers;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.MockitoAnnotations;

@RunWith(JUnit4.class)
public class StubMethodMapperTest {
  private static final String methodName = "shoot foot";
  private static final String argumentName = "which foot";
  private static final String stdString = "std::string";

  @Mock(answer = Answers.RETURNS_DEEP_STUBS)
  private FMethod francaMethod;

  @Mock private FrancaElement<BaseApiSpec.InterfacePropertyAccessor> francaElement;
  @Mock private BaseApiSpec.InterfacePropertyAccessor propertyAccessor;

  @InjectMocks private StubMethodMapper mapper;

  private CppClass cppClass = new CppClass("");

  @Before
  public void setUp() {
    MockitoAnnotations.initMocks(this);

    when(francaMethod.getErrorEnum()).thenReturn(null);
    when(francaMethod.getOutArgs()).thenReturn(new ArrayEList<>());
    when(francaMethod.getName()).thenReturn(methodName);

    when(francaElement.getPropertyAccessor()).thenReturn(propertyAccessor);
  }

  private CppMethod getFirstMethod() {
    assertNotNull(cppClass.methods);
    assertEquals(1, cppClass.methods.size());

    CppMethod cppMethod = cppClass.methods.iterator().next();
    assertNotNull(cppMethod);

    return cppMethod;
  }

  private EList<FArgument> createFrancaArgumentsArray() {
    FTypeCollection parentTypeCollection = mock(FTypeCollection.class);
    when(parentTypeCollection.eContainer()).thenReturn(mock(FModel.class));

    FTypeRef typeRef = mock(FTypeRef.class);
    when(typeRef.getPredefined()).thenReturn(FBasicTypeId.STRING);
    when(typeRef.eContainer()).thenReturn(parentTypeCollection);

    FArgument argument = mock(FArgument.class);
    when(argument.getName()).thenReturn(argumentName);
    when(argument.getType()).thenReturn(typeRef);

    ArrayEList<FArgument> arguments = new ArrayEList<>();
    arguments.add(argument);

    return arguments;
  }

  @Test
  public void mapMethodElementsNoArguments() {
    mapper.mapMethodElements(cppClass, francaMethod, francaElement);

    CppMethod cppMethod = getFirstMethod();
    assertEquals(methodName, cppMethod.name);
    assertTrue(cppMethod.getInParameters().isEmpty());
    assertTrue(cppMethod.getOutParameters().isEmpty());
    assertEquals(CppType.VOID, cppMethod.getReturnType());
  }

  @Test
  public void mapMethodElementsStaticMethod() {
    when(propertyAccessor.getStatic(francaMethod)).thenReturn(true);

    mapper.mapMethodElements(cppClass, francaMethod, francaElement);

    CppMethod cppMethod = getFirstMethod();
    assertTrue(cppMethod.getSpecifiers().contains(CppMethod.Specifier.STATIC));
  }

  @Test
  public void mapMethodElementsOneInputArgument() {
    EList<FArgument> francaArguments = createFrancaArgumentsArray();
    when(francaMethod.getInArgs()).thenReturn(francaArguments);

    mapper.mapMethodElements(cppClass, francaMethod, francaElement);

    CppMethod cppMethod = getFirstMethod();
    assertEquals(1, cppMethod.getInParameters().size());

    CppParameter cppParameter = cppMethod.getInParameters().get(0);
    assertEquals(argumentName, cppParameter.name);
    assertNotNull(cppParameter.type);
    assertEquals(stdString, cppParameter.type.name);
  }

  @Test
  public void mapMethodElementsOneOutputArgument() {
    EList<FArgument> francaArguments = createFrancaArgumentsArray();
    when(francaMethod.getOutArgs()).thenReturn(francaArguments);

    mapper.mapMethodElements(cppClass, francaMethod, francaElement);

    CppMethod cppMethod = getFirstMethod();
    assertTrue(cppMethod.getOutParameters().isEmpty());

    assertNotNull(cppMethod.getReturnType());
    assertEquals(stdString, cppMethod.getReturnType().name);
  }
}
