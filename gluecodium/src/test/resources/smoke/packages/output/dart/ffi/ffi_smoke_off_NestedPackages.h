#pragma once
#include "Export.h"
#include "OpaqueHandle.h"
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_off_NestedPackages_basicMethod__SomeStruct(FfiOpaqueHandle input);
_GLUECODIUM_FFI_EXPORT void smoke_off_NestedPackages_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_off_NestedPackages_SomeStruct_create_handle(FfiOpaqueHandle);
_GLUECODIUM_FFI_EXPORT void smoke_off_NestedPackages_SomeStruct_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_off_NestedPackages_SomeStruct_get_field_someField(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_off_NestedPackages_SomeStruct_create_handle_nullable(FfiOpaqueHandle value);
_GLUECODIUM_FFI_EXPORT void smoke_off_NestedPackages_SomeStruct_release_handle_nullable(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_off_NestedPackages_SomeStruct_get_value_nullable(FfiOpaqueHandle handle);
#ifdef __cplusplus
}
#endif
