import 'package:library/src/smoke/Enums.dart';
import 'package:library/src/smoke/Enums_InternalErrorCode__conversion.dart';
import 'dart:ffi';
import 'package:ffi/ffi.dart';
import 'package:library/src/_library_init.dart' as __lib;
int smoke_Enums_InternalErrorCode_toFfi(Enums_InternalErrorCode value) {
  switch (value) {
  case Enums_InternalErrorCode.errorNone:
    return 0;
  break;
  case Enums_InternalErrorCode.errorFatal:
    return 999;
  break;
  default:
    throw StateError("Invalid enum value $value for Enums_InternalErrorCode enum.");
  }
}
Enums_InternalErrorCode smoke_Enums_InternalErrorCode_fromFfi(int handle) {
  switch (handle) {
  case 0:
    return Enums_InternalErrorCode.errorNone;
  break;
  case 999:
    return Enums_InternalErrorCode.errorFatal;
  break;
  default:
    throw StateError("Invalid numeric value $handle for Enums_InternalErrorCode enum.");
  }
}
void smoke_Enums_InternalErrorCode_releaseFfiHandle(int handle) {}
final _smoke_Enums_InternalErrorCode_create_handle_nullable = __lib.nativeLibrary.lookupFunction<
    Pointer<Void> Function(Uint32),
    Pointer<Void> Function(int)
  >('smoke_Enums_InternalErrorCode_create_handle_nullable');
final _smoke_Enums_InternalErrorCode_release_handle_nullable = __lib.nativeLibrary.lookupFunction<
    Void Function(Pointer<Void>),
    void Function(Pointer<Void>)
  >('smoke_Enums_InternalErrorCode_release_handle_nullable');
final _smoke_Enums_InternalErrorCode_get_value_nullable = __lib.nativeLibrary.lookupFunction<
    Uint32 Function(Pointer<Void>),
    int Function(Pointer<Void>)
  >('smoke_Enums_InternalErrorCode_get_value_nullable');
Pointer<Void> smoke_Enums_InternalErrorCode_toFfi_nullable(Enums_InternalErrorCode value) {
  if (value == null) return Pointer<Void>.fromAddress(0);
  final _handle = smoke_Enums_InternalErrorCode_toFfi(value);
  final result = _smoke_Enums_InternalErrorCode_create_handle_nullable(_handle);
  smoke_Enums_InternalErrorCode_releaseFfiHandle(_handle);
  return result;
}
Enums_InternalErrorCode smoke_Enums_InternalErrorCode_fromFfi_nullable(Pointer<Void> handle) {
  if (handle.address == 0) return null;
  final _handle = _smoke_Enums_InternalErrorCode_get_value_nullable(handle);
  final result = smoke_Enums_InternalErrorCode_fromFfi(_handle);
  smoke_Enums_InternalErrorCode_releaseFfiHandle(_handle);
  return result;
}
void smoke_Enums_InternalErrorCode_releaseFfiHandle_nullable(Pointer<Void> handle) =>
  _smoke_Enums_InternalErrorCode_release_handle_nullable(handle);
