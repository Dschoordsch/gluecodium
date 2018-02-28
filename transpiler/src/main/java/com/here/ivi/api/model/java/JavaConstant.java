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

package com.here.ivi.api.model.java;

import java.util.stream.Stream;

public class JavaConstant extends JavaElement {
  public final JavaType type;
  public final JavaValue value;

  public JavaConstant(final JavaType type, final String name, final JavaValue value) {
    super(name);
    this.type = type;
    if (value == null) {
      // TODO APIGEN-484 handle this case
      this.value = new JavaValue("TODO");
    } else {
      this.value = value;
    }
  }

  @Override
  public Stream<JavaElement> stream() {
    return Stream.of(type, value);
  }
}
