// -------------------------------------------------------------------------------------------------
//
//
// -------------------------------------------------------------------------------------------------
//
// Automatically generated. Do not modify. Your changes will be lost.
//
// -------------------------------------------------------------------------------------------------
#pragma once
#include "genium/Export.h"
#include "genium/TypeRepository.h"
#include <string>
namespace smoke {
namespace off {
class _GENIUM_CPP_EXPORT NestedPackages {
public:
    NestedPackages();
    virtual ~NestedPackages() = 0;
public:
struct _GENIUM_CPP_EXPORT SomeStruct {
    ::std::string some_field;
    SomeStruct( );
    SomeStruct( const ::std::string& some_field );
};
public:
static ::smoke::off::NestedPackages::SomeStruct basic_method( const ::smoke::off::NestedPackages::SomeStruct& input );
};
}
}
namespace genium {
_GENIUM_CPP_EXPORT TypeRepository& get_type_repository(const ::smoke::off::NestedPackages*);
}