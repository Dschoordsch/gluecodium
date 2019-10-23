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

package com.here.gluecodium.common

import com.here.gluecodium.model.lime.LimeContainerWithInheritance
import com.here.gluecodium.model.lime.LimeException
import com.here.gluecodium.model.lime.LimeFunction
import com.here.gluecodium.model.lime.LimeModel
import com.here.gluecodium.model.lime.LimeNamedElement
import com.here.gluecodium.model.lime.LimeTypeAlias
import com.here.gluecodium.model.lime.LimeTypeRef
import com.here.gluecodium.model.lime.LimeTypedElement

abstract class LimeTypeRefsVisitor<T> {
    protected fun traverseModel(limeModel: LimeModel): List<T> {
        val allElements = limeModel.referenceMap.values
        return allElements.filterIsInstance<LimeTypedElement>().map { visitTypeRef(it, it.typeRef) } +
            allElements.filterIsInstance<LimeFunction>().flatMap {
                listOf(visitTypeRef(it, it.returnType.typeRef), visitTypeRef(it, it.thrownType?.typeRef))
            } +
            allElements.filterIsInstance<LimeContainerWithInheritance>().map { visitTypeRef(it, it.parent) } +
            allElements.filterIsInstance<LimeTypeAlias>().map { visitTypeRef(it, it.typeRef) } +
            allElements.filterIsInstance<LimeException>().map { visitTypeRef(it, it.errorType) }
    }

    abstract fun visitTypeRef(parentElement: LimeNamedElement, limeTypeRef: LimeTypeRef?): T
}