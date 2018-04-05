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

package com.here.genium.model.swift;

import lombok.Builder;

public final class SwiftEnumItem extends SwiftModelElement {
  public final SwiftValue value;

  @Builder
  protected SwiftEnumItem(String name, String comment, SwiftValue value) {
    super(name);
    this.comment = comment;
    this.value = value;
  }

  public static SwiftEnumItem.SwiftEnumItemBuilder builder(String name) {
    return new SwiftEnumItem.SwiftEnumItemBuilder().name(name);
  }
}
