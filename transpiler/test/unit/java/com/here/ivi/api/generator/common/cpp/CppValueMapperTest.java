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

package com.here.ivi.api.generator.common.cpp;

import static org.junit.Assert.assertEquals;
import static org.mockito.Mockito.*;

import com.here.ivi.api.model.cppmodel.CppType;
import com.here.ivi.api.model.cppmodel.CppValue;
import org.franca.core.franca.*;
import org.junit.Test;

public class CppValueMapperTest {

  @Test
  public void mapConstantValueTest() {

    final String inputConstantName = "SomeFancyName";
    final String outputConstantName = "desiredOutputName";

    //mock franca types
    FTypeCollection fTypeCollection = mock(FTypeCollection.class);
    when(fTypeCollection.eContainer()).thenReturn(mock(FModel.class));

    FConstantDef fConstant = mock(FConstantDef.class);
    when(fConstant.getName()).thenReturn(inputConstantName);
    when(fConstant.eContainer()).thenReturn(fTypeCollection);
    when(fConstant.getType()).thenReturn(mock(FTypeRef.class));

    FQualifiedElementRef qualifiedElementRef = mock(FQualifiedElementRef.class);
    when(qualifiedElementRef.getElement()).thenReturn(fConstant);

    //mock nameRules
    CppNameRules nameRules = mock(CppNameRules.class);
    when(nameRules.getConstantName(inputConstantName)).thenReturn(outputConstantName);

    //actual test
    CppValue mappedValue = CppValueMapper.map(mock(CppType.class), qualifiedElementRef, nameRules);
    assertEquals(mappedValue.name, outputConstantName);
    verify(nameRules).getConstantName(inputConstantName);
  }
}
