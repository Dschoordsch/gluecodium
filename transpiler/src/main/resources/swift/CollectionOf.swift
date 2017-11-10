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

public class CollectionOf<T> : Collection {

    private var elements: Array<T>

    public init(_ elements: Array<T>) {
        self.elements = elements
        self.startIndex = 0
        self.endIndex = elements.count
    }

    public func index(after i: Int) -> Int {
        return i+1
    }

    public subscript(position: Int) -> T {
        return elements[position]
    }

    public var startIndex: Int
    public var endIndex: Int

    public typealias Element = T
    public typealias Index = Int
}

extension CollectionOf: CustomDebugStringConvertible {
    public var debugDescription: String {
        return self.flatMap{String(describing: $0)}.joined(separator:" ")
    }
}