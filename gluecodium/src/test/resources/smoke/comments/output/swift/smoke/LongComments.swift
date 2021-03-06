//
//
import Foundation
/// This is some very useful interface. There is a lot to say about this interface. at least it has a long comment.
public class LongComments {
    let c_instance : _baseRef
    init(cLongComments: _baseRef) {
        guard cLongComments != 0 else {
            fatalError("Nullptr value is not supported for initializers")
        }
        c_instance = cLongComments
    }
    deinit {
        smoke_LongComments_release_handle(c_instance)
    }
    /// This is very important method. It has very important parameters. It has side effects.
    /// - Parameters:
    ///   - input: Very useful input parameter. You must not confuse it with the second parameter. But they are similar.
    ///   - ratio: Not as useful as the first parameter. But still useful. use a positive value for more happiness.
    /// - Returns: If you provide a useful input and a useful ratio you can expect a useful output. Just kidding do not expect anything from a method until you see its body.
    public func someMethodWithLongComment(input: String, ratio: Double) -> Float {
        let c_input = moveToCType(input)
        let c_ratio = moveToCType(ratio)
        return moveFromCType(smoke_LongComments_someMethodWithLongComment(self.c_instance, c_input.ref, c_ratio.ref))
    }
}
internal func getRef(_ ref: LongComments?, owning: Bool = true) -> RefHolder {
    guard let c_handle = ref?.c_instance else {
        return RefHolder(0)
    }
    let handle_copy = smoke_LongComments_copy_handle(c_handle)
    return owning
        ? RefHolder(ref: handle_copy, release: smoke_LongComments_release_handle)
        : RefHolder(handle_copy)
}
extension LongComments: NativeBase {
    var c_handle: _baseRef { return c_instance }
}
internal func LongComments_copyFromCType(_ handle: _baseRef) -> LongComments {
    return LongComments(cLongComments: smoke_LongComments_copy_handle(handle))
}
internal func LongComments_moveFromCType(_ handle: _baseRef) -> LongComments {
    return LongComments(cLongComments: handle)
}
internal func LongComments_copyFromCType(_ handle: _baseRef) -> LongComments? {
    guard handle != 0 else {
        return nil
    }
    return LongComments_moveFromCType(handle) as LongComments
}
internal func LongComments_moveFromCType(_ handle: _baseRef) -> LongComments? {
    guard handle != 0 else {
        return nil
    }
    return LongComments_moveFromCType(handle) as LongComments
}
internal func copyToCType(_ swiftClass: LongComments) -> RefHolder {
    return getRef(swiftClass, owning: false)
}
internal func moveToCType(_ swiftClass: LongComments) -> RefHolder {
    return getRef(swiftClass, owning: true)
}
internal func copyToCType(_ swiftClass: LongComments?) -> RefHolder {
    return getRef(swiftClass, owning: false)
}
internal func moveToCType(_ swiftClass: LongComments?) -> RefHolder {
    return getRef(swiftClass, owning: true)
}
