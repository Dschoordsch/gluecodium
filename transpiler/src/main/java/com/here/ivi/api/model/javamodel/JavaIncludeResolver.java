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

package com.here.ivi.api.model.javamodel;

import com.here.ivi.api.TranspilerExecutionException;
import com.here.ivi.api.model.FrancaElement;
import com.here.ivi.api.model.FrancaModel;
import com.here.ivi.api.model.Includes;
import java.util.Objects;
import java.util.Optional;
import java.util.stream.Collectors;

public final class JavaIncludeResolver {
  private FrancaModel<?, ?> rootModel;

  public JavaIncludeResolver(FrancaModel<?, ?> rootModel) {
    this.rootModel = rootModel;
  }

  public void resolveLazyIncludes(JavaElement root, String outputFile) {
    root.streamRecursive()
        .filter(p -> p instanceof JavaElementWithIncludes)
        .map(JavaElementWithIncludes.class::cast)
        .forEach(type -> resolveLazyIncludes(type, outputFile));
  }

  private void resolveLazyIncludes(JavaElementWithIncludes type, String outputFile) {
    type.includes =
        type.includes
            .stream()
            .map(
                include -> {
                  if (include instanceof Includes.LazyInternalInclude) {

                    Includes.LazyInternalInclude li = (Includes.LazyInternalInclude) include;

                    Optional<? extends FrancaElement<?>> externalDefinitionOpt =
                        rootModel.find(li.model, li.tc);
                    if (!externalDefinitionOpt.isPresent()) {
                      throw new TranspilerExecutionException(
                          String.format("Could not resolve type collection include %s.", li));
                    }

                    FrancaElement<?> externalDefinition = externalDefinitionOpt.get();
                    String includeName = li.nameRules.getHeaderPath(externalDefinition);

                    // no self includes needed
                    if (includeName.equals(outputFile)) {
                      return null;
                    }

                    return new Includes.InternalPublicInclude(includeName);
                  }

                  return include;
                })
            .filter(Objects::nonNull)
            .collect(Collectors.toSet());
  }
}
