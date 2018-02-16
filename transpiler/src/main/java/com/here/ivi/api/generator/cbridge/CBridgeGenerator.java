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

package com.here.ivi.api.generator.cbridge;

import static com.here.ivi.api.generator.cbridge.CBridgeNameRules.CBRIDGE_PUBLIC;
import static com.here.ivi.api.generator.cbridge.CBridgeNameRules.INCLUDE_DIR;
import static com.here.ivi.api.generator.cbridge.CBridgeNameRules.SRC_DIR;

import com.google.common.annotations.VisibleForTesting;
import com.here.ivi.api.generator.common.GeneratedFile;
import com.here.ivi.api.generator.common.TemplateEngine;
import com.here.ivi.api.generator.common.modelbuilder.FrancaTreeWalker;
import com.here.ivi.api.generator.cpp.CppModelBuilder;
import com.here.ivi.api.generator.cpp.CppTypeMapper;
import com.here.ivi.api.generator.swift.SwiftModelBuilder;
import com.here.ivi.api.model.cbridge.CInterface;
import com.here.ivi.api.model.cbridge.IncludeResolver;
import com.here.ivi.api.model.common.Include;
import com.here.ivi.api.model.cpp.CppIncludeResolver;
import com.here.ivi.api.model.franca.FrancaDeploymentModel;
import com.here.ivi.api.platform.common.GeneratorSuite;
import java.nio.file.Paths;
import java.util.*;
import java.util.stream.Stream;
import org.franca.core.franca.FTypeCollection;

public class CBridgeGenerator {

  private final FrancaDeploymentModel deploymentModel;
  private final IncludeResolver resolver;
  private final String internalNamespace;

  public final CArrayGenerator arrayGenerator = new CArrayGenerator();

  public static final List<GeneratedFile> STATIC_FILES =
      Arrays.asList(
          GeneratorSuite.copyTarget(CBridgeNameRules.BASE_HANDLE_FILE, ""),
          GeneratorSuite.copyTarget(CBridgeNameRules.BASE_HANDLE_IMPL_FILE, ""),
          GeneratorSuite.copyTarget(CBridgeNameRules.STRING_HANDLE_FILE, ""),
          GeneratorSuite.copyTarget(
              Paths.get(CBRIDGE_PUBLIC, SRC_DIR, "StringHandle.cpp").toString(), ""),
          GeneratorSuite.copyTarget(
              Paths.get(CBRIDGE_PUBLIC, INCLUDE_DIR, "ByteArrayHandle.h").toString(), ""),
          GeneratorSuite.copyTarget(
              Paths.get(CBRIDGE_PUBLIC, SRC_DIR, "ByteArrayHandle.cpp").toString(), ""),
          GeneratorSuite.copyTarget(CBridgeComponents.PROXY_CACHE_FILENAME, ""));

  public CBridgeGenerator(
      final FrancaDeploymentModel deploymentModel,
      final IncludeResolver includeResolver,
      final String internalNamespace) {
    this.deploymentModel = deploymentModel;
    this.resolver = includeResolver;
    this.internalNamespace = internalNamespace;
  }

  public Stream<GeneratedFile> generate(final FTypeCollection francaTypeCollection) {
    CInterface cModel = buildCBridgeModel(francaTypeCollection);
    return Stream.of(
            new GeneratedFile(
                generateHeaderContent(cModel),
                CBridgeNameRules.getHeaderFileNameWithPath(francaTypeCollection)),
            new GeneratedFile(
                generateImplementationContent(cModel),
                CBridgeNameRules.getImplementationFileNameWithPath(francaTypeCollection)))
        .filter(file -> !file.content.isEmpty());
  }

  @VisibleForTesting
  public static String generateHeaderContent(CInterface model) {
    return TemplateEngine.render("cbridge/Header", model);
  }

  @VisibleForTesting
  public static String generateImplementationContent(CInterface model) {
    return TemplateEngine.render("cbridge/Implementation", model);
  }

  public CInterface buildCBridgeModel(final FTypeCollection francaTypeCollection) {

    CppTypeMapper typeMapper = new CppTypeMapper(new CppIncludeResolver(), internalNamespace);
    CppModelBuilder cppBuilder = new CppModelBuilder(deploymentModel, typeMapper);
    SwiftModelBuilder swiftBuilder = new SwiftModelBuilder(deploymentModel);
    CBridgeModelBuilder modelBuilder =
        new CBridgeModelBuilder(deploymentModel, resolver, cppBuilder, swiftBuilder);
    FrancaTreeWalker treeWalker =
        new FrancaTreeWalker(Arrays.asList(cppBuilder, swiftBuilder, modelBuilder));

    treeWalker.walkTree(francaTypeCollection);
    CInterface cModel = modelBuilder.getFinalResult(CInterface.class);

    removeRedundantIncludes(francaTypeCollection, cModel);
    arrayGenerator.collect(modelBuilder.arraysCollector);

    return cModel;
  }

  private void removeRedundantIncludes(
      final FTypeCollection francaTypeCollection, CInterface cModel) {
    cModel.headerIncludes.remove(
        Include.createInternalInclude(
            CBridgeNameRules.getHeaderFileNameWithPath(francaTypeCollection)));
    cModel.implementationIncludes.removeAll(cModel.headerIncludes);
    cModel.privateHeaderIncludes.removeAll(cModel.headerIncludes);
  }
}
