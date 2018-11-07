//
//
// Automatically generated. Do not modify. Your changes will be lost.

import Foundation

internal func getRef(_ ref: CalculatorListener?) -> RefHolder {
    guard let reference = ref else {
        return RefHolder(0)
    }
    if let instanceReference = reference as? NativeBase {
        return RefHolder(instanceReference.c_handle)
    }
    var functions = smoke_CalculatorListener_FunctionTable()
    functions.swift_pointer = Unmanaged<AnyObject>.passRetained(reference).toOpaque()
    functions.release = {swift_class_pointer in
        if let swift_class = swift_class_pointer {
            Unmanaged<AnyObject>.fromOpaque(swift_class).release()
        }
    }
    functions.smoke_CalculatorListener_onCalculationResult = {(swift_class_pointer, calculationResult) in
        let swift_class = Unmanaged<AnyObject>.fromOpaque(swift_class_pointer!).takeUnretainedValue() as! CalculatorListener
        return swift_class.onCalculationResult(calculationResult: calculationResult)
    }
    functions.smoke_CalculatorListener_onCalculationResultConst = {(swift_class_pointer, calculationResult) in
        let swift_class = Unmanaged<AnyObject>.fromOpaque(swift_class_pointer!).takeUnretainedValue() as! CalculatorListener
        return swift_class.onCalculationResultConst(calculationResult: calculationResult)
    }
    functions.smoke_CalculatorListener_onCalculationResultStruct = {(swift_class_pointer, calculationResult) in
        let swift_class = Unmanaged<AnyObject>.fromOpaque(swift_class_pointer!).takeUnretainedValue() as! CalculatorListener
        return swift_class.onCalculationResultStruct(calculationResult: ResultStruct(cResultStruct: calculationResult)!)
    }
    functions.smoke_CalculatorListener_onCalculationResultArray = {(swift_class_pointer, calculationResult) in
        let swift_class = Unmanaged<AnyObject>.fromOpaque(swift_class_pointer!).takeUnretainedValue() as! CalculatorListener
        return swift_class.onCalculationResultArray(calculationResult: DoubleList(calculationResult))
    }
    functions.smoke_CalculatorListener_onCalculationResultMap = {(swift_class_pointer, calculationResults) in
        let swift_class = Unmanaged<AnyObject>.fromOpaque(swift_class_pointer!).takeUnretainedValue() as! CalculatorListener
        defer {
            smoke_CalculatorListener_NamedCalculationResults_release(calculationResults)
        }
        return swift_class.onCalculationResultMap(calculationResults: convertNamedCalculationResultsFromCType(calculationResults))
    }
    functions.smoke_CalculatorListener_onCalculationResultInstance = {(swift_class_pointer, calculationResult) in
        let swift_class = Unmanaged<AnyObject>.fromOpaque(swift_class_pointer!).takeUnretainedValue() as! CalculatorListener
        var swift_object_calculationResult: CalculationResult? = nil
        if let swift_pointer_calculationResult = smoke_CalculationResult_get_swift_object_from_cache(calculationResult) {
            swift_object_calculationResult = Unmanaged<AnyObject>.fromOpaque(swift_pointer_calculationResult).takeUnretainedValue() as? CalculationResult
            if swift_object_calculationResult != nil {
                defer {
                    smoke_CalculationResult_release(calculationResult)
                }
            }
        }
        if swift_object_calculationResult == nil {
            swift_object_calculationResult = _CalculationResult(cCalculationResult: calculationResult)
        }
        return swift_class.onCalculationResultInstance(calculationResult: swift_object_calculationResult!)
    }
    let proxy = smoke_CalculatorListener_createProxy(functions)
    return RefHolder(ref: proxy, release: smoke_CalculatorListener_release)
}

public protocol CalculatorListener : AnyObject {
    typealias NamedCalculationResults = [String: Double]
    func onCalculationResult(calculationResult: Double) -> Void
    func onCalculationResultConst(calculationResult: Double) -> Void
    func onCalculationResultStruct(calculationResult: ResultStruct) -> Void
    func onCalculationResultArray<TcalculationResult: Collection>(calculationResult: TcalculationResult) -> Void where TcalculationResult.Element == Double
    func onCalculationResultMap(calculationResults: NamedCalculationResults) -> Void
    func onCalculationResultInstance(calculationResult: CalculationResult?) -> Void
}

