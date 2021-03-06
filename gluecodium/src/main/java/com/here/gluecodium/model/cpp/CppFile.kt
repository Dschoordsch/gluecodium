/*
 * Copyright (C) 2016-2019 HERE Europe B.V.
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

package com.here.gluecodium.model.cpp

import com.here.gluecodium.generator.cpp.TopologicalSort
import com.here.gluecodium.model.common.Include
import java.util.TreeSet

class CppFile(
    val filename: String,
    val namespace: List<String> = emptyList(),
    val members: List<CppElement> = emptyList(),
    includes: List<Include> = emptyList(),
    implementationIncludes: List<Include> = emptyList(),
    @Suppress("unused") val forwardDeclarations: List<CppForwardDeclarationGroup> = emptyList(),
    @Suppress("unused") val errorEnums: List<CppEnum> = emptyList(),
    @Suppress("unused") var exportName: String? = null,
    var internalNamespace: List<String>? = null
) {
    val includes = TreeSet(includes)
    val implementationIncludes = TreeSet(implementationIncludes)

    @Suppress("unused")
    val sortedMembers: List<CppElement>
        get() = TopologicalSort(members).sort()

    val classes: List<CppClass>
        get() = members.filterIsInstance<CppClass>()

    @Suppress("unused")
    val equatables: List<CppElement>
        get() = members.flatMap { it.allElementsRecursive }
            .filterIsInstance<CppExternableElement>()
            .filter { !it.isExternal && (it is CppClass && it.isEquatable || it is CppStruct && it.isEquatable) }

    @Suppress("unused")
    val hasExternalTypes
        get() = members.filterIsInstance<CppExternableElement>().any { it.isExternal }

    @Suppress("unused")
    val typeRegisteredClasses
        get() = members.flatMap { it.allElementsRecursive }.filterIsInstance<CppClass>()
            .filter { !it.isExternal && it.isInheritable && it.inheritances.isEmpty() }
}
