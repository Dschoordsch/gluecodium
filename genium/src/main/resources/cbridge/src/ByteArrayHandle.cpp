// -------------------------------------------------------------------------------------------------
// Copyright (c) 2016-2018 HERE Europe B.V.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0
// License-Filename: LICENSE
//
// -------------------------------------------------------------------------------------------------

#include "cbridge/include/ByteArrayHandle.h"
#include "cbridge_internal/include/BaseHandleImpl.h"
#include <vector>

void
byteArray_release( _baseRef handle )
{
    delete get_pointer< std::vector< uint8_t > >( handle );
}

const uint8_t*
byteArray_data_get( _baseRef handle )
{
    return get_pointer< std::vector< uint8_t > >( handle )->data( );
}

int64_t
byteArray_size_get( _baseRef handle )
{
    return get_pointer< std::vector< uint8_t > >( handle )->size( );
}