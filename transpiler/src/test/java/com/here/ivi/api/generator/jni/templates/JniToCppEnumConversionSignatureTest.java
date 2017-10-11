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

package com.here.ivi.api.generator.jni.templates;

import static org.junit.Assert.assertEquals;

import com.here.ivi.api.generator.common.TemplateEngine;
import com.here.ivi.api.model.jni.JniContainer;
import com.here.ivi.api.model.jni.JniEnum;
import java.util.Arrays;
import java.util.List;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.JUnit4;

@RunWith(JUnit4.class)
public final class JniToCppEnumConversionSignatureTest {

  private static final String CPP_OUTER_CLASS_NAME = "CppOuter";

  private static final List<String> JAVA_PACKAGE = Arrays.asList("java", "package");
  private static final List<String> CPP_NAMESPACES = Arrays.asList("a", "superfancy", "namespace");

  @Test
  public void generateFromInterface() {

    // Arrange
    JniContainer jniContainer =
        JniContainer.createInterfaceContainer(
            JAVA_PACKAGE, CPP_NAMESPACES, null, CPP_OUTER_CLASS_NAME);

    JniEnum jniEnum = new JniEnum(jniContainer, "MyJavaEnum", "MyCppEnum");

    // Act
    String generated = TemplateEngine.render("jni/JniToCppEnumerationConversionSignature", jniEnum);

    // Assert
    String expected =
        "void convert_from_jni( JNIEnv* _jenv, const jobject _jinput, "
            + "::a::superfancy::namespace::CppOuter::MyCppEnum& _nout )";
    assertEquals(expected, generated);
  }

  @Test
  public void generateFromTypeCollection() {

    // Arrange
    JniContainer jniContainer =
        JniContainer.createTypeCollectionContainer(JAVA_PACKAGE, CPP_NAMESPACES);

    JniEnum jniEnum = new JniEnum(jniContainer, "MyJavaEnum", "MyCppEnum");

    // Act
    String generated = TemplateEngine.render("jni/JniToCppEnumerationConversionSignature", jniEnum);

    // Assert
    String expected =
        "void convert_from_jni( JNIEnv* _jenv, const jobject _jinput, "
            + "::a::superfancy::namespace::MyCppEnum& _nout )";
    assertEquals(expected, generated);
  }
}