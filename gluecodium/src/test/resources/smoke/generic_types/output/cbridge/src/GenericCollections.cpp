//
//
#include "alien/FooEnum.h"
#include "alien/FooStruct.h"
#include "cbridge/include/GenericCollections.h"
#include "cbridge/include/StringHandle.h"
#include "cbridge/include/smoke/cbridge_DummyClass.h"
#include "cbridge/include/smoke/cbridge_DummyInterface.h"
#include "cbridge/include/smoke/cbridge_GenericTypesWithCompoundTypes.h"
#include "cbridge_internal/include/BaseHandleImpl.h"
#include "gluecodium/Optional.h"
#include "smoke/DummyClass.h"
#include "smoke/DummyInterface.h"
#include "smoke/GenericTypesWithCompoundTypes.h"
#include <memory>
#include <new>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
_baseRef ArrayOf_ArrayOf__Int_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<std::vector<int32_t>>( ) );
}
_baseRef ArrayOf_ArrayOf__Int_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<std::vector<int32_t>>( *reinterpret_cast<std::vector<std::vector<int32_t>>*>( handle ) ) );
}
void ArrayOf_ArrayOf__Int_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<std::vector<int32_t>>*>( handle );
}
uint64_t ArrayOf_ArrayOf__Int_count(_baseRef handle) {
    return Conversion<std::vector<std::vector<int32_t>>>::toCpp( handle ).size( );
}
_baseRef ArrayOf_ArrayOf__Int_get( _baseRef handle, uint64_t index ) { return Conversion<std::vector<int32_t>>::referenceBaseRef(Conversion<std::vector<std::vector<int32_t>>>::toCpp( handle )[index]);
}
void ArrayOf_ArrayOf__Int_append( _baseRef handle, _baseRef item )
{
Conversion<std::vector<std::vector<int32_t>>>::toCpp(handle).push_back(Conversion<std::vector<int32_t>>::toCpp(item));
}
_baseRef ArrayOf_ArrayOf__Int_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<std::vector<int32_t>>>( std::vector<std::vector<int32_t>>( ) ) );
}
void ArrayOf_ArrayOf__Int_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<std::vector<int32_t>>>*>( handle );
}
_baseRef ArrayOf_ArrayOf__Int_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<std::vector<int32_t>>>*>( handle ) );
}
_baseRef ArrayOf_MapOf__Int_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<std::unordered_map<int32_t, bool>>( ) );
}
_baseRef ArrayOf_MapOf__Int_To__Boolean_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<std::unordered_map<int32_t, bool>>( *reinterpret_cast<std::vector<std::unordered_map<int32_t, bool>>*>( handle ) ) );
}
void ArrayOf_MapOf__Int_To__Boolean_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<std::unordered_map<int32_t, bool>>*>( handle );
}
uint64_t ArrayOf_MapOf__Int_To__Boolean_count(_baseRef handle) {
    return Conversion<std::vector<std::unordered_map<int32_t, bool>>>::toCpp( handle ).size( );
}
_baseRef ArrayOf_MapOf__Int_To__Boolean_get( _baseRef handle, uint64_t index ) { return Conversion<std::unordered_map<int32_t, bool>>::referenceBaseRef(Conversion<std::vector<std::unordered_map<int32_t, bool>>>::toCpp( handle )[index]);
}
void ArrayOf_MapOf__Int_To__Boolean_append( _baseRef handle, _baseRef item )
{
Conversion<std::vector<std::unordered_map<int32_t, bool>>>::toCpp(handle).push_back(Conversion<std::unordered_map<int32_t, bool>>::toCpp(item));
}
_baseRef ArrayOf_MapOf__Int_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<std::unordered_map<int32_t, bool>>>( std::vector<std::unordered_map<int32_t, bool>>( ) ) );
}
void ArrayOf_MapOf__Int_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<std::unordered_map<int32_t, bool>>>*>( handle );
}
_baseRef ArrayOf_MapOf__Int_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<std::unordered_map<int32_t, bool>>>*>( handle ) );
}
_baseRef ArrayOf_SetOf__Int_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<std::unordered_set<int32_t>>( ) );
}
_baseRef ArrayOf_SetOf__Int_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<std::unordered_set<int32_t>>( *reinterpret_cast<std::vector<std::unordered_set<int32_t>>*>( handle ) ) );
}
void ArrayOf_SetOf__Int_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<std::unordered_set<int32_t>>*>( handle );
}
uint64_t ArrayOf_SetOf__Int_count(_baseRef handle) {
    return Conversion<std::vector<std::unordered_set<int32_t>>>::toCpp( handle ).size( );
}
_baseRef ArrayOf_SetOf__Int_get( _baseRef handle, uint64_t index ) { return Conversion<std::unordered_set<int32_t>>::referenceBaseRef(Conversion<std::vector<std::unordered_set<int32_t>>>::toCpp( handle )[index]);
}
void ArrayOf_SetOf__Int_append( _baseRef handle, _baseRef item )
{
Conversion<std::vector<std::unordered_set<int32_t>>>::toCpp(handle).push_back(Conversion<std::unordered_set<int32_t>>::toCpp(item));
}
_baseRef ArrayOf_SetOf__Int_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<std::unordered_set<int32_t>>>( std::vector<std::unordered_set<int32_t>>( ) ) );
}
void ArrayOf_SetOf__Int_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<std::unordered_set<int32_t>>>*>( handle );
}
_baseRef ArrayOf_SetOf__Int_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<std::unordered_set<int32_t>>>*>( handle ) );
}
_baseRef ArrayOf__Float_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<float>( ) );
}
_baseRef ArrayOf__Float_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<float>( *reinterpret_cast<std::vector<float>*>( handle ) ) );
}
void ArrayOf__Float_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<float>*>( handle );
}
uint64_t ArrayOf__Float_count(_baseRef handle) {
    return Conversion<std::vector<float>>::toCpp( handle ).size( );
}
float ArrayOf__Float_get( _baseRef handle, uint64_t index ) {
    return Conversion<std::vector<float>>::toCpp(handle)[ index ];
}
void ArrayOf__Float_append( _baseRef handle, float item )
{
    Conversion<std::vector<float>>::toCpp(handle).push_back( item );
}
_baseRef ArrayOf__Float_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<float>>( std::vector<float>( ) ) );
}
void ArrayOf__Float_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<float>>*>( handle );
}
_baseRef ArrayOf__Float_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<float>>*>( handle ) );
}
_baseRef ArrayOf__Int_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<int32_t>( ) );
}
_baseRef ArrayOf__Int_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<int32_t>( *reinterpret_cast<std::vector<int32_t>*>( handle ) ) );
}
void ArrayOf__Int_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<int32_t>*>( handle );
}
uint64_t ArrayOf__Int_count(_baseRef handle) {
    return Conversion<std::vector<int32_t>>::toCpp( handle ).size( );
}
int32_t ArrayOf__Int_get( _baseRef handle, uint64_t index ) {
    return Conversion<std::vector<int32_t>>::toCpp(handle)[ index ];
}
void ArrayOf__Int_append( _baseRef handle, int32_t item )
{
    Conversion<std::vector<int32_t>>::toCpp(handle).push_back( item );
}
_baseRef ArrayOf__Int_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<int32_t>>( std::vector<int32_t>( ) ) );
}
void ArrayOf__Int_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<int32_t>>*>( handle );
}
_baseRef ArrayOf__Int_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<int32_t>>*>( handle ) );
}
_baseRef ArrayOf__String_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<std::string>( ) );
}
_baseRef ArrayOf__String_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<std::string>( *reinterpret_cast<std::vector<std::string>*>( handle ) ) );
}
void ArrayOf__String_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<std::string>*>( handle );
}
uint64_t ArrayOf__String_count(_baseRef handle) {
    return Conversion<std::vector<std::string>>::toCpp( handle ).size( );
}
_baseRef ArrayOf__String_get( _baseRef handle, uint64_t index ) { return Conversion<std::string>::referenceBaseRef(Conversion<std::vector<std::string>>::toCpp( handle )[index]);
}
void ArrayOf__String_append( _baseRef handle, _baseRef item )
{
Conversion<std::vector<std::string>>::toCpp(handle).push_back(Conversion<std::string>::toCpp(item));
}
_baseRef ArrayOf__String_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<std::string>>( std::vector<std::string>( ) ) );
}
void ArrayOf__String_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<std::string>>*>( handle );
}
_baseRef ArrayOf__String_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<std::string>>*>( handle ) );
}
_baseRef ArrayOf__UByte_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<uint8_t>( ) );
}
_baseRef ArrayOf__UByte_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<uint8_t>( *reinterpret_cast<std::vector<uint8_t>*>( handle ) ) );
}
void ArrayOf__UByte_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<uint8_t>*>( handle );
}
uint64_t ArrayOf__UByte_count(_baseRef handle) {
    return Conversion<std::vector<uint8_t>>::toCpp( handle ).size( );
}
uint8_t ArrayOf__UByte_get( _baseRef handle, uint64_t index ) {
    return Conversion<std::vector<uint8_t>>::toCpp(handle)[ index ];
}
void ArrayOf__UByte_append( _baseRef handle, uint8_t item )
{
    Conversion<std::vector<uint8_t>>::toCpp(handle).push_back( item );
}
_baseRef ArrayOf__UByte_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<uint8_t>>( std::vector<uint8_t>( ) ) );
}
void ArrayOf__UByte_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<uint8_t>>*>( handle );
}
_baseRef ArrayOf__UByte_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<uint8_t>>*>( handle ) );
}
_baseRef ArrayOf_smoke_DummyClass_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<std::shared_ptr<::smoke::DummyClass>>( ) );
}
_baseRef ArrayOf_smoke_DummyClass_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<std::shared_ptr<::smoke::DummyClass>>( *reinterpret_cast<std::vector<std::shared_ptr<::smoke::DummyClass>>*>( handle ) ) );
}
void ArrayOf_smoke_DummyClass_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<std::shared_ptr<::smoke::DummyClass>>*>( handle );
}
uint64_t ArrayOf_smoke_DummyClass_count(_baseRef handle) {
    return Conversion<std::vector<std::shared_ptr<::smoke::DummyClass>>>::toCpp( handle ).size( );
}
_baseRef ArrayOf_smoke_DummyClass_get( _baseRef handle, uint64_t index ) { return Conversion<std::shared_ptr<::smoke::DummyClass>>::referenceBaseRef(Conversion<std::vector<std::shared_ptr<::smoke::DummyClass>>>::toCpp( handle )[index]);
}
void ArrayOf_smoke_DummyClass_append( _baseRef handle, _baseRef item )
{
Conversion<std::vector<std::shared_ptr<::smoke::DummyClass>>>::toCpp(handle).push_back(Conversion<std::shared_ptr<::smoke::DummyClass>>::toCpp(item));
}
_baseRef ArrayOf_smoke_DummyClass_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<std::shared_ptr<::smoke::DummyClass>>>( std::vector<std::shared_ptr<::smoke::DummyClass>>( ) ) );
}
void ArrayOf_smoke_DummyClass_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<std::shared_ptr<::smoke::DummyClass>>>*>( handle );
}
_baseRef ArrayOf_smoke_DummyClass_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<std::shared_ptr<::smoke::DummyClass>>>*>( handle ) );
}
_baseRef ArrayOf_smoke_DummyInterface_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<std::shared_ptr<::smoke::DummyInterface>>( ) );
}
_baseRef ArrayOf_smoke_DummyInterface_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<std::shared_ptr<::smoke::DummyInterface>>( *reinterpret_cast<std::vector<std::shared_ptr<::smoke::DummyInterface>>*>( handle ) ) );
}
void ArrayOf_smoke_DummyInterface_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<std::shared_ptr<::smoke::DummyInterface>>*>( handle );
}
uint64_t ArrayOf_smoke_DummyInterface_count(_baseRef handle) {
    return Conversion<std::vector<std::shared_ptr<::smoke::DummyInterface>>>::toCpp( handle ).size( );
}
_baseRef ArrayOf_smoke_DummyInterface_get( _baseRef handle, uint64_t index ) { return Conversion<std::shared_ptr<::smoke::DummyInterface>>::referenceBaseRef(Conversion<std::vector<std::shared_ptr<::smoke::DummyInterface>>>::toCpp( handle )[index]);
}
void ArrayOf_smoke_DummyInterface_append( _baseRef handle, _baseRef item )
{
Conversion<std::vector<std::shared_ptr<::smoke::DummyInterface>>>::toCpp(handle).push_back(Conversion<std::shared_ptr<::smoke::DummyInterface>>::toCpp(item));
}
_baseRef ArrayOf_smoke_DummyInterface_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<std::shared_ptr<::smoke::DummyInterface>>>( std::vector<std::shared_ptr<::smoke::DummyInterface>>( ) ) );
}
void ArrayOf_smoke_DummyInterface_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<std::shared_ptr<::smoke::DummyInterface>>>*>( handle );
}
_baseRef ArrayOf_smoke_DummyInterface_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<std::shared_ptr<::smoke::DummyInterface>>>*>( handle ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>( ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>( *reinterpret_cast<std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>*>( handle ) ) );
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>*>( handle );
}
uint64_t ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_count(_baseRef handle) {
    return Conversion<std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>>::toCpp( handle ).size( );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_get( _baseRef handle, uint64_t index ) { return Conversion<::smoke::GenericTypesWithCompoundTypes::BasicStruct>::referenceBaseRef(Conversion<std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>>::toCpp( handle )[index]);
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_append( _baseRef handle, _baseRef item )
{
Conversion<std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>>::toCpp(handle).push_back(Conversion<::smoke::GenericTypesWithCompoundTypes::BasicStruct>::toCpp(item));
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>>( std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>( ) ) );
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>>*>( handle );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_BasicStruct_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<::smoke::GenericTypesWithCompoundTypes::BasicStruct>>*>( handle ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<::alien::FooEnum>( ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<::alien::FooEnum>( *reinterpret_cast<std::vector<::alien::FooEnum>*>( handle ) ) );
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<::alien::FooEnum>*>( handle );
}
uint64_t ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_count(_baseRef handle) {
    return Conversion<std::vector<::alien::FooEnum>>::toCpp( handle ).size( );
}
smoke_GenericTypesWithCompoundTypes_ExternalEnum ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_get( _baseRef handle, uint64_t index ) {
    return static_cast<smoke_GenericTypesWithCompoundTypes_ExternalEnum>(Conversion<std::vector<::alien::FooEnum>>::toCpp(handle)[ index ]);
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_append( _baseRef handle, smoke_GenericTypesWithCompoundTypes_ExternalEnum item )
{
    Conversion<std::vector<::alien::FooEnum>>::toCpp(handle).push_back( static_cast<::alien::FooEnum>( item ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<::alien::FooEnum>>( std::vector<::alien::FooEnum>( ) ) );
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<::alien::FooEnum>>*>( handle );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<::alien::FooEnum>>*>( handle ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<::alien::FooStruct>( ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<::alien::FooStruct>( *reinterpret_cast<std::vector<::alien::FooStruct>*>( handle ) ) );
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<::alien::FooStruct>*>( handle );
}
uint64_t ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_count(_baseRef handle) {
    return Conversion<std::vector<::alien::FooStruct>>::toCpp( handle ).size( );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_get( _baseRef handle, uint64_t index ) { return Conversion<::alien::FooStruct>::referenceBaseRef(Conversion<std::vector<::alien::FooStruct>>::toCpp( handle )[index]);
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_append( _baseRef handle, _baseRef item )
{
Conversion<std::vector<::alien::FooStruct>>::toCpp(handle).push_back(Conversion<::alien::FooStruct>::toCpp(item));
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<::alien::FooStruct>>( std::vector<::alien::FooStruct>( ) ) );
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<::alien::FooStruct>>*>( handle );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_ExternalStruct_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<::alien::FooStruct>>*>( handle ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_create_handle() {
    return reinterpret_cast<_baseRef>( new std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>( ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_copy_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>( *reinterpret_cast<std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>*>( handle ) ) );
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_release_handle(_baseRef handle) {
    delete reinterpret_cast<std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>*>( handle );
}
uint64_t ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_count(_baseRef handle) {
    return Conversion<std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>>::toCpp( handle ).size( );
}
smoke_GenericTypesWithCompoundTypes_SomeEnum ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_get( _baseRef handle, uint64_t index ) {
    return static_cast<smoke_GenericTypesWithCompoundTypes_SomeEnum>(Conversion<std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>>::toCpp(handle)[ index ]);
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_append( _baseRef handle, smoke_GenericTypesWithCompoundTypes_SomeEnum item )
{
    Conversion<std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>>::toCpp(handle).push_back( static_cast<::smoke::GenericTypesWithCompoundTypes::SomeEnum>( item ) );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>>( std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>( ) ) );
}
void ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>>*>( handle );
}
_baseRef ArrayOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::vector<::smoke::GenericTypesWithCompoundTypes::SomeEnum>>*>( handle ) );
}
_baseRef MapOf_ArrayOf__Int_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >() );
}
void MapOf_ArrayOf__Int_To__Boolean_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >>(handle);
}
_baseRef MapOf_ArrayOf__Int_To__Boolean_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >::iterator( get_pointer<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >>(handle)->begin() ) );
}
void MapOf_ArrayOf__Int_To__Boolean_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle );
}
void MapOf_ArrayOf__Int_To__Boolean_put(_baseRef handle, _baseRef key, bool value) {
    (*get_pointer<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >>(handle)).emplace(Conversion<std::vector<int32_t>>::toCpp(key), value);
}
bool MapOf_ArrayOf__Int_To__Boolean_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >>(handle)->end();
}
void MapOf_ArrayOf__Int_To__Boolean_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle );
}
_baseRef MapOf_ArrayOf__Int_To__Boolean_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle ))->first;
    return Conversion<std::vector<int32_t>>::toBaseRef(key);
}
bool MapOf_ArrayOf__Int_To__Boolean_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle ))->second;
    return value;
}
_baseRef MapOf_ArrayOf__Int_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >>( std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >( ) ) );
}
void MapOf_ArrayOf__Int_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >>*>( handle );
}
_baseRef MapOf_ArrayOf__Int_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<std::vector<int32_t>, bool, ::gluecodium::hash<std::vector<int32_t>> >>*>( handle ) );
}
_baseRef MapOf_MapOf__Int_To__Boolean_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >() );
}
void MapOf_MapOf__Int_To__Boolean_To__Boolean_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>(handle);
}
_baseRef MapOf_MapOf__Int_To__Boolean_To__Boolean_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator( get_pointer<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>(handle)->begin() ) );
}
void MapOf_MapOf__Int_To__Boolean_To__Boolean_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle );
}
void MapOf_MapOf__Int_To__Boolean_To__Boolean_put(_baseRef handle, _baseRef key, bool value) {
    (*get_pointer<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>(handle)).emplace(Conversion<std::unordered_map<int32_t, bool>>::toCpp(key), value);
}
bool MapOf_MapOf__Int_To__Boolean_To__Boolean_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>(handle)->end();
}
void MapOf_MapOf__Int_To__Boolean_To__Boolean_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle );
}
_baseRef MapOf_MapOf__Int_To__Boolean_To__Boolean_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle ))->first;
    return Conversion<std::unordered_map<int32_t, bool>>::toBaseRef(key);
}
bool MapOf_MapOf__Int_To__Boolean_To__Boolean_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle ))->second;
    return value;
}
_baseRef MapOf_MapOf__Int_To__Boolean_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>( std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >( ) ) );
}
void MapOf_MapOf__Int_To__Boolean_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>*>( handle );
}
_baseRef MapOf_MapOf__Int_To__Boolean_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<std::unordered_map<int32_t, bool>, bool, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>*>( handle ) );
}
_baseRef MapOf_SetOf__Int_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >() );
}
void MapOf_SetOf__Int_To__Boolean_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >>(handle);
}
_baseRef MapOf_SetOf__Int_To__Boolean_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator( get_pointer<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >>(handle)->begin() ) );
}
void MapOf_SetOf__Int_To__Boolean_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle );
}
void MapOf_SetOf__Int_To__Boolean_put(_baseRef handle, _baseRef key, bool value) {
    (*get_pointer<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >>(handle)).emplace(Conversion<std::unordered_set<int32_t>>::toCpp(key), value);
}
bool MapOf_SetOf__Int_To__Boolean_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >>(handle)->end();
}
void MapOf_SetOf__Int_To__Boolean_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle );
}
_baseRef MapOf_SetOf__Int_To__Boolean_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle ))->first;
    return Conversion<std::unordered_set<int32_t>>::toBaseRef(key);
}
bool MapOf_SetOf__Int_To__Boolean_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle ))->second;
    return value;
}
_baseRef MapOf_SetOf__Int_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >>( std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >( ) ) );
}
void MapOf_SetOf__Int_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >>*>( handle );
}
_baseRef MapOf_SetOf__Int_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<std::unordered_set<int32_t>, bool, ::gluecodium::hash<std::unordered_set<int32_t>> >>*>( handle ) );
}
_baseRef MapOf__Float_To__Double_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<float, double >() );
}
void MapOf__Float_To__Double_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<float, double >>(handle);
}
_baseRef MapOf__Float_To__Double_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<float, double >::iterator( get_pointer<std::unordered_map<float, double >>(handle)->begin() ) );
}
void MapOf__Float_To__Double_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<float, double >::iterator*>( iterator_handle );
}
void MapOf__Float_To__Double_put(_baseRef handle, float key, double value) {
    (*get_pointer<std::unordered_map<float, double >>(handle)).emplace(key, value);
}
bool MapOf__Float_To__Double_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<float, double >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<float, double >>(handle)->end();
}
void MapOf__Float_To__Double_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<float, double >::iterator*>( iterator_handle );
}
float MapOf__Float_To__Double_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<float, double >::iterator*>( iterator_handle ))->first;
    return key;
}
double MapOf__Float_To__Double_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<float, double >::iterator*>( iterator_handle ))->second;
    return value;
}
_baseRef MapOf__Float_To__Double_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<float, double >>( std::unordered_map<float, double >( ) ) );
}
void MapOf__Float_To__Double_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<float, double >>*>( handle );
}
_baseRef MapOf__Float_To__Double_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<float, double >>*>( handle ) );
}
_baseRef MapOf__Int_To_ArrayOf__Int_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::vector<int32_t> >() );
}
void MapOf__Int_To_ArrayOf__Int_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<int32_t, std::vector<int32_t> >>(handle);
}
_baseRef MapOf__Int_To_ArrayOf__Int_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::vector<int32_t> >::iterator( get_pointer<std::unordered_map<int32_t, std::vector<int32_t> >>(handle)->begin() ) );
}
void MapOf__Int_To_ArrayOf__Int_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<int32_t, std::vector<int32_t> >::iterator*>( iterator_handle );
}
void MapOf__Int_To_ArrayOf__Int_put(_baseRef handle, int32_t key, _baseRef value) {
    (*get_pointer<std::unordered_map<int32_t, std::vector<int32_t> >>(handle)).emplace(key, Conversion<std::vector<int32_t>>::toCpp(value));
}
bool MapOf__Int_To_ArrayOf__Int_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<int32_t, std::vector<int32_t> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<int32_t, std::vector<int32_t> >>(handle)->end();
}
void MapOf__Int_To_ArrayOf__Int_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<int32_t, std::vector<int32_t> >::iterator*>( iterator_handle );
}
int32_t MapOf__Int_To_ArrayOf__Int_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<int32_t, std::vector<int32_t> >::iterator*>( iterator_handle ))->first;
    return key;
}
_baseRef MapOf__Int_To_ArrayOf__Int_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<int32_t, std::vector<int32_t> >::iterator*>( iterator_handle ))->second;
    return Conversion<std::vector<int32_t>>::toBaseRef(value);
}
_baseRef MapOf__Int_To_ArrayOf__Int_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<int32_t, std::vector<int32_t> >>( std::unordered_map<int32_t, std::vector<int32_t> >( ) ) );
}
void MapOf__Int_To_ArrayOf__Int_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::vector<int32_t> >>*>( handle );
}
_baseRef MapOf__Int_To_ArrayOf__Int_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::vector<int32_t> >>*>( handle ) );
}
_baseRef MapOf__Int_To_MapOf__Int_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >() );
}
void MapOf__Int_To_MapOf__Int_To__Boolean_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >>(handle);
}
_baseRef MapOf__Int_To_MapOf__Int_To__Boolean_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >::iterator( get_pointer<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >>(handle)->begin() ) );
}
void MapOf__Int_To_MapOf__Int_To__Boolean_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >::iterator*>( iterator_handle );
}
void MapOf__Int_To_MapOf__Int_To__Boolean_put(_baseRef handle, int32_t key, _baseRef value) {
    (*get_pointer<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >>(handle)).emplace(key, Conversion<std::unordered_map<int32_t, bool>>::toCpp(value));
}
bool MapOf__Int_To_MapOf__Int_To__Boolean_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >>(handle)->end();
}
void MapOf__Int_To_MapOf__Int_To__Boolean_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >::iterator*>( iterator_handle );
}
int32_t MapOf__Int_To_MapOf__Int_To__Boolean_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >::iterator*>( iterator_handle ))->first;
    return key;
}
_baseRef MapOf__Int_To_MapOf__Int_To__Boolean_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >::iterator*>( iterator_handle ))->second;
    return Conversion<std::unordered_map<int32_t, bool>>::toBaseRef(value);
}
_baseRef MapOf__Int_To_MapOf__Int_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >>( std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >( ) ) );
}
void MapOf__Int_To_MapOf__Int_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >>*>( handle );
}
_baseRef MapOf__Int_To_MapOf__Int_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::unordered_map<int32_t, bool> >>*>( handle ) );
}
_baseRef MapOf__Int_To_SetOf__Int_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::unordered_set<int32_t> >() );
}
void MapOf__Int_To_SetOf__Int_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<int32_t, std::unordered_set<int32_t> >>(handle);
}
_baseRef MapOf__Int_To_SetOf__Int_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::unordered_set<int32_t> >::iterator( get_pointer<std::unordered_map<int32_t, std::unordered_set<int32_t> >>(handle)->begin() ) );
}
void MapOf__Int_To_SetOf__Int_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<int32_t, std::unordered_set<int32_t> >::iterator*>( iterator_handle );
}
void MapOf__Int_To_SetOf__Int_put(_baseRef handle, int32_t key, _baseRef value) {
    (*get_pointer<std::unordered_map<int32_t, std::unordered_set<int32_t> >>(handle)).emplace(key, Conversion<std::unordered_set<int32_t>>::toCpp(value));
}
bool MapOf__Int_To_SetOf__Int_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<int32_t, std::unordered_set<int32_t> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<int32_t, std::unordered_set<int32_t> >>(handle)->end();
}
void MapOf__Int_To_SetOf__Int_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<int32_t, std::unordered_set<int32_t> >::iterator*>( iterator_handle );
}
int32_t MapOf__Int_To_SetOf__Int_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<int32_t, std::unordered_set<int32_t> >::iterator*>( iterator_handle ))->first;
    return key;
}
_baseRef MapOf__Int_To_SetOf__Int_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<int32_t, std::unordered_set<int32_t> >::iterator*>( iterator_handle ))->second;
    return Conversion<std::unordered_set<int32_t>>::toBaseRef(value);
}
_baseRef MapOf__Int_To_SetOf__Int_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<int32_t, std::unordered_set<int32_t> >>( std::unordered_map<int32_t, std::unordered_set<int32_t> >( ) ) );
}
void MapOf__Int_To_SetOf__Int_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::unordered_set<int32_t> >>*>( handle );
}
_baseRef MapOf__Int_To_SetOf__Int_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::unordered_set<int32_t> >>*>( handle ) );
}
_baseRef MapOf__Int_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, bool >() );
}
void MapOf__Int_To__Boolean_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<int32_t, bool >>(handle);
}
_baseRef MapOf__Int_To__Boolean_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, bool >::iterator( get_pointer<std::unordered_map<int32_t, bool >>(handle)->begin() ) );
}
void MapOf__Int_To__Boolean_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<int32_t, bool >::iterator*>( iterator_handle );
}
void MapOf__Int_To__Boolean_put(_baseRef handle, int32_t key, bool value) {
    (*get_pointer<std::unordered_map<int32_t, bool >>(handle)).emplace(key, value);
}
bool MapOf__Int_To__Boolean_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<int32_t, bool >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<int32_t, bool >>(handle)->end();
}
void MapOf__Int_To__Boolean_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<int32_t, bool >::iterator*>( iterator_handle );
}
int32_t MapOf__Int_To__Boolean_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<int32_t, bool >::iterator*>( iterator_handle ))->first;
    return key;
}
bool MapOf__Int_To__Boolean_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<int32_t, bool >::iterator*>( iterator_handle ))->second;
    return value;
}
_baseRef MapOf__Int_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<int32_t, bool >>( std::unordered_map<int32_t, bool >( ) ) );
}
void MapOf__Int_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, bool >>*>( handle );
}
_baseRef MapOf__Int_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, bool >>*>( handle ) );
}
_baseRef MapOf__Int_To_smoke_DummyClass_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >() );
}
void MapOf__Int_To_smoke_DummyClass_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >>(handle);
}
_baseRef MapOf__Int_To_smoke_DummyClass_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >::iterator( get_pointer<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >>(handle)->begin() ) );
}
void MapOf__Int_To_smoke_DummyClass_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >::iterator*>( iterator_handle );
}
void MapOf__Int_To_smoke_DummyClass_put(_baseRef handle, int32_t key, _baseRef value) {
    (*get_pointer<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >>(handle)).emplace(key, Conversion<std::shared_ptr<::smoke::DummyClass>>::toCpp(value));
}
bool MapOf__Int_To_smoke_DummyClass_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >>(handle)->end();
}
void MapOf__Int_To_smoke_DummyClass_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >::iterator*>( iterator_handle );
}
int32_t MapOf__Int_To_smoke_DummyClass_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >::iterator*>( iterator_handle ))->first;
    return key;
}
_baseRef MapOf__Int_To_smoke_DummyClass_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >::iterator*>( iterator_handle ))->second;
    return Conversion<std::shared_ptr<::smoke::DummyClass>>::toBaseRef(value);
}
_baseRef MapOf__Int_To_smoke_DummyClass_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >>( std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >( ) ) );
}
void MapOf__Int_To_smoke_DummyClass_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >>*>( handle );
}
_baseRef MapOf__Int_To_smoke_DummyClass_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyClass> >>*>( handle ) );
}
_baseRef MapOf__Int_To_smoke_DummyInterface_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >() );
}
void MapOf__Int_To_smoke_DummyInterface_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >>(handle);
}
_baseRef MapOf__Int_To_smoke_DummyInterface_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >::iterator( get_pointer<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >>(handle)->begin() ) );
}
void MapOf__Int_To_smoke_DummyInterface_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >::iterator*>( iterator_handle );
}
void MapOf__Int_To_smoke_DummyInterface_put(_baseRef handle, int32_t key, _baseRef value) {
    (*get_pointer<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >>(handle)).emplace(key, Conversion<std::shared_ptr<::smoke::DummyInterface>>::toCpp(value));
}
bool MapOf__Int_To_smoke_DummyInterface_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >>(handle)->end();
}
void MapOf__Int_To_smoke_DummyInterface_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >::iterator*>( iterator_handle );
}
int32_t MapOf__Int_To_smoke_DummyInterface_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >::iterator*>( iterator_handle ))->first;
    return key;
}
_baseRef MapOf__Int_To_smoke_DummyInterface_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >::iterator*>( iterator_handle ))->second;
    return Conversion<std::shared_ptr<::smoke::DummyInterface>>::toBaseRef(value);
}
_baseRef MapOf__Int_To_smoke_DummyInterface_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >>( std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >( ) ) );
}
void MapOf__Int_To_smoke_DummyInterface_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >>*>( handle );
}
_baseRef MapOf__Int_To_smoke_DummyInterface_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, std::shared_ptr<::smoke::DummyInterface> >>*>( handle ) );
}
_baseRef MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, ::alien::FooEnum >() );
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<int32_t, ::alien::FooEnum >>(handle);
}
_baseRef MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, ::alien::FooEnum >::iterator( get_pointer<std::unordered_map<int32_t, ::alien::FooEnum >>(handle)->begin() ) );
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<int32_t, ::alien::FooEnum >::iterator*>( iterator_handle );
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_put(_baseRef handle, int32_t key, smoke_GenericTypesWithCompoundTypes_ExternalEnum value) {
    (*get_pointer<std::unordered_map<int32_t, ::alien::FooEnum >>(handle)).emplace(key, static_cast<::alien::FooEnum>(value));
}
bool MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<int32_t, ::alien::FooEnum >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<int32_t, ::alien::FooEnum >>(handle)->end();
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<int32_t, ::alien::FooEnum >::iterator*>( iterator_handle );
}
int32_t MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<int32_t, ::alien::FooEnum >::iterator*>( iterator_handle ))->first;
    return key;
}
smoke_GenericTypesWithCompoundTypes_ExternalEnum MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<int32_t, ::alien::FooEnum >::iterator*>( iterator_handle ))->second;
    return static_cast<smoke_GenericTypesWithCompoundTypes_ExternalEnum>(value);
}
_baseRef MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<int32_t, ::alien::FooEnum >>( std::unordered_map<int32_t, ::alien::FooEnum >( ) ) );
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, ::alien::FooEnum >>*>( handle );
}
_baseRef MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_ExternalEnum_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, ::alien::FooEnum >>*>( handle ) );
}
_baseRef MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >() );
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >>(handle);
}
_baseRef MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >::iterator( get_pointer<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >>(handle)->begin() ) );
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >::iterator*>( iterator_handle );
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_put(_baseRef handle, int32_t key, smoke_GenericTypesWithCompoundTypes_SomeEnum value) {
    (*get_pointer<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >>(handle)).emplace(key, static_cast<::smoke::GenericTypesWithCompoundTypes::SomeEnum>(value));
}
bool MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >>(handle)->end();
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >::iterator*>( iterator_handle );
}
int32_t MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >::iterator*>( iterator_handle ))->first;
    return key;
}
smoke_GenericTypesWithCompoundTypes_SomeEnum MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >::iterator*>( iterator_handle ))->second;
    return static_cast<smoke_GenericTypesWithCompoundTypes_SomeEnum>(value);
}
_baseRef MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >>( std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >( ) ) );
}
void MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >>*>( handle );
}
_baseRef MapOf__Int_To_smoke_GenericTypesWithCompoundTypes_SomeEnum_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<int32_t, ::smoke::GenericTypesWithCompoundTypes::SomeEnum >>*>( handle ) );
}
_baseRef MapOf__String_To__String_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::string, std::string >() );
}
void MapOf__String_To__String_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<std::string, std::string >>(handle);
}
_baseRef MapOf__String_To__String_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::string, std::string >::iterator( get_pointer<std::unordered_map<std::string, std::string >>(handle)->begin() ) );
}
void MapOf__String_To__String_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<std::string, std::string >::iterator*>( iterator_handle );
}
void MapOf__String_To__String_put(_baseRef handle, _baseRef key, _baseRef value) {
    (*get_pointer<std::unordered_map<std::string, std::string >>(handle)).emplace(Conversion<std::string>::toCpp(key), Conversion<std::string>::toCpp(value));
}
bool MapOf__String_To__String_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<std::string, std::string >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<std::string, std::string >>(handle)->end();
}
void MapOf__String_To__String_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<std::string, std::string >::iterator*>( iterator_handle );
}
_baseRef MapOf__String_To__String_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<std::string, std::string >::iterator*>( iterator_handle ))->first;
    return Conversion<std::string>::toBaseRef(key);
}
_baseRef MapOf__String_To__String_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<std::string, std::string >::iterator*>( iterator_handle ))->second;
    return Conversion<std::string>::toBaseRef(value);
}
_baseRef MapOf__String_To__String_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<std::string, std::string >>( std::unordered_map<std::string, std::string >( ) ) );
}
void MapOf__String_To__String_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<std::string, std::string >>*>( handle );
}
_baseRef MapOf__String_To__String_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<std::string, std::string >>*>( handle ) );
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >() );
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >>(handle);
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >::iterator( get_pointer<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >>(handle)->begin() ) );
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >::iterator*>( iterator_handle );
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_put(_baseRef handle, _baseRef key, _baseRef value) {
    (*get_pointer<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >>(handle)).emplace(Conversion<std::string>::toCpp(key), Conversion<::smoke::GenericTypesWithCompoundTypes::BasicStruct>::toCpp(value));
}
bool MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >>(handle)->end();
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >::iterator*>( iterator_handle );
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >::iterator*>( iterator_handle ))->first;
    return Conversion<std::string>::toBaseRef(key);
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >::iterator*>( iterator_handle ))->second;
    return Conversion<::smoke::GenericTypesWithCompoundTypes::BasicStruct>::toBaseRef(value);
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >>( std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >( ) ) );
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >>*>( handle );
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_BasicStruct_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<std::string, ::smoke::GenericTypesWithCompoundTypes::BasicStruct >>*>( handle ) );
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::string, ::alien::FooStruct >() );
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<std::string, ::alien::FooStruct >>(handle);
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<std::string, ::alien::FooStruct >::iterator( get_pointer<std::unordered_map<std::string, ::alien::FooStruct >>(handle)->begin() ) );
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<std::string, ::alien::FooStruct >::iterator*>( iterator_handle );
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_put(_baseRef handle, _baseRef key, _baseRef value) {
    (*get_pointer<std::unordered_map<std::string, ::alien::FooStruct >>(handle)).emplace(Conversion<std::string>::toCpp(key), Conversion<::alien::FooStruct>::toCpp(value));
}
bool MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<std::string, ::alien::FooStruct >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<std::string, ::alien::FooStruct >>(handle)->end();
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<std::string, ::alien::FooStruct >::iterator*>( iterator_handle );
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<std::string, ::alien::FooStruct >::iterator*>( iterator_handle ))->first;
    return Conversion<std::string>::toBaseRef(key);
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<std::string, ::alien::FooStruct >::iterator*>( iterator_handle ))->second;
    return Conversion<::alien::FooStruct>::toBaseRef(value);
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<std::string, ::alien::FooStruct >>( std::unordered_map<std::string, ::alien::FooStruct >( ) ) );
}
void MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<std::string, ::alien::FooStruct >>*>( handle );
}
_baseRef MapOf__String_To_smoke_GenericTypesWithCompoundTypes_ExternalStruct_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<std::string, ::alien::FooStruct >>*>( handle ) );
}
_baseRef MapOf__UByte_To__String_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<uint8_t, std::string >() );
}
void MapOf__UByte_To__String_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<uint8_t, std::string >>(handle);
}
_baseRef MapOf__UByte_To__String_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<uint8_t, std::string >::iterator( get_pointer<std::unordered_map<uint8_t, std::string >>(handle)->begin() ) );
}
void MapOf__UByte_To__String_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<uint8_t, std::string >::iterator*>( iterator_handle );
}
void MapOf__UByte_To__String_put(_baseRef handle, uint8_t key, _baseRef value) {
    (*get_pointer<std::unordered_map<uint8_t, std::string >>(handle)).emplace(key, Conversion<std::string>::toCpp(value));
}
bool MapOf__UByte_To__String_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<uint8_t, std::string >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<uint8_t, std::string >>(handle)->end();
}
void MapOf__UByte_To__String_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<uint8_t, std::string >::iterator*>( iterator_handle );
}
uint8_t MapOf__UByte_To__String_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<uint8_t, std::string >::iterator*>( iterator_handle ))->first;
    return key;
}
_baseRef MapOf__UByte_To__String_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<uint8_t, std::string >::iterator*>( iterator_handle ))->second;
    return Conversion<std::string>::toBaseRef(value);
}
_baseRef MapOf__UByte_To__String_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<uint8_t, std::string >>( std::unordered_map<uint8_t, std::string >( ) ) );
}
void MapOf__UByte_To__String_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<uint8_t, std::string >>*>( handle );
}
_baseRef MapOf__UByte_To__String_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<uint8_t, std::string >>*>( handle ) );
}
_baseRef MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >() );
}
void MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >>(handle);
}
_baseRef MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >::iterator( get_pointer<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >>(handle)->begin() ) );
}
void MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle );
}
void MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_put(_baseRef handle, smoke_GenericTypesWithCompoundTypes_ExternalEnum key, bool value) {
    (*get_pointer<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >>(handle)).emplace(static_cast<::alien::FooEnum>(key), value);
}
bool MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >>(handle)->end();
}
void MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle );
}
smoke_GenericTypesWithCompoundTypes_ExternalEnum MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle ))->first;
    return static_cast<smoke_GenericTypesWithCompoundTypes_ExternalEnum>(key);
}
bool MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle ))->second;
    return value;
}
_baseRef MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >>( std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >( ) ) );
}
void MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >>*>( handle );
}
_baseRef MapOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<::alien::FooEnum, bool, ::gluecodium::hash<::alien::FooEnum> >>*>( handle ) );
}
_baseRef MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >() );
}
void MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>(handle);
}
_baseRef MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator( get_pointer<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>(handle)->begin() ) );
}
void MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle );
}
void MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_put(_baseRef handle, smoke_GenericTypesWithCompoundTypes_SomeEnum key, bool value) {
    (*get_pointer<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>(handle)).emplace(static_cast<::smoke::GenericTypesWithCompoundTypes::SomeEnum>(key), value);
}
bool MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>(handle)->end();
}
void MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle );
}
smoke_GenericTypesWithCompoundTypes_SomeEnum MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_iterator_key(_baseRef iterator_handle) {
    auto& key = (*reinterpret_cast<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle ))->first;
    return static_cast<smoke_GenericTypesWithCompoundTypes_SomeEnum>(key);
}
bool MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_iterator_value(_baseRef iterator_handle) {
    auto& value = (*reinterpret_cast<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle ))->second;
    return value;
}
_baseRef MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>( std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >( ) ) );
}
void MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>*>( handle );
}
_baseRef MapOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_map<::smoke::GenericTypesWithCompoundTypes::SomeEnum, bool, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>*>( handle ) );
}
_baseRef SetOf_ArrayOf__Int_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >() );
}
void SetOf_ArrayOf__Int_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >>(handle);
}
void SetOf_ArrayOf__Int_insert(_baseRef handle, _baseRef value) {
    (*get_pointer<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >>(handle)).insert(std::move(Conversion<std::vector<int32_t>>::toCpp(value)));
}
_baseRef SetOf_ArrayOf__Int_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >::iterator( get_pointer<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >>(handle)->begin() ) );
}
void SetOf_ArrayOf__Int_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle );
}
bool SetOf_ArrayOf__Int_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >>(handle)->end();
}
void SetOf_ArrayOf__Int_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle );
}
_baseRef SetOf_ArrayOf__Int_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >::iterator*>( iterator_handle );
    return Conversion<std::vector<int32_t>>::referenceBaseRef(value);
}
_baseRef SetOf_ArrayOf__Int_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >>( std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >( ) ) );
}
void SetOf_ArrayOf__Int_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >>*>( handle );
}
_baseRef SetOf_ArrayOf__Int_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<std::vector<int32_t>, ::gluecodium::hash<std::vector<int32_t>> >>*>( handle ) );
}
_baseRef SetOf_MapOf__Int_To__Boolean_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >() );
}
void SetOf_MapOf__Int_To__Boolean_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>(handle);
}
void SetOf_MapOf__Int_To__Boolean_insert(_baseRef handle, _baseRef value) {
    (*get_pointer<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>(handle)).insert(std::move(Conversion<std::unordered_map<int32_t, bool>>::toCpp(value)));
}
_baseRef SetOf_MapOf__Int_To__Boolean_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator( get_pointer<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>(handle)->begin() ) );
}
void SetOf_MapOf__Int_To__Boolean_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle );
}
bool SetOf_MapOf__Int_To__Boolean_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>(handle)->end();
}
void SetOf_MapOf__Int_To__Boolean_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle );
}
_baseRef SetOf_MapOf__Int_To__Boolean_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >::iterator*>( iterator_handle );
    return Conversion<std::unordered_map<int32_t, bool>>::referenceBaseRef(value);
}
_baseRef SetOf_MapOf__Int_To__Boolean_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>( std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >( ) ) );
}
void SetOf_MapOf__Int_To__Boolean_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>*>( handle );
}
_baseRef SetOf_MapOf__Int_To__Boolean_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<std::unordered_map<int32_t, bool>, ::gluecodium::hash<std::unordered_map<int32_t, bool>> >>*>( handle ) );
}
_baseRef SetOf_SetOf__Int_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >() );
}
void SetOf_SetOf__Int_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >>(handle);
}
void SetOf_SetOf__Int_insert(_baseRef handle, _baseRef value) {
    (*get_pointer<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >>(handle)).insert(std::move(Conversion<std::unordered_set<int32_t>>::toCpp(value)));
}
_baseRef SetOf_SetOf__Int_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator( get_pointer<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >>(handle)->begin() ) );
}
void SetOf_SetOf__Int_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle );
}
bool SetOf_SetOf__Int_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >>(handle)->end();
}
void SetOf_SetOf__Int_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle );
}
_baseRef SetOf_SetOf__Int_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >::iterator*>( iterator_handle );
    return Conversion<std::unordered_set<int32_t>>::referenceBaseRef(value);
}
_baseRef SetOf_SetOf__Int_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >>( std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >( ) ) );
}
void SetOf_SetOf__Int_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >>*>( handle );
}
_baseRef SetOf_SetOf__Int_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<std::unordered_set<int32_t>, ::gluecodium::hash<std::unordered_set<int32_t>> >>*>( handle ) );
}
_baseRef SetOf__Float_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<float>() );
}
void SetOf__Float_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<float>>(handle);
}
void SetOf__Float_insert(_baseRef handle, float value) {
    (*get_pointer<std::unordered_set<float>>(handle)).insert(std::move(value));
}
_baseRef SetOf__Float_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<float>::iterator( get_pointer<std::unordered_set<float>>(handle)->begin() ) );
}
void SetOf__Float_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<float>::iterator*>( iterator_handle );
}
bool SetOf__Float_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<float>::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<float>>(handle)->end();
}
void SetOf__Float_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<float>::iterator*>( iterator_handle );
}
float SetOf__Float_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<float>::iterator*>( iterator_handle );
    return value;
}
_baseRef SetOf__Float_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<float>>( std::unordered_set<float>( ) ) );
}
void SetOf__Float_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<float>>*>( handle );
}
_baseRef SetOf__Float_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<float>>*>( handle ) );
}
_baseRef SetOf__Int_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<int32_t>() );
}
void SetOf__Int_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<int32_t>>(handle);
}
void SetOf__Int_insert(_baseRef handle, int32_t value) {
    (*get_pointer<std::unordered_set<int32_t>>(handle)).insert(std::move(value));
}
_baseRef SetOf__Int_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<int32_t>::iterator( get_pointer<std::unordered_set<int32_t>>(handle)->begin() ) );
}
void SetOf__Int_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<int32_t>::iterator*>( iterator_handle );
}
bool SetOf__Int_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<int32_t>::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<int32_t>>(handle)->end();
}
void SetOf__Int_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<int32_t>::iterator*>( iterator_handle );
}
int32_t SetOf__Int_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<int32_t>::iterator*>( iterator_handle );
    return value;
}
_baseRef SetOf__Int_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<int32_t>>( std::unordered_set<int32_t>( ) ) );
}
void SetOf__Int_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<int32_t>>*>( handle );
}
_baseRef SetOf__Int_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<int32_t>>*>( handle ) );
}
_baseRef SetOf__String_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<std::string>() );
}
void SetOf__String_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<std::string>>(handle);
}
void SetOf__String_insert(_baseRef handle, _baseRef value) {
    (*get_pointer<std::unordered_set<std::string>>(handle)).insert(std::move(Conversion<std::string>::toCpp(value)));
}
_baseRef SetOf__String_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<std::string>::iterator( get_pointer<std::unordered_set<std::string>>(handle)->begin() ) );
}
void SetOf__String_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<std::string>::iterator*>( iterator_handle );
}
bool SetOf__String_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<std::string>::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<std::string>>(handle)->end();
}
void SetOf__String_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<std::string>::iterator*>( iterator_handle );
}
_baseRef SetOf__String_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<std::string>::iterator*>( iterator_handle );
    return Conversion<std::string>::referenceBaseRef(value);
}
_baseRef SetOf__String_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<std::string>>( std::unordered_set<std::string>( ) ) );
}
void SetOf__String_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<std::string>>*>( handle );
}
_baseRef SetOf__String_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<std::string>>*>( handle ) );
}
_baseRef SetOf__UByte_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<uint8_t>() );
}
void SetOf__UByte_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<uint8_t>>(handle);
}
void SetOf__UByte_insert(_baseRef handle, uint8_t value) {
    (*get_pointer<std::unordered_set<uint8_t>>(handle)).insert(std::move(value));
}
_baseRef SetOf__UByte_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<uint8_t>::iterator( get_pointer<std::unordered_set<uint8_t>>(handle)->begin() ) );
}
void SetOf__UByte_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<uint8_t>::iterator*>( iterator_handle );
}
bool SetOf__UByte_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<uint8_t>::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<uint8_t>>(handle)->end();
}
void SetOf__UByte_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<uint8_t>::iterator*>( iterator_handle );
}
uint8_t SetOf__UByte_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<uint8_t>::iterator*>( iterator_handle );
    return value;
}
_baseRef SetOf__UByte_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<uint8_t>>( std::unordered_set<uint8_t>( ) ) );
}
void SetOf__UByte_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<uint8_t>>*>( handle );
}
_baseRef SetOf__UByte_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<uint8_t>>*>( handle ) );
}
_baseRef SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >() );
}
void SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >>(handle);
}
void SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_insert(_baseRef handle, smoke_GenericTypesWithCompoundTypes_ExternalEnum value) {
    (*get_pointer<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >>(handle)).insert(std::move(static_cast<::alien::FooEnum>(value)));
}
_baseRef SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >::iterator( get_pointer<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >>(handle)->begin() ) );
}
void SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle );
}
bool SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >>(handle)->end();
}
void SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle );
}
smoke_GenericTypesWithCompoundTypes_ExternalEnum SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >::iterator*>( iterator_handle );
    return static_cast<smoke_GenericTypesWithCompoundTypes_ExternalEnum>(value);
}
_baseRef SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >>( std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >( ) ) );
}
void SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >>*>( handle );
}
_baseRef SetOf_smoke_GenericTypesWithCompoundTypes_ExternalEnum_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<::alien::FooEnum, ::gluecodium::hash<::alien::FooEnum> >>*>( handle ) );
}
_baseRef SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_create_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >() );
}
void SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_release_handle(_baseRef handle) {
    delete get_pointer<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>(handle);
}
void SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_insert(_baseRef handle, smoke_GenericTypesWithCompoundTypes_SomeEnum value) {
    (*get_pointer<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>(handle)).insert(std::move(static_cast<::smoke::GenericTypesWithCompoundTypes::SomeEnum>(value)));
}
_baseRef SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator(_baseRef handle) {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator( get_pointer<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>(handle)->begin() ) );
}
void SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_release_handle(_baseRef iterator_handle) {
    delete reinterpret_cast<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle );
}
bool SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_is_valid(_baseRef handle, _baseRef iterator_handle) {
    return *reinterpret_cast<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle ) != get_pointer<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>(handle)->end();
}
void SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_increment(_baseRef iterator_handle) {
    ++*reinterpret_cast<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle );
}
smoke_GenericTypesWithCompoundTypes_SomeEnum SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_iterator_get(_baseRef iterator_handle) {
    auto& value = **reinterpret_cast<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >::iterator*>( iterator_handle );
    return static_cast<smoke_GenericTypesWithCompoundTypes_SomeEnum>(value);
}
_baseRef SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_create_optional_handle() {
    return reinterpret_cast<_baseRef>( new ( std::nothrow ) ::gluecodium::optional<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>( std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >( ) ) );
}
void SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_release_optional_handle(_baseRef handle) {
    delete reinterpret_cast<::gluecodium::optional<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>*>( handle );
}
_baseRef SetOf_smoke_GenericTypesWithCompoundTypes_SomeEnum_unwrap_optional_handle(_baseRef handle) {
    return reinterpret_cast<_baseRef>( &**reinterpret_cast<::gluecodium::optional<std::unordered_set<::smoke::GenericTypesWithCompoundTypes::SomeEnum, ::gluecodium::hash<::smoke::GenericTypesWithCompoundTypes::SomeEnum> >>*>( handle ) );
}