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

package com.here.genium.model.lime

class LimeProperty(
    path: LimePath,
    visibility: LimeVisibility = LimeVisibility.PUBLIC,
    comment: LimeComment = LimeComment(),
    attributes: LimeAttributes? = null,
    typeRef: LimeTypeRef,
    val getter: LimeMethod,
    val setter: LimeMethod? = null,
    val isStatic: Boolean = false
) : LimeTypedElement(path, visibility, comment, attributes, typeRef) {

    @Suppress("unused")
    val needsAccessorsSection = setter == null ||
            getter.visibility != visibility || setter.visibility != visibility ||
            !getter.attributes.isEmpty() || !setter.attributes.isEmpty()
}
