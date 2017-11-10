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

import Foundation


internal func getRef(_ ref: AttributesInterface) -> RefHolder<smoke_AttributesInterfaceRef> {
    guard let instanceReference = ref as? _AttributesInterface else {
        fatalError("Not implemented yet")
    }
    return RefHolder<smoke_AttributesInterfaceRef>(instanceReference.c_instance)
}


public protocol AttributesInterface {


    var structAttribute: ExampleStruct { get set }


}

internal class _AttributesInterface: AttributesInterface {



    var structAttribute: ExampleStruct {
        get {
            let cResult = smoke_AttributesInterface_structAttribute_get(c_instance)


            defer {
                smoke_AttributesInterface_ExampleStruct_release(cResult)
            }

            return ExampleStruct(cExampleStruct: cResult)!
        }
        set {
            let newValueHandle = newValue.convertToCType()
            defer {
                smoke_AttributesInterface_ExampleStruct_release(newValueHandle)
            }
            return smoke_AttributesInterface_structAttribute_set(c_instance, newValueHandle)
        }
    }
    let c_instance : smoke_AttributesInterfaceRef

    required init?(cAttributesInterface: smoke_AttributesInterfaceRef) {
        c_instance = cAttributesInterface
    }

    deinit {
        smoke_AttributesInterface_release(c_instance)
    }
}
public struct ExampleStruct {
    public var value: Double

    public init(value: Double) {
        self.value = value
    }

    internal init?(cExampleStruct: smoke_AttributesInterface_ExampleStructRef) {
        value = smoke_AttributesInterface_ExampleStruct_value_get(cExampleStruct)
    }

    internal func convertToCType() -> smoke_AttributesInterface_ExampleStructRef {
        let result = smoke_AttributesInterface_ExampleStruct_create()
        fillFunction(result)
        return result
    }

    internal func fillFunction(_ cExampleStruct: smoke_AttributesInterface_ExampleStructRef) -> Void {
        smoke_AttributesInterface_ExampleStruct_value_set(cExampleStruct, value)
    }
}