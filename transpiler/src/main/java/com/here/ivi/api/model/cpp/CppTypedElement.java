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

package com.here.ivi.api.model.cpp;

public abstract class CppTypedElement extends CppElement {

  public final CppTypeRef type;

  public CppTypedElement(final String name, final CppTypeRef type) {
    super(name);
    this.type = type;
  }

  public CppTypedElement(
      final String name, final String fullyQualifiedName, final CppTypeRef type) {
    super(name, fullyQualifiedName);
    this.type = type;
  }
}