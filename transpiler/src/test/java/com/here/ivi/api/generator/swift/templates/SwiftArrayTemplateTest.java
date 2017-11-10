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

package com.here.ivi.api.generator.swift.templates;

import static org.powermock.api.mockito.PowerMockito.when;

import com.here.ivi.api.generator.swift.SwiftArrayGenerator;
import com.here.ivi.api.generator.swift.SwiftArrayMapper;
import com.here.ivi.api.model.swift.*;
import com.here.ivi.api.test.TemplateComparison;
import java.util.Collections;
import java.util.Map;
import org.franca.core.franca.FBasicTypeId;
import org.franca.core.franca.FTypeRef;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import org.powermock.core.classloader.annotations.PrepareForTest;
import org.powermock.modules.junit4.PowerMockRunner;

@RunWith(PowerMockRunner.class)
@PrepareForTest(FBasicTypeId.class)
public class SwiftArrayTemplateTest {

  @Mock private FBasicTypeId francaBasic;
  @Mock private FTypeRef francaTypeRef;

  @Test
  public void simpleArrayGeneration() {
    SwiftArrayGenerator swiftArrayGenerator = new SwiftArrayGenerator();
    SwiftArray arrayType = getStringArray();
    Map arrays = Collections.singletonMap(arrayType.underlyingType.name, arrayType);
    swiftArrayGenerator.collect(arrays);
    final String expected =
        "import Foundation\n"
            + "internal class StringList: CollectionOf<String> {\n"
            + "    let c_element: arrayCollection_String\n"
            + "    init(_ c_element: arrayCollection_String) {\n"
            + "        self.c_element = c_element\n"
            + "        super.init([])\n"
            + "        self.startIndex = 0\n"
            + "        self.endIndex = Int(arrayCollection_String_count(c_element))\n"
            + "    }\n"
            + "    public override subscript(index: Int) -> String {\n"
            + "        let handle = arrayCollection_String_get(c_element, UInt64(index))\n"
            + "        defer {\n"
            + "        std_string_release(handle)\n"
            + "        }\n"
            + "        return String(data: Data(bytes: std_string_data_get(handle),\n"
            + "        count: Int(std_string_size_get(handle))), encoding: .utf8)!\n"
            + "    }\n"
            + "}\n"
            + "extension Collection where Element == String  {\n"
            + "    public func c_conversion()-> (c_type: arrayCollection_String, cleanup: () ->Void) {\n"
            + "        let handle = arrayCollection_String_create()\n"
            + "        for item in self {\n"
            + "             arrayCollection_String_append(handle, item)\n"
            + "        }\n"
            + "        let cleanup_function = { () -> Void in\n"
            + "            arrayCollection_String_release(handle)\n"
            + "        }\n"
            + "        return (handle, cleanup_function)\n"
            + "    }\n"
            + "}\n";
    final String generated = swiftArrayGenerator.generate().get(0).content;
    TemplateComparison.assertEqualContent(expected, generated);
  }

  @Test
  public void nestedArrayGeneration() {
    SwiftArrayGenerator swiftArrayGenerator = new SwiftArrayGenerator();
    SwiftArray arrayType = getNestedStringArray();
    Map arrays = Collections.singletonMap(arrayType.underlyingType.name, arrayType);
    swiftArrayGenerator.collect(arrays);
    final String expected =
        "import Foundation\n"
            + "internal class StringListList: CollectionOf<CollectionOf<String>> {\n"
            + "    let c_element: arrayCollection_NestedStringArray\n"
            + "    init(_ c_element: arrayCollection_NestedStringArray) {\n"
            + "        self.c_element = c_element\n"
            + "        super.init([])\n"
            + "        self.startIndex = 0\n"
            + "        self.endIndex = Int(arrayCollection_NestedStringArray_count(c_element))\n"
            + "    }\n"
            + "    public override subscript(index: Int) -> CollectionOf<String> {\n"
            + "        let handle = arrayCollection_NestedStringArray_get(c_element, UInt64(index))\n"
            + "        return StringList(handle)\n"
            + "    }\n"
            + "}\n"
            + "extension Collection where Element == CollectionOf<String>  {\n"
            + "    public func c_conversion()-> (c_type: arrayCollection_NestedStringArray, cleanup: () ->Void) {\n"
            + "        let handle = arrayCollection_NestedStringArray_create()\n"
            + "        for item in self {\n"
            + "        let conversion = item.c_conversion()\n"
            + "        arrayCollection_NestedStringArray_append(handle, conversion.c_type)\n"
            + "        conversion.cleanup()\n"
            + "        }\n"
            + "        let cleanup_function = { () -> Void in\n"
            + "            arrayCollection_NestedStringArray_release(handle)\n"
            + "        }\n"
            + "        return (handle, cleanup_function)\n"
            + "    }\n"
            + "}\n";
    final String generated = swiftArrayGenerator.generate().get(0).content;
    TemplateComparison.assertEqualContent(expected, generated);
  }

  private SwiftArray getStringArray() {
    SwiftType arrayInnerType = SwiftType.STRING;
    when(francaBasic.getName()).thenReturn("String");
    when(francaTypeRef.getPredefined()).thenReturn(francaBasic);
    return SwiftArrayMapper.create(arrayInnerType, francaTypeRef);
  }

  private SwiftArray getNestedStringArray() {
    SwiftArray arrayInnerType = getStringArray();
    when(francaBasic.getName()).thenReturn("NestedString");
    when(francaTypeRef.getPredefined()).thenReturn(francaBasic);
    return SwiftArrayMapper.create(arrayInnerType, francaTypeRef);
  }
}