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

package com.here.gluecodium.model.cbridge

import com.here.gluecodium.generator.cbridge.CBridgeNameRules
import com.here.gluecodium.generator.cbridge.CppTypeInfo
import com.here.gluecodium.generator.common.NameHelper
import com.here.gluecodium.model.common.Include

class CFunction(
    val shortName: String?,
    nestedSpecifier: String? = null,
    val returnType: CppTypeInfo = CppTypeInfo(CType.VOID),
    val parameters: List<CParameter> = listOf(),
    val selfParameter: CParameter? = null,
    val delegateCall: String = "",
    val delegateCallIncludes: Set<Include> = setOf(),
    val functionName: String? = null,
    val cppReturnTypeName: String? = null,
    @Suppress("unused") val isConst: Boolean = false,
    val error: CppTypeInfo? = null,
    @Suppress("unused") val errorTypeIsEnum: Boolean = false
) : CElement(
    NameHelper.joinNames(
        nestedSpecifier,
        shortName,
        CBridgeNameRules.UNDERSCORE
    ) ?: ""
) {
    @Suppress("unused")
    val isReturningVoid = returnType.functionReturnType == CType.VOID
}
