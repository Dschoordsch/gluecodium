// -------------------------------------------------------------------------------------------------
//
//
// -------------------------------------------------------------------------------------------------
#pragma once
#include "gluecodium/Export.h"
#include "gluecodium/VectorHash.h"
#include "smoke/RouteUtils.h"
#include <string>
#include <vector>
namespace smoke {
class _GLUECODIUM_CPP_EXPORT StructsWithConstantsInterface {
public:
    StructsWithConstantsInterface();
    virtual ~StructsWithConstantsInterface() = 0;
public:
    struct _GLUECODIUM_CPP_EXPORT MultiRoute {
        ::std::vector< ::std::string > descriptions;
        ::smoke::RouteType type;
        MultiRoute( );
        MultiRoute( const ::std::vector< ::std::string >& descriptions, const ::smoke::RouteType type );
        _GLUECODIUM_CPP_EXPORT static const ::std::string DEFAULT_DESCRIPTION;
        _GLUECODIUM_CPP_EXPORT static const ::smoke::RouteType DEFAULT_TYPE;
    };
    struct _GLUECODIUM_CPP_EXPORT StructWithConstantsOnly {
        _GLUECODIUM_CPP_EXPORT static const ::std::string DEFAULT_DESCRIPTION;
    };
};
}