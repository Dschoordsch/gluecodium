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
#include <cstdint>
namespace examples {
class _GENIUM_CPP_EXPORT Properties {
public:
    Properties();
    virtual ~Properties() = 0;
public:
virtual uint32_t get_built_in_type_property(  ) const = 0;
virtual void set_built_in_type_property( const uint32_t value ) = 0;
virtual float get_readonly_property(  ) const = 0;
};
}
namespace genium {
_GENIUM_CPP_EXPORT TypeRepository& get_type_repository(const ::examples::Properties*);
}