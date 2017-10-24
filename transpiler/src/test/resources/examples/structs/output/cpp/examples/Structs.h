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
//
// Automatically generated. Do not modify. Your changes will be lost.
//
// -------------------------------------------------------------------------------------------------

#pragma once

#include <cstdint>

namespace examples {

class Structs {
public:
struct SyncResult {
    uint64_t lastUpdatedTimeStamp = 0;
    uint32_t numberOfChanges = 0;
};
struct IdentifiableSyncResult {
    int32_t id = 0;
    ::examples::Structs::SyncResult syncResult;
};

public:
static ::examples::Structs::SyncResult methodWithNonNestedType( const ::examples::Structs::SyncResult& input );
static ::examples::Structs::IdentifiableSyncResult methodWithNestedType( const ::examples::Structs::IdentifiableSyncResult& input );

};

}
