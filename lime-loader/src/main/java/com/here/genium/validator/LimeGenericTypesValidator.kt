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

package com.here.genium.validator

import com.here.genium.common.LimeTypeRefsVisitor
import com.here.genium.model.lime.LimeAttributeType
import com.here.genium.model.lime.LimeBasicType
import com.here.genium.model.lime.LimeEnumeration
import com.here.genium.model.lime.LimeMap
import com.here.genium.model.lime.LimeModel
import com.here.genium.model.lime.LimeNamedElement
import com.here.genium.model.lime.LimeSet
import com.here.genium.model.lime.LimeType
import com.here.genium.model.lime.LimeTypeHelper
import com.here.genium.model.lime.LimeTypeRef
import java.util.logging.Logger

// Validate set element types and map key types to ensure these are hashable types.
internal class LimeGenericTypesValidator(private val logger: Logger)
    : LimeTypeRefsVisitor<Boolean>() {

    fun validate(limeModel: LimeModel) = !traverseModel(limeModel).contains(false)

    override fun visitTypeRef(
        parentElement: LimeNamedElement,
        limeTypeRef: LimeTypeRef?
    ): Boolean {
        if (limeTypeRef == null) {
            return true
        }

        val referredType = limeTypeRef.type
        return when (referredType) {
            is LimeSet ->
                validateGenericType(parentElement, referredType.elementType, "set element")
            is LimeMap -> validateGenericType(parentElement, referredType.keyType, "map key")
            else -> true
        }
    }

    private fun validateGenericType(
        parentElement: LimeNamedElement,
        elementTypeRef: LimeTypeRef,
        elementDescription: String
    ): Boolean {
        val limeType = elementTypeRef.type
        val result = isHashable(limeType)
        if (!result) {
            logger.severe("${parentElement.fullName}: $elementDescription type " +
                "${limeType.fullName} is not hashable")
        }
        return result
    }

    private fun isHashable(limeType: LimeType): Boolean {
        val actualType = LimeTypeHelper.getActualType(limeType)
        return when {
            actualType is LimeEnumeration -> true
            actualType.attributes.have(LimeAttributeType.EQUATABLE) -> true
            actualType.attributes.have(LimeAttributeType.POINTER_EQUATABLE) -> true
            actualType is LimeBasicType -> actualType.typeId != LimeBasicType.TypeId.BLOB &&
                    actualType.typeId != LimeBasicType.TypeId.DATE
            else -> false
        }
    }
}