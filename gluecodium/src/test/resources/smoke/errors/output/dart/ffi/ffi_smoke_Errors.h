#pragma once
#include "Export.h"
#include "OpaqueHandle.h"
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
_GLUECODIUM_FFI_EXPORT void smoke_Errors_methodWithErrors_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t smoke_Errors_methodWithErrors_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool smoke_Errors_methodWithErrors_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithErrors();
_GLUECODIUM_FFI_EXPORT void smoke_Errors_methodWithExternalErrors_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t smoke_Errors_methodWithExternalErrors_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool smoke_Errors_methodWithExternalErrors_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithExternalErrors();
_GLUECODIUM_FFI_EXPORT void smoke_Errors_methodWithErrorsAndReturnValue_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithErrorsAndReturnValue_return_get_result(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t smoke_Errors_methodWithErrorsAndReturnValue_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool smoke_Errors_methodWithErrorsAndReturnValue_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithErrorsAndReturnValue();
_GLUECODIUM_FFI_EXPORT void smoke_Errors_methodWithPayloadError_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithPayloadError_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool smoke_Errors_methodWithPayloadError_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithPayloadError();
_GLUECODIUM_FFI_EXPORT void smoke_Errors_methodWithPayloadErrorAndReturnValue_return_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithPayloadErrorAndReturnValue_return_get_result(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithPayloadErrorAndReturnValue_return_get_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT bool smoke_Errors_methodWithPayloadErrorAndReturnValue_return_has_error(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_methodWithPayloadErrorAndReturnValue();
_GLUECODIUM_FFI_EXPORT void smoke_Errors_release_handle(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_InternalErrorCode_create_handle_nullable(uint32_t value);
_GLUECODIUM_FFI_EXPORT void smoke_Errors_InternalErrorCode_release_handle_nullable(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t smoke_Errors_InternalErrorCode_get_value_nullable(FfiOpaqueHandle handle);_GLUECODIUM_FFI_EXPORT FfiOpaqueHandle smoke_Errors_ExternalErrors_create_handle_nullable(uint32_t value);
_GLUECODIUM_FFI_EXPORT void smoke_Errors_ExternalErrors_release_handle_nullable(FfiOpaqueHandle handle);
_GLUECODIUM_FFI_EXPORT uint32_t smoke_Errors_ExternalErrors_get_value_nullable(FfiOpaqueHandle handle);
#ifdef __cplusplus
}
#endif
