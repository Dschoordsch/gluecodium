// -------------------------------------------------------------------------------------------------
//
// Copyright (C) 2018 HERE Global B.V. and/or its affiliated companies. All rights reserved.
//
// This software, including documentation, is protected by copyright controlled by
// HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
// adapting or translating, any or all of this material requires the prior written
// consent of HERE Global B.V. This material also contains confidential information,
// which may not be disclosed to others without prior written consent of HERE Global B.V.
//
// -------------------------------------------------------------------------------------------------

#include "GrandchildClassImpl.h"

namespace test
{

std::shared_ptr< GrandchildClass >
GrandchildClass::create_grandchild_class( )
{
    return std::make_shared< GrandchildClassImpl >( );
}

GrandchildClassImpl::GrandchildClassImpl( )
{
    set_lucky_number(42);
}

std::shared_ptr< ParentInterface >
GrandchildClassImpl::cast_to_parent( )
{
    return ChildClassImpl::cast_to_parent( );
}

std::string
GrandchildClassImpl::get_name( )
{
    return "John F. Kimberly";
}

int32_t
GrandchildClassImpl::get_lucky_number( )
{
    return ChildClassImpl::get_lucky_number( );
}

void
GrandchildClassImpl::set_lucky_number( const int32_t number )
{
    ChildClassImpl::set_lucky_number( number );
}

void
GrandchildClassImpl::do_something( const std::string& value )
{
    // Do nothing
}

void
GrandchildClassImpl::do_something_to_child_class(
    const ::std::shared_ptr< ::test::ChildClass >& input )
{
    // Do nothing
}

}
