//
//
// Automatically generated. Do not modify. Your changes will be lost.

import Foundation



internal func getRef(_ ref: Calculator?, owning: Bool = false) -> RefHolder {
    return RefHolder(ref?.c_instance ?? 0)
}
public class Calculator {
    let c_instance : _baseRef

    init?(cCalculator: _baseRef) {
        guard cCalculator != 0 else {
            return nil
        }
        c_instance = cCalculator
    }

    deinit {
        examples_Calculator_release(c_instance)
    }
    public static func registerListener(listener: CalculatorListener?) -> Void {
        let listener_handle = getRef(listener)
        return examples_Calculator_registerListener(listener_handle.ref)
    }

    public static func unregisterListener(listener: CalculatorListener?) -> Void {
        let listener_handle = getRef(listener)
        return examples_Calculator_unregisterListener(listener_handle.ref)
    }

    public static func calculate() -> Void {
        return examples_Calculator_calculate()
    }

}

extension Calculator: NativeBase {
    var c_handle: _baseRef { return c_instance }
}