internal class _CalculatorListener: CalculatorListener {
    let c_instance : _baseRef
    init?(cCalculatorListener: _baseRef) {
        guard cCalculatorListener != 0 else {
            return nil
        }
        c_instance = cCalculatorListener
    }
    deinit {
        smoke_CalculatorListener_release(c_instance)
    }
    public func onCalculationResult(calculationResult: Double) -> Void {
        return smoke_CalculatorListener_onCalculationResult(c_instance, calculationResult)
    }
    public func onCalculationResultConst(calculationResult: Double) -> Void {
        return smoke_CalculatorListener_onCalculationResultConst(c_instance, calculationResult)
    }
    public func onCalculationResultStruct(calculationResult: ResultStruct) -> Void {
        let calculationResult_handle = calculationResult.convertToCType()
        defer {
            smoke_CalculatorListener_ResultStruct_release(calculationResult_handle)
        }
        return smoke_CalculatorListener_onCalculationResultStruct(c_instance, calculationResult_handle)
    }
    public func onCalculationResultArray<TcalculationResult: Collection>(calculationResult: TcalculationResult) -> Void where TcalculationResult.Element == Double {
        let calculationResult_handle = calculationResult.c_conversion()
        defer {
            calculationResult_handle.cleanup()
        }
        return smoke_CalculatorListener_onCalculationResultArray(c_instance, calculationResult_handle.c_type)
    }
    public func onCalculationResultMap(calculationResults: NamedCalculationResults) -> Void {
        let calculationResults_handle = convertNamedCalculationResultsToCType(calculationResults)
        defer {
            smoke_CalculatorListener_NamedCalculationResults_release(calculationResults_handle)
        }
        return smoke_CalculatorListener_onCalculationResultMap(c_instance, calculationResults_handle)
    }
    public func onCalculationResultInstance(calculationResult: CalculationResult?) -> Void {
        let calculationResult_handle = getRef(calculationResult)
        return smoke_CalculatorListener_onCalculationResultInstance(c_instance, calculationResult_handle.ref)
    }
}

extension _CalculatorListener: NativeBase {
    var c_handle: _baseRef { return c_instance }
}

public struct ResultStruct {
    public var result: Double
    public init(result: Double) {
        self.result = result
    }
    internal init(cResultStruct: _baseRef) {
        result = smoke_CalculatorListener_ResultStruct_result_get(cResultStruct)
    }
    internal func convertToCType() -> _baseRef {
        let result_handle = result
        return smoke_CalculatorListener_ResultStruct_create(result_handle)
    }
}

func convertNamedCalculationResultsToCType(_ swiftDict: NamedCalculationResults) -> _baseRef {
    let c_handle = smoke_CalculatorListener_NamedCalculationResults_create()
    for (swift_key, swift_value) in swiftDict {
        let c_key = swift_key.convertToCType()
        defer {
            std_string_release(c_key)
        }
        let c_value = swift_value
        smoke_CalculatorListener_NamedCalculationResults_put(c_handle, c_key, c_value)
    }
    return c_handle
}
func convertNamedCalculationResultsFromCType(_ c_handle: _baseRef) -> NamedCalculationResults {
    var swiftDict: NamedCalculationResults = [:]
    let iterator_handle = smoke_CalculatorListener_NamedCalculationResults_iterator(c_handle)
    while smoke_CalculatorListener_NamedCalculationResults_iterator_is_valid(c_handle, iterator_handle) {
        let c_key = smoke_CalculatorListener_NamedCalculationResults_iterator_key(iterator_handle)
        defer {
            std_string_release(c_key)
        }
        let swift_key = String(data: Data(bytes: std_string_data_get(c_key),
                                            count: Int(std_string_size_get(c_key))),
                                            encoding: .utf8)
        let c_value = smoke_CalculatorListener_NamedCalculationResults_iterator_value(iterator_handle)
        let swift_value = c_value
        swiftDict[swift_key!] = swift_value
        smoke_CalculatorListener_NamedCalculationResults_iterator_increment(iterator_handle)
    }
    smoke_CalculatorListener_NamedCalculationResults_iterator_release(iterator_handle)
    return swiftDict
}
