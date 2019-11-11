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

@file:Suppress("unused", "UnstableApiUsage")

package com.here.gluecodium.gradle

import com.here.gluecodium.Gluecodium
import com.here.gluecodium.cli.OptionReader
import org.gradle.api.NonNullApi
import org.gradle.api.provider.Property
import org.gradle.api.tasks.CacheableTask
import org.gradle.api.tasks.Input
import org.gradle.api.tasks.InputFile
import org.gradle.api.tasks.Internal
import org.gradle.api.tasks.Optional
import org.gradle.api.tasks.OutputDirectory
import org.gradle.api.tasks.SourceTask
import org.gradle.api.tasks.TaskAction
import java.io.File

@NonNullApi
@CacheableTask
open class GluecodiumTask : SourceTask() {
    @Internal
    lateinit var javaGenerator: String

    @OutputDirectory
    val outputDirectory: Property<File> = project.objects.property(File::class.java)

    @Optional
    @InputFile
    val copyrightHeaderFile: Property<File> = project.objects.property(File::class.java)

    @Optional
    @Input
    val javaPackage: Property<String> = project.objects.property(String::class.java)

    @Optional
    @Input
    val javaInternalPackage: Property<String> = project.objects.property(String::class.java)

    @Optional
    @InputFile
    val javaNameRules: Property<File> = project.objects.property(File::class.java)

    @Optional
    @Input
    val javaNonNullAnnotation: Property<String> = project.objects.property(String::class.java)

    @Optional
    @Input
    val javaNullableAnnotation: Property<String> = project.objects.property(String::class.java)

    @Optional
    @InputFile
    val androidMergeManifest: Property<File> = project.objects.property(File::class.java)

    @Optional
    @Input
    val cppNamespace: Property<String> = project.objects.property(String::class.java)

    @Optional
    @Input
    val cppInternalNamespace: Property<String> = project.objects.property(String::class.java)

    @Optional
    @Input
    val cppExportMacroName: Property<String> = project.objects.property(String::class.java)

    @Optional
    @InputFile
    val cppNameRules: Property<File> = project.objects.property(File::class.java)

    @TaskAction
    fun execute() {
        val options = Gluecodium.Options()
        options.inputDirs = source.files.map { it.absolutePath }
        options.outputDir = outputDirectory.get().absolutePath
        options.generators = setOf(javaGenerator, "cpp")

        copyrightHeaderFile.orNull?.let { options.copyrightHeaderContents = it.readText() }
        javaPackage.orNull?.let { options.javaPackages = it.split(".") }
        javaInternalPackage.orNull?.let { options.javaInternalPackages = it.split(".") }
        options.javaNameRules =
            OptionReader.readConfigFile(javaNameRules.orNull?.absolutePath, options.javaNameRules)
        options.javaNonNullAnnotation = OptionReader.parseAnnotation(javaNonNullAnnotation.orNull)
        options.javaNullableAnnotation = OptionReader.parseAnnotation(javaNullableAnnotation.orNull)
        androidMergeManifest.orNull?.let { options.androidMergeManifestPath = it.absolutePath }
        cppNamespace.orNull?.let { options.cppRootNamespace = it.split(".") }
        cppInternalNamespace.orNull?.let { options.cppInternalNamespace = it.split(".") }
        cppExportMacroName.orNull?.let { options.cppExport = it }
        options.cppNameRules =
            OptionReader.readConfigFile(cppNameRules.orNull?.absolutePath, options.cppNameRules)

        Gluecodium(options).execute()
    }
}
