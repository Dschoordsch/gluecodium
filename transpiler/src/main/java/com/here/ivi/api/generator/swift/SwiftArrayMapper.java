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

package com.here.ivi.api.generator.swift;

import com.here.ivi.api.generator.cbridge.CArrayMapper;
import com.here.ivi.api.model.swift.*;
import org.eclipse.emf.ecore.EObject;

public class SwiftArrayMapper {

  public static SwiftArray create(SwiftType underlyingType, EObject francaElement) {
    SwiftArray array = new SwiftArray(underlyingType);
    StringBuffer cName = new StringBuffer(CArrayMapper.getName(francaElement));
    //In case of nested arrays (inlinearrays)
    cName.append(addSuffix(underlyingType));
    array.refName = CArrayMapper.addPrefix(cName.toString());
    array.implementingClass = SwiftNameRules.getArrayName(underlyingType);
    return array;
  }

  private static String addSuffix(final SwiftType innerType) {
    SwiftArray arrayType = (innerType instanceof SwiftArray) ? (SwiftArray) innerType : null;
    String suffix = "";
    if (arrayType instanceof SwiftArray && arrayType.underlyingType != null) {
      suffix = addSuffix(arrayType.underlyingType) + "Array";
    }
    return suffix;
  }
}