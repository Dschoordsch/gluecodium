/*
 *
 * Automatically generated. Do not modify. Your changes will be lost.
 */
package com.example.smoke;
import android.support.annotation.NonNull;
import com.example.NativeBase;
public class StructsWithMethodsInterface extends NativeBase {
    public static class Vector3 {
        public double x;
        public double y;
        public double z;
        public Vector3(final String input) {
            Vector3 _other = create(input);
            this.x = _other.x;
            this.y = _other.y;
            this.z = _other.z;
        }
        public Vector3(@NonNull final StructsWithMethodsInterface.Vector3 other) throws ValidationErrorException {
            Vector3 _other = create(other);
            this.x = _other.x;
            this.y = _other.y;
            this.z = _other.z;
        }
        private Vector3() {
            this.x = 0;
            this.y = 0;
            this.z = 0;
        }
        public native double distanceTo(@NonNull final StructsWithMethodsInterface.Vector3 other);
        @NonNull
        public native StructsWithMethodsInterface.Vector3 add(@NonNull final StructsWithMethodsInterface.Vector3 other);
        public static native boolean validate(final double x, final double y, final double z);
        private static native StructsWithMethodsInterface.Vector3 create(final String input);
        private static native StructsWithMethodsInterface.Vector3 create(@NonNull final StructsWithMethodsInterface.Vector3 other) throws ValidationErrorException;
    }
    /**
     * For internal use only.
     * @exclude
     */
    protected StructsWithMethodsInterface(final long nativeHandle) {
        super(nativeHandle, new Disposer() {
            @Override
            public void disposeNative(long handle) {
                disposeNativeHandle(handle);
            }
        });
    }
    private static native void disposeNativeHandle(long nativeHandle);
}
