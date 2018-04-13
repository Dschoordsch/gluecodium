//
//
// Automatically generated. Do not modify. Your changes will be lost.

import Foundation



internal func getRef(_ ref: Arrays?) -> RefHolder {
    return RefHolder(ref?.c_instance ?? 0)
}
public class Arrays {
    let c_instance : _baseRef

    public init?(cArrays: _baseRef) {
        guard cArrays != 0 else {
            return nil
        }
        c_instance = cArrays
    }

    deinit {
        examples_Arrays_release(c_instance)
    }
    public struct SyncResult {
        public var lastUpdatedTimeStamp: UInt64
        public var numberOfChanges: UInt32

        public init(lastUpdatedTimeStamp: UInt64, numberOfChanges: UInt32) {
            self.lastUpdatedTimeStamp = lastUpdatedTimeStamp
            self.numberOfChanges = numberOfChanges
        }

        internal init?(cSyncResult: _baseRef) {
            lastUpdatedTimeStamp = examples_Arrays_SyncResult_lastUpdatedTimeStamp_get(cSyncResult)
            numberOfChanges = examples_Arrays_SyncResult_numberOfChanges_get(cSyncResult)
        }

        internal func convertToCType() -> _baseRef {
            let result = examples_Arrays_SyncResult_create()
            fillFunction(result)
            return result
        }

        internal func fillFunction(_ cSyncResult: _baseRef) -> Void {
            examples_Arrays_SyncResult_lastUpdatedTimeStamp_set(cSyncResult, lastUpdatedTimeStamp)
            examples_Arrays_SyncResult_numberOfChanges_set(cSyncResult, numberOfChanges)
        }
    }

    public static func explicitArrayMethod<Tinput: Collection>(input: Tinput) -> CollectionOf<Arrays.SyncResult> where Tinput.Element == Arrays.SyncResult {

        let inputHandle = input.c_conversion()
        defer {
            inputHandle.cleanup()
        }

        let handle = examples_Arrays_explicitArrayMethod(inputHandle.c_type)
        return SyncResultList(handle)
    }

    public static func implicitArrayMethod<Tinput: Collection>(input: Tinput) -> CollectionOf<Arrays.SyncResult> where Tinput.Element == Arrays.SyncResult {

        let inputHandle = input.c_conversion()
        defer {
            inputHandle.cleanup()
        }

        let handle = examples_Arrays_implicitArrayMethod(inputHandle.c_type)
        return SyncResultList(handle)
    }

}

extension Arrays: NativeBase {
    var c_handle: _baseRef { return c_instance }
}