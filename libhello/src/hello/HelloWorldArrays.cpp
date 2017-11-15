// -------------------------------------------------------------------------------------------------
//
// Copyright (C) 2017 HERE Global B.V. and/or its affiliated companies. All rights reserved.
//
// This software, including documentation, is protected by copyright controlled by
// HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
// adapting or translating, any or all of this material requires the prior written
// consent of HERE Global B.V. This material also contains confidential information,
// which may not be disclosed to others without prior written consent of HERE Global B.V.
//
// -------------------------------------------------------------------------------------------------

#include "hello/HelloWorldArrays.h"

namespace hello
{

HelloWorldArrays::StringArray
HelloWorldArrays::method_with_array( const HelloWorldArrays::StringArray& input )
{
    return { input.rbegin( ), input.rend( ) };
}

std::vector< int64_t >
HelloWorldArrays::method_with_simple_array( const HelloWorldArrays::Int64Array& input )
{
    return { input.rbegin( ), input.rend( ) };
}

std::vector<  uint32_t >
HelloWorldArrays::method_with_array_inline( const std::vector<  uint32_t >& input )
{
    return { input.rbegin( ), input.rend( ) };
}

std::vector< HelloWorldArrays::ExampleStruct >
HelloWorldArrays::method_with_struct_array(
    const std::vector< HelloWorldArrays::ExampleStruct >& input )
{
    return {input.rbegin( ), input.rend( )};
}

std::vector< HelloWorldArrays::Int64Array >
HelloWorldArrays::method_with_nested_arrays_inline(
    const std::vector< HelloWorldArrays::Int64Array >& input )
{
    std::vector< HelloWorldArrays::Int64Array > output;
    auto reverseIterator = input.rbegin( );
    while ( reverseIterator != input.rend( ) )
    {
        output.push_back( { reverseIterator->rbegin(), reverseIterator->rend() } );
        reverseIterator++;
    }
    return output;
}

}
