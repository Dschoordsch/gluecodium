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

package com.here.ivi.api.generator.common.jni.templates

import com.here.ivi.api.model.javamodel.JavaClass
import com.here.ivi.api.generator.common.java.templates.JavaCopyrightHeaderTemplate;

public class JavaNativeInterfacesHeaderTemplate {
  def static generate(JavaClass javaClass) '''
    «JavaCopyrightHeaderTemplate.generate()»

    #include <jni.h>

    /**
     * JNI header for class «javaClass.name»
     */
    pragma once

    #ifdef __cplusplus
    extern "C" {
    #endif

    «FOR method : javaClass.methods»
    /**
     * Function for «javaClass.name».«method.name»()
     */
    JNIEXPORT «method.returnType.name» JNICALL
    Java_com_here_ivi_«javaClass.name»_«method.name»(JNIEnv* env, jobject jinstance«FOR param : method.inParameters», j«param.type» j«param.name»«ENDFOR»);

    «ENDFOR»

    #ifdef __cplusplus
    }
    #endif
  '''
}
