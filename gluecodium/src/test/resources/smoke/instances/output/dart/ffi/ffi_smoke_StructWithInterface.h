#pragma once
#include "Export.h"
#include "OpaqueHandle.h"
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_StructWithInterface_create_handle(FfiOpaqueHandle);
_GLUECODIUM_FFI_EXPORT void smoke_StructWithInterface_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_StructWithInterface_get_field_interfaceInstance(FfiOpaqueHandle handle);
#ifdef __cplusplus
}
#endif
