/*
 * Copyright (C) 2018 HERE Global B.V. and/or its affiliated companies. All rights reserved.
 *
 * This software, including documentation, is protected by copyright controlled by
 * HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
 * adapting or translating, any or all of this material requires the prior written
 * consent of HERE Global B.V. This material also contains confidential information,
 * which may not be disclosed to others without prior written consent of HERE Global B.V.
 *
 * Automatically generated. Do not modify. Your changes will be lost.
 */
package com.here.android.smoke;
import com.here.android.NativeBase;
/**
 * This is some very useful interface.
 */
public class Comments extends NativeBase {
    /**
     * This is some very useful constant.
     */
    static final boolean VERY_USEFUL = true;
    /**
     * This is some very useful enum.
     */
    public enum SomeEnum {
        /**
         * Not quite useful
         */
        USELESS(0),
        /**
         * Somewhat useful
         */
        USEFUL(1);
        public final int value;
        SomeEnum(final int value) {
            this.value = value;
        }
    }
    /**
     * This is some very useful struct.
     */
    public static class SomeStruct {
        /**
         * How useful this struct is
         */
        public boolean someField;
        public SomeStruct() {}
        public SomeStruct(boolean someField) {
            this.someField = someField;
        }
    }
    protected Comments(final long nativeHandle) {
        super(nativeHandle, new Disposer() {
            @Override
            public void disposeNative(long handle) {
                disposeNativeHandle(handle);
            }
        });
    }
    private static native void disposeNativeHandle(long nativeHandle);
    /**
     * This is some very useful method that measures the usefulness of its input.
     * @param input Very useful input parameter
     * @return Usefulness of the input
     */
    public native boolean someMethodWithAllComments(final String input);
    /**
     * This is some very useful method that measures the usefulness of its input.
     * @param input Very useful input parameter
     */
    public native boolean someMethodWithInputComments(final String input);
    /**
     * This is some very useful method that measures the usefulness of its input.
     * @return Usefulness of the input
     */
    public native boolean someMethodWithOutputComments(final String input);
    /**
     * This is some very useful method that measures the usefulness of its input.
     */
    public native boolean someMethodWithNoComments(final String input);
    /**
     * This is some very useful method that does not measure the usefulness of its input.
     * @param input Very useful input parameter
     */
    public native void someMethodWithoutReturnTypeWithAllComments(final String input);
    /**
     * This is some very useful method that does not measure the usefulness of its input.
     */
    public native void someMethodWithoutReturnTypeWithNoComments(final String input);
    /**
     * This is some very useful method that measures the usefulness of something.
     * @return Usefulness of the input
     */
    public native boolean someMethodWithoutInputParametersWithAllComments();
    /**
     * This is some very useful method that measures the usefulness of something.
     */
    public native boolean someMethodWithoutInputParametersWithNoComments();
    /**
     * This is some very useful method that does nothing.
     */
    public native void someMethodWithoutReturnTypeOrInputParameters();
    /**
     * This is some very useful attribute.
     */
    public native boolean getSomeAttribute();
    /**
     * This is some very useful attribute.
     */
    public native void setSomeAttribute(final boolean value);
}
