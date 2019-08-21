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
#include "genium/UnorderedMapHash.h"
#include <cstdint>
#include <string>
#include <unordered_map>
namespace examples {
class _GENIUM_CPP_EXPORT Maps {
public:
    Maps();
    virtual ~Maps() = 0;
public:
using NameMap = ::std::unordered_map< uint64_t, ::std::string >;
public:
static ::examples::Maps::NameMap map_method( const ::examples::Maps::NameMap& input );
static ::std::unordered_map< uint64_t, ::std::string > inline_map_method( const ::std::unordered_map< uint64_t, ::std::string >& input );
};
}
namespace genium {
_GENIUM_CPP_EXPORT TypeRepository& get_type_repository(const ::examples::Maps*);
}