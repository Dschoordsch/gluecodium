//
// Copyright (C) 2017 HERE Global B.V. and/or its affiliated companies. All rights reserved.
//
// This software, including documentation, is protected by copyright controlled by
// HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
// adapting or translating, any or all of this material requires the prior written
// consent of HERE Global B.V. This material also contains confidential information,
// which may not be disclosed to others without prior written consent of HERE Global B.V.
//
// Automatically generated. Do not modify. Your changes will be lost.
#pragma once
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>

typedef struct {
    void* const private_pointer;
} smoke_MethodOverloads_PointRef;

typedef struct {
    void* const private_pointer;
} smoke_MethodOverloadsRef;

smoke_MethodOverloads_PointRef smoke_MethodOverloads_Point_create();
void smoke_MethodOverloads_Point_release(smoke_MethodOverloads_PointRef handle);

double smoke_MethodOverloads_Point_x_get(smoke_MethodOverloads_PointRef handle);
void smoke_MethodOverloads_Point_x_set(smoke_MethodOverloads_PointRef handle, double x);
double smoke_MethodOverloads_Point_y_get(smoke_MethodOverloads_PointRef handle);
void smoke_MethodOverloads_Point_y_set(smoke_MethodOverloads_PointRef handle, double y);

void smoke_MethodOverloads_release(smoke_MethodOverloadsRef handle);

typedef struct {
    void* swift_pointer;
    void(*release)(void* swift_pointer);
    bool(*smoke_MethodOverloads_isBoolean_boolOverload)(smoke_MethodOverloadsRef _instance, bool input);
    bool(*smoke_MethodOverloads_isBoolean_intOverload)(smoke_MethodOverloadsRef _instance, int8_t input);
    bool(*smoke_MethodOverloads_isBoolean_stringOverload)(smoke_MethodOverloadsRef _instance, const char* input);
    bool(*smoke_MethodOverloads_isBoolean_structOverload)(smoke_MethodOverloadsRef _instance, smoke_MethodOverloads_PointRef input);
    bool(*smoke_MethodOverloads_isBoolean_everythingOverload)(smoke_MethodOverloadsRef _instance, bool input1, int8_t input2, const char* input3, smoke_MethodOverloads_PointRef input4);
} smoke_MethodOverloads_FunctionTable;

bool smoke_MethodOverloads_isBoolean_boolOverload(smoke_MethodOverloadsRef _instance, bool input);
bool smoke_MethodOverloads_isBoolean_intOverload(smoke_MethodOverloadsRef _instance, int8_t input);
bool smoke_MethodOverloads_isBoolean_stringOverload(smoke_MethodOverloadsRef _instance, const char* input);
bool smoke_MethodOverloads_isBoolean_structOverload(smoke_MethodOverloadsRef _instance, smoke_MethodOverloads_PointRef input);
bool smoke_MethodOverloads_isBoolean_everythingOverload(smoke_MethodOverloadsRef _instance, bool input1, int8_t input2, const char* input3, smoke_MethodOverloads_PointRef input4);

#ifdef __cplusplus
}
#endif