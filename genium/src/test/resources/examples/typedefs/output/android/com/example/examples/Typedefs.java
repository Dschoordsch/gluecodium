/*
 *
 * Automatically generated. Do not modify. Your changes will be lost.
 */
package com.example.examples;
import com.example.NativeBase;
public class Typedefs extends NativeBase {
    /**
     * For internal use only.
     * @exclude
     */
    protected Typedefs(final long nativeHandle) {
        super(nativeHandle, new Disposer() {
            @Override
            public void disposeNative(long handle) {
                disposeNativeHandle(handle);
            }
        });
    }
    private static native void disposeNativeHandle(long nativeHandle);
    public static native long typedefMethod(final long input);
}