//
// Copyright (C) 2018 HERE Global B.V. and/or its affiliated companies. All rights reserved.
//
// This software, including documentation, is protected by copyright controlled by
// HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
// adapting or translating, any or all of this material requires the prior written
// consent of HERE Global B.V. This material also contains confidential information,
// which may not be disclosed to others without prior written consent of HERE Global B.V.
//
// Automatically generated. Do not modify. Your changes will be lost.

import Foundation

internal func getRef(_ ref: InheritanceParent) -> RefHolder<examples_InheritanceParentRef> {
    if let instanceReference = ref as? _InheritanceParent {
        return RefHolder<examples_InheritanceParentRef>(instanceReference.c_instance)
    }
    var functions = examples_InheritanceParent_FunctionTable()
    functions.swift_pointer = Unmanaged<AnyObject>.passRetained(ref).toOpaque()
    functions.release = {swiftClass_pointer in
        if let swiftClass = swiftClass_pointer {
            Unmanaged<AnyObject>.fromOpaque(swiftClass).release()
        }
    }
    functions.examples_InheritanceParent_parentMethod = {(swiftClass_pointer, input) in
        precondition(input.private_pointer != nil, "Out of memory")
        let swiftClass = Unmanaged<AnyObject>.fromOpaque(swiftClass_pointer!).takeUnretainedValue() as! InheritanceParent
        defer {
            std_string_release(input)
        }
        return (swiftClass.parentMethod(input: String(data: Data(bytes: std_string_data_get(input),
                                                count: Int(std_string_size_get(input))), encoding: .utf8)!)!).convertToCType()
    }
    let proxy = examples_InheritanceParent_createProxy(functions)
    precondition(proxy.private_pointer != nil, "Out of memory")
    return RefHolder(ref: proxy, release: examples_InheritanceParent_release)
}

public protocol InheritanceParent : AnyObject {
    func parentMethod(input: String) -> String?
}

internal class _InheritanceParent: InheritanceParent {
    let c_instance : examples_InheritanceParentRef
    required init?(cInheritanceParent: examples_InheritanceParentRef) {
        c_instance = cInheritanceParent
    }
    deinit {
        examples_InheritanceParent_release(c_instance)
    }
    public func parentMethod(input: String) -> String? {
        let result_string_handle = examples_InheritanceParent_parentMethod(c_instance, input)
        precondition(result_string_handle.private_pointer != nil, "Out of memory")
        defer {
            std_string_release(result_string_handle)
        }
        return String(data: Data(bytes: std_string_data_get(result_string_handle),
                                 count: Int(std_string_size_get(result_string_handle))), encoding: .utf8)
    }
}
