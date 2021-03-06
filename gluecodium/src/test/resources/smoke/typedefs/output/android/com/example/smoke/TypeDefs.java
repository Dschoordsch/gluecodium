/*
 *

 */
package com.example.smoke;
import android.support.annotation.NonNull;
import com.example.NativeBase;
import java.util.List;
public final class TypeDefs extends NativeBase {
    public final static class StructHavingAliasFieldDefinedBelow {
        public double field;
        public StructHavingAliasFieldDefinedBelow(final double field) {
            this.field = field;
        }
    }
    public final static class TestStruct {
        @NonNull
        public String something;
        public TestStruct(@NonNull final String something) {
            this.something = something;
        }
    }
    /**
     * For internal use only.
     * @exclude
     */
    protected TypeDefs(final long nativeHandle) {
        super(nativeHandle, new Disposer() {
            @Override
            public void disposeNative(long handle) {
                disposeNativeHandle(handle);
            }
        });
    }
    private static native void disposeNativeHandle(long nativeHandle);
    public static native double methodWithPrimitiveTypeDef(final double input);
    @NonNull
    public static native List<TypeDefs.TestStruct> methodWithComplexTypeDef(@NonNull final List<TypeDefs.TestStruct> input);
    public static native double returnNestedIntTypeDef(final double input);
    @NonNull
    public static native TypeDefs.TestStruct returnTestStructTypeDef(@NonNull final TypeDefs.TestStruct input);
    @NonNull
    public static native TypeDefs.TestStruct returnNestedStructTypeDef(@NonNull final TypeDefs.TestStruct input);
    @NonNull
    public static native Point returnTypeDefPointFromTypeCollection(@NonNull final Point input);
    @NonNull
    public native List<Double> getPrimitiveTypeProperty();
    public native void setPrimitiveTypeProperty(@NonNull final List<Double> value);
}