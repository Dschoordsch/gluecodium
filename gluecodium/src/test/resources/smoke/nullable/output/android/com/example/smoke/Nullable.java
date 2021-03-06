/*
 *

 */
package com.example.smoke;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import com.example.NativeBase;
import java.util.List;
import java.util.Map;
public final class Nullable extends NativeBase {
    public enum SomeEnum {
        ON(0),
        OFF(1);
        public final int value;
        SomeEnum(final int value) {
            this.value = value;
        }
    }
    public final static class SomeStruct {
        @NonNull
        public String stringField;
        public SomeStruct(@NonNull final String stringField) {
            this.stringField = stringField;
        }
    }
    public final static class NullableStruct {
        @Nullable
        public String stringField;
        @Nullable
        public Boolean boolField;
        @Nullable
        public Double doubleField;
        @Nullable
        public Nullable.SomeStruct structField;
        @Nullable
        public Nullable.SomeEnum enumField;
        @Nullable
        public List<String> arrayField;
        @Nullable
        public List<String> inlineArrayField;
        @Nullable
        public Map<Long, String> mapField;
        @Nullable
        public SomeInterface instanceField;
        public NullableStruct(@Nullable final String stringField, @Nullable final Boolean boolField, @Nullable final Double doubleField, @Nullable final Nullable.SomeStruct structField, @Nullable final Nullable.SomeEnum enumField, @Nullable final List<String> arrayField, @Nullable final List<String> inlineArrayField, @Nullable final Map<Long, String> mapField, @Nullable final SomeInterface instanceField) {
            this.stringField = stringField;
            this.boolField = boolField;
            this.doubleField = doubleField;
            this.structField = structField;
            this.enumField = enumField;
            this.arrayField = arrayField;
            this.inlineArrayField = inlineArrayField;
            this.mapField = mapField;
            this.instanceField = instanceField;
        }
    }
    public final static class NullableIntsStruct {
        @Nullable
        public Byte int8Field;
        @Nullable
        public Short int16Field;
        @Nullable
        public Integer int32Field;
        @Nullable
        public Long int64Field;
        @Nullable
        public Short uint8Field;
        @Nullable
        public Integer uint16Field;
        @Nullable
        public Long uint32Field;
        @Nullable
        public Long uint64Field;
        public NullableIntsStruct(@Nullable final Byte int8Field, @Nullable final Short int16Field, @Nullable final Integer int32Field, @Nullable final Long int64Field, @Nullable final Short uint8Field, @Nullable final Integer uint16Field, @Nullable final Long uint32Field, @Nullable final Long uint64Field) {
            this.int8Field = int8Field;
            this.int16Field = int16Field;
            this.int32Field = int32Field;
            this.int64Field = int64Field;
            this.uint8Field = uint8Field;
            this.uint16Field = uint16Field;
            this.uint32Field = uint32Field;
            this.uint64Field = uint64Field;
        }
    }
    /**
     * For internal use only.
     * @exclude
     */
    protected Nullable(final long nativeHandle) {
        super(nativeHandle, new Disposer() {
            @Override
            public void disposeNative(long handle) {
                disposeNativeHandle(handle);
            }
        });
    }
    private static native void disposeNativeHandle(long nativeHandle);
    @Nullable
    public native String methodWithString(@Nullable final String input);
    @Nullable
    public native Boolean methodWithBoolean(@Nullable final Boolean input);
    @Nullable
    public native Double methodWithDouble(@Nullable final Double input);
    @Nullable
    public native Long methodWithInt(@Nullable final Long input);
    @Nullable
    public native Nullable.SomeStruct methodWithSomeStruct(@Nullable final Nullable.SomeStruct input);
    @Nullable
    public native Nullable.SomeEnum methodWithSomeEnum(@Nullable final Nullable.SomeEnum input);
    @Nullable
    public native List<String> methodWithSomeArray(@Nullable final List<String> input);
    @Nullable
    public native List<String> methodWithInlineArray(@Nullable final List<String> input);
    @Nullable
    public native Map<Long, String> methodWithSomeMap(@Nullable final Map<Long, String> input);
    @Nullable
    public native SomeInterface methodWithInstance(@Nullable final SomeInterface input);
    @Nullable
    public native String getStringProperty();
    public native void setStringProperty(@Nullable final String value);
    @Nullable
    public native Boolean isBoolProperty();
    public native void setBoolProperty(@Nullable final Boolean value);
    @Nullable
    public native Double getDoubleProperty();
    public native void setDoubleProperty(@Nullable final Double value);
    @Nullable
    public native Long getIntProperty();
    public native void setIntProperty(@Nullable final Long value);
    @Nullable
    public native Nullable.SomeStruct getStructProperty();
    public native void setStructProperty(@Nullable final Nullable.SomeStruct value);
    @Nullable
    public native Nullable.SomeEnum getEnumProperty();
    public native void setEnumProperty(@Nullable final Nullable.SomeEnum value);
    @Nullable
    public native List<String> getArrayProperty();
    public native void setArrayProperty(@Nullable final List<String> value);
    @Nullable
    public native List<String> getInlineArrayProperty();
    public native void setInlineArrayProperty(@Nullable final List<String> value);
    @Nullable
    public native Map<Long, String> getMapProperty();
    public native void setMapProperty(@Nullable final Map<Long, String> value);
    @Nullable
    public native SomeInterface getInstanceProperty();
    public native void setInstanceProperty(@Nullable final SomeInterface value);
}