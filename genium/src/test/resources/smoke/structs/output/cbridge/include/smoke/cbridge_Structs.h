//
//
// Automatically generated. Do not modify. Your changes will be lost.
#pragma once
#ifdef __cplusplus
extern "C" {
#endif
#include "cbridge/include/BaseHandle.h"
#include "cbridge/include/ByteArrayHandle.h"
#include "cbridge/include/StringHandle.h"
#include <stdbool.h>
#include <stdint.h>
typedef uint32_t smoke_Structs_FooBar;
_baseRef smoke_Structs_Point_create_handle(double x, double y);
void smoke_Structs_Point_release_handle(_baseRef handle);
_baseRef smoke_Structs_Point_make_optional_handle(_baseRef handle);
_baseRef smoke_Structs_Point_unwrap_optional_handle(_baseRef handle);
void smoke_Structs_Point_release_optional_handle(_baseRef handle);
double smoke_Structs_Point_x_get(_baseRef handle);
double smoke_Structs_Point_y_get(_baseRef handle);
_baseRef smoke_Structs_Color_create_handle(uint8_t red, uint8_t green, uint8_t blue);
void smoke_Structs_Color_release_handle(_baseRef handle);
_baseRef smoke_Structs_Color_make_optional_handle(_baseRef handle);
_baseRef smoke_Structs_Color_unwrap_optional_handle(_baseRef handle);
void smoke_Structs_Color_release_optional_handle(_baseRef handle);
uint8_t smoke_Structs_Color_red_get(_baseRef handle);
uint8_t smoke_Structs_Color_green_get(_baseRef handle);
uint8_t smoke_Structs_Color_blue_get(_baseRef handle);
_baseRef smoke_Structs_Line_create_handle(_baseRef a, _baseRef b);
void smoke_Structs_Line_release_handle(_baseRef handle);
_baseRef smoke_Structs_Line_make_optional_handle(_baseRef handle);
_baseRef smoke_Structs_Line_unwrap_optional_handle(_baseRef handle);
void smoke_Structs_Line_release_optional_handle(_baseRef handle);
_baseRef smoke_Structs_Line_a_get(_baseRef handle);
_baseRef smoke_Structs_Line_b_get(_baseRef handle);
_baseRef smoke_Structs_ColoredLine_create_handle(_baseRef line, _baseRef color);
void smoke_Structs_ColoredLine_release_handle(_baseRef handle);
_baseRef smoke_Structs_ColoredLine_make_optional_handle(_baseRef handle);
_baseRef smoke_Structs_ColoredLine_unwrap_optional_handle(_baseRef handle);
void smoke_Structs_ColoredLine_release_optional_handle(_baseRef handle);
_baseRef smoke_Structs_ColoredLine_line_get(_baseRef handle);
_baseRef smoke_Structs_ColoredLine_color_get(_baseRef handle);
_baseRef smoke_Structs_AllTypesStruct_create_handle(int8_t int8Field, uint8_t uint8Field, int16_t int16Field, uint16_t uint16Field, int32_t int32Field, uint32_t uint32Field, int64_t int64Field, uint64_t uint64Field, float floatField, double doubleField, _baseRef stringField, bool booleanField, _baseRef bytesField, _baseRef pointField);
void smoke_Structs_AllTypesStruct_release_handle(_baseRef handle);
_baseRef smoke_Structs_AllTypesStruct_make_optional_handle(_baseRef handle);
_baseRef smoke_Structs_AllTypesStruct_unwrap_optional_handle(_baseRef handle);
void smoke_Structs_AllTypesStruct_release_optional_handle(_baseRef handle);
int8_t smoke_Structs_AllTypesStruct_int8Field_get(_baseRef handle);
uint8_t smoke_Structs_AllTypesStruct_uint8Field_get(_baseRef handle);
int16_t smoke_Structs_AllTypesStruct_int16Field_get(_baseRef handle);
uint16_t smoke_Structs_AllTypesStruct_uint16Field_get(_baseRef handle);
int32_t smoke_Structs_AllTypesStruct_int32Field_get(_baseRef handle);
uint32_t smoke_Structs_AllTypesStruct_uint32Field_get(_baseRef handle);
int64_t smoke_Structs_AllTypesStruct_int64Field_get(_baseRef handle);
uint64_t smoke_Structs_AllTypesStruct_uint64Field_get(_baseRef handle);
float smoke_Structs_AllTypesStruct_floatField_get(_baseRef handle);
double smoke_Structs_AllTypesStruct_doubleField_get(_baseRef handle);
_baseRef smoke_Structs_AllTypesStruct_stringField_get(_baseRef handle);
bool smoke_Structs_AllTypesStruct_booleanField_get(_baseRef handle);
_baseRef smoke_Structs_AllTypesStruct_bytesField_get(_baseRef handle);
_baseRef smoke_Structs_AllTypesStruct_pointField_get(_baseRef handle);
_baseRef smoke_Structs_ExternalStruct_create_handle(_baseRef stringField, _baseRef externalStringField, _baseRef externalArrayField, _baseRef externalStructField);
void smoke_Structs_ExternalStruct_release_handle(_baseRef handle);
_baseRef smoke_Structs_ExternalStruct_make_optional_handle(_baseRef handle);
_baseRef smoke_Structs_ExternalStruct_unwrap_optional_handle(_baseRef handle);
void smoke_Structs_ExternalStruct_release_optional_handle(_baseRef handle);
_baseRef smoke_Structs_ExternalStruct_stringField_get(_baseRef handle);
_baseRef smoke_Structs_ExternalStruct_externalStringField_get(_baseRef handle);
_baseRef smoke_Structs_ExternalStruct_externalArrayField_get(_baseRef handle);
_baseRef smoke_Structs_ExternalStruct_externalStructField_get(_baseRef handle);
_baseRef smoke_Structs_AnotherExternalStruct_create_handle(int8_t intField);
void smoke_Structs_AnotherExternalStruct_release_handle(_baseRef handle);
_baseRef smoke_Structs_AnotherExternalStruct_make_optional_handle(_baseRef handle);
_baseRef smoke_Structs_AnotherExternalStruct_unwrap_optional_handle(_baseRef handle);
void smoke_Structs_AnotherExternalStruct_release_optional_handle(_baseRef handle);
int8_t smoke_Structs_AnotherExternalStruct_intField_get(_baseRef handle);
_baseRef smoke_Structs_YetAnotherExternalStruct_create_handle(_baseRef stringField);
void smoke_Structs_YetAnotherExternalStruct_release_handle(_baseRef handle);
_baseRef smoke_Structs_YetAnotherExternalStruct_make_optional_handle(_baseRef handle);
_baseRef smoke_Structs_YetAnotherExternalStruct_unwrap_optional_handle(_baseRef handle);
void smoke_Structs_YetAnotherExternalStruct_release_optional_handle(_baseRef handle);
_baseRef smoke_Structs_YetAnotherExternalStruct_stringField_get(_baseRef handle);
void smoke_Structs_release_handle(_baseRef handle);
_baseRef smoke_Structs_copy_handle(_baseRef handle);
_baseRef smoke_Structs_createPoint(double x, double y);
_baseRef smoke_Structs_swapPointCoordinates(_baseRef input);
_baseRef smoke_Structs_createLine(_baseRef pointA, _baseRef pointB);
_baseRef smoke_Structs_createColoredLine(_baseRef line, _baseRef color);
_baseRef smoke_Structs_returnColoredLine(_baseRef input);
_baseRef smoke_Structs_returnAllTypesStruct(_baseRef input);
_baseRef smoke_Structs_modifyAllTypesStruct(_baseRef input);
_baseRef smoke_Structs_getExternalStruct();
_baseRef smoke_Structs_getAnotherExternalStruct();
_baseRef smoke_Structs_getYetAnotherExternalStruct();
#ifdef __cplusplus
}
#endif