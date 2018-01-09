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

package com.here.ivi.api.model.cbridge;

import com.here.ivi.api.generator.cbridge.CppTypeInfo;
import java.util.ArrayList;
import java.util.List;

/** Field of a com.here.ivi.api.model.cbridge.CStruct */
public final class CField extends CElement {

  public final String baseLayerName;
  public final CppTypeInfo type;

  public CField(String swiftLayerName, String baseLayerName, CppTypeInfo cppTypeInfo) {
    super(swiftLayerName);
    this.baseLayerName = baseLayerName;
    type = cppTypeInfo;
  }

  @SuppressWarnings("unused")
  public List<CParameter.SimpleParameter> getSetterParameters() {
    List<CParameter.SimpleParameter> inParameters = new ArrayList<>();
    for (int i = 0; i < type.cTypesNeededByConstructor.size(); ++i) {
      inParameters.add(
          new CParameter.SimpleParameter(
              name + type.paramSuffixes.get(i), type.cTypesNeededByConstructor.get(i)));
    }
    return inParameters;
  }

  @Override
  public String toString() {
    return type.functionReturnType + " " + name;
  }
}