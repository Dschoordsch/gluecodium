//
//
import Foundation
public class EnumsInTypeCollectionInterface {
    let c_instance : _baseRef
    init(cEnumsInTypeCollectionInterface: _baseRef) {
        guard cEnumsInTypeCollectionInterface != 0 else {
            fatalError("Nullptr value is not supported for initializers")
        }
        c_instance = cEnumsInTypeCollectionInterface
    }
    deinit {
        smoke_EnumsInTypeCollectionInterface_release_handle(c_instance)
    }
    public static func flipEnumValue(input: TCEnum) -> TCEnum {
        let c_input = moveToCType(input)
        return moveFromCType(smoke_EnumsInTypeCollectionInterface_flipEnumValue(c_input.ref))
    }
}
internal func getRef(_ ref: EnumsInTypeCollectionInterface?, owning: Bool = true) -> RefHolder {
    guard let c_handle = ref?.c_instance else {
        return RefHolder(0)
    }
    let handle_copy = smoke_EnumsInTypeCollectionInterface_copy_handle(c_handle)
    return owning
        ? RefHolder(ref: handle_copy, release: smoke_EnumsInTypeCollectionInterface_release_handle)
        : RefHolder(handle_copy)
}
extension EnumsInTypeCollectionInterface: NativeBase {
    var c_handle: _baseRef { return c_instance }
}
internal func EnumsInTypeCollectionInterface_copyFromCType(_ handle: _baseRef) -> EnumsInTypeCollectionInterface {
    return EnumsInTypeCollectionInterface(cEnumsInTypeCollectionInterface: smoke_EnumsInTypeCollectionInterface_copy_handle(handle))
}
internal func EnumsInTypeCollectionInterface_moveFromCType(_ handle: _baseRef) -> EnumsInTypeCollectionInterface {
    return EnumsInTypeCollectionInterface(cEnumsInTypeCollectionInterface: handle)
}
internal func EnumsInTypeCollectionInterface_copyFromCType(_ handle: _baseRef) -> EnumsInTypeCollectionInterface? {
    guard handle != 0 else {
        return nil
    }
    return EnumsInTypeCollectionInterface_moveFromCType(handle) as EnumsInTypeCollectionInterface
}
internal func EnumsInTypeCollectionInterface_moveFromCType(_ handle: _baseRef) -> EnumsInTypeCollectionInterface? {
    guard handle != 0 else {
        return nil
    }
    return EnumsInTypeCollectionInterface_moveFromCType(handle) as EnumsInTypeCollectionInterface
}
internal func copyToCType(_ swiftClass: EnumsInTypeCollectionInterface) -> RefHolder {
    return getRef(swiftClass, owning: false)
}
internal func moveToCType(_ swiftClass: EnumsInTypeCollectionInterface) -> RefHolder {
    return getRef(swiftClass, owning: true)
}
internal func copyToCType(_ swiftClass: EnumsInTypeCollectionInterface?) -> RefHolder {
    return getRef(swiftClass, owning: false)
}
internal func moveToCType(_ swiftClass: EnumsInTypeCollectionInterface?) -> RefHolder {
    return getRef(swiftClass, owning: true)
}