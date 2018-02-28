/*
 * Copyright (c) 2016-2018 HERE Europe B.V.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 * License-Filename: LICENSE
 */

package com.here.ivi.api.generator.java.templates;

import static org.junit.Assert.assertEquals;

import com.here.ivi.api.generator.common.TemplateEngine;
import com.here.ivi.api.model.java.JavaCustomType;
import com.here.ivi.api.model.java.JavaField;
import com.here.ivi.api.model.java.JavaPrimitiveType;
import com.here.ivi.api.model.java.JavaReferenceType;
import com.here.ivi.api.model.java.JavaValue;
import com.here.ivi.api.model.java.JavaVisibility;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.JUnit4;

@RunWith(JUnit4.class)
@SuppressWarnings({"MethodName"})
public final class JavaFieldTemplateTest {
  @Test
  public void generate_simple() {
    // Arrange
    JavaField javaField = new JavaField(JavaPrimitiveType.INT, "intField");

    // Act
    String generated = TemplateEngine.render("java/Field", javaField);

    // Assert
    assertEquals("int intField;", generated);
  }

  @Test
  public void generate_fieldWithInitialValueAndVisibility() {
    // Arrange
    JavaField javaField = new JavaField(JavaPrimitiveType.INT, "intField", new JavaValue("1"));
    javaField.visibility = JavaVisibility.PRIVATE;

    // Act
    String generated = TemplateEngine.render("java/Field", javaField);

    // Assert
    assertEquals("private int intField = 1;", generated);
  }

  @Test
  public void generate_stringFieldWithComment() {
    // Arrange
    JavaField javaField =
        new JavaField(new JavaReferenceType(JavaReferenceType.Type.STRING), "stringField");
    javaField.visibility = JavaVisibility.PUBLIC;
    javaField.comment = "Field comment";
    String expected = "/**\n" + " * Field comment\n" + " */\n" + "public String stringField;";

    // Act
    String generated = TemplateEngine.render("java/Field", javaField);

    // Assert
    assertEquals(expected, generated);
  }

  @Test
  public void generate_customTypeWithInitializer() {
    // Arrange
    JavaCustomType customType = new JavaCustomType("CustomType");
    JavaField javaField = new JavaField(customType, "customField", new JavaValue(customType));
    String expected = "CustomType customField = new CustomType();";

    // Act
    String generated = TemplateEngine.render("java/Field", javaField);

    // Assert
    assertEquals(expected, generated);
  }
}
