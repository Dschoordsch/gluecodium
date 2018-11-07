//
//
// Automatically generated. Do not modify. Your changes will be lost.

import Foundation

internal func getRef(_ ref: MethodOverloads?) -> RefHolder {
    return RefHolder(ref?.c_instance ?? 0)
}
public class MethodOverloads {
    let c_instance : _baseRef

    public init?(cMethodOverloads: _baseRef) {
        guard cMethodOverloads != 0 else {
            return nil
        }
        c_instance = cMethodOverloads
    }

    deinit {
        smoke_MethodOverloads_release(c_instance)
    }
    public struct Point {
        public var x: Double
        public var y: Double

        public init(x: Double, y: Double) {
            self.x = x
            self.y = y
        }

        internal init(cPoint: _baseRef) {
            x = smoke_MethodOverloads_Point_x_get(cPoint)
            y = smoke_MethodOverloads_Point_y_get(cPoint)
        }

        internal func convertToCType() -> _baseRef {
            let x_handle = x
            let y_handle = y
            return smoke_MethodOverloads_Point_create(x_handle, y_handle)
        }
    }

    public func isBoolean(input: Bool) -> Bool {
        return smoke_MethodOverloads_isBoolean_boolOverload(c_instance, input)
    }

    public func isBoolean(input: Int8) -> Bool {
        return smoke_MethodOverloads_isBoolean_intOverload(c_instance, input)
    }

    public func isBoolean(input: String) -> Bool {
        return smoke_MethodOverloads_isBoolean_stringOverload(c_instance, input)
    }

    public func isBoolean(input: MethodOverloads.Point) -> Bool {
        let input_handle = input.convertToCType()
        defer {
            smoke_MethodOverloads_Point_release(input_handle)
        }
        return smoke_MethodOverloads_isBoolean_structOverload(c_instance, input_handle)
    }

    public func isBoolean(input1: Bool, input2: Int8, input3: String, input4: MethodOverloads.Point) -> Bool {
        let input4_handle = input4.convertToCType()
        defer {
            smoke_MethodOverloads_Point_release(input4_handle)
        }
        return smoke_MethodOverloads_isBoolean_everythingOverload(c_instance, input1, input2, input3, input4_handle)
    }

    public func isBoolean<Tinput: Collection>(input: Tinput) -> Bool where Tinput.Element == String {

        let input_handle = input.c_conversion()
        defer {
            input_handle.cleanup()
        }
        return smoke_MethodOverloads_isBoolean_stringArrayOverload(c_instance, input_handle.c_type)
    }

    public func isBoolean<Tinput: Collection>(input: Tinput) -> Bool where Tinput.Element == Int8 {

        let input_handle = input.c_conversion()
        defer {
            input_handle.cleanup()
        }
        return smoke_MethodOverloads_isBoolean_intArrayOverload(c_instance, input_handle.c_type)
    }

    public func isBoolean() -> Bool {
        return smoke_MethodOverloads_isBoolean_constOverload(c_instance)
    }

    public func isFloat(input: String) -> Bool {
        return smoke_MethodOverloads_isFloat_stringOverload(c_instance, input)
    }

    public func isFloat<Tinput: Collection>(input: Tinput) -> Bool where Tinput.Element == Int8 {
        let input_handle = input.c_conversion()
        defer {
            input_handle.cleanup()
        }
        return smoke_MethodOverloads_isFloat_intArrayOverload(c_instance, input_handle.c_type)
    }
}

extension MethodOverloads: NativeBase {
    var c_handle: _baseRef { return c_instance }
}
