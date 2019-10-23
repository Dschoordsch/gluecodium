/*
 *

 */
package com.example.examples;
import android.support.annotation.NonNull;
import com.example.NativeBase;
import java.util.Map;
public final class Maps extends NativeBase {
    /**
     * For internal use only.
     * @exclude
     */
    protected Maps(final long nativeHandle) {
        super(nativeHandle, new Disposer() {
            @Override
            public void disposeNative(long handle) {
                disposeNativeHandle(handle);
            }
        });
    }
    private static native void disposeNativeHandle(long nativeHandle);
    @NonNull
    public static native Map<Long, String> mapMethod(@NonNull final Map<Long, String> input);
    @NonNull
    public static native Map<Long, String> inlineMapMethod(@NonNull final Map<Long, String> input);
}