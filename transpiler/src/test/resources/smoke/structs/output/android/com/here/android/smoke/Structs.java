/*
 * Copyright (C) 2017 HERE Global B.V. and/or its affiliated companies. All rights reserved.
 *
 * This software, including documentation, is protected by copyright controlled by
 * HERE Global B.V. All rights are reserved. Copying, including reproducing, storing,
 * adapting or translating, any or all of this material requires the prior written
 * consent of HERE Global B.V. This material also contains confidential information,
 * which may not be disclosed to others without prior written consent of HERE Global B.V.
 *
 * Automatically generated. Do not modify. Your changes will be lost.
 */

package com.here.android.smoke;

import com.here.android.NativeBase;

public class Structs extends NativeBase {
    public static class Point {
        public double x;
        public double y;
        public Point() {}
        public Point(double x, double y) {
            this.x = x;
            this.y = y;
        }
    }
    public static class Color {
        public long red;
        public long green;
        public long blue;

        public Color() {}

        public Color(long red, long green, long blue) {
            this.red = red;
            this.green = green;
            this.blue = blue;
        }

        public static ColorBuilder builder() {
            return new ColorBuilder();
        }

        public static class ColorBuilder {
            public long red;
            public long green;
            public long blue;

            ColorBuilder() {
            }

            public ColorBuilder red(long red) {
                this.red = red;
                return this;
            }

            public ColorBuilder green(long green) {
                this.green = green;
                return this;
            }

            public ColorBuilder blue(long blue) {
                this.blue = blue;
                return this;
            }

            public Color build() {
                return new Color(red, green, blue);
            }
        }
    }
    public static class Line {
        public Structs.Point a = new Structs.Point();
        public Structs.Point b = new Structs.Point();
        public Line() {}
        public Line(Structs.Point a, Structs.Point b) {
            this.a = a;
            this.b = b;
        }
    }
    public static class ColoredLine {
        public Structs.Line line = new Structs.Line();
        public Structs.Color color = new Structs.Color();
        public ColoredLine() {}
        public ColoredLine(Structs.Line line, Structs.Color color) {
            this.line = line;
            this.color = color;
        }
    }
    public static class AllTypesStruct {
        public byte int8Field;
        public long uint8Field;
        public short int16Field;
        public long uint16Field;
        public int int32Field;
        public long uint32Field;
        public long int64Field;
        public long uint64Field;
        public float floatField;
        public double doubleField;
        public String stringField;
        public boolean booleanField;
        public byte[] bytesField;
        public Structs.Point pointField = new Structs.Point();
        public AllTypesStruct() {}
        public AllTypesStruct(byte int8Field, long uint8Field, short int16Field, long uint16Field, int int32Field, long uint32Field, long int64Field, long uint64Field, float floatField, double doubleField, String stringField, boolean booleanField, byte[] bytesField, Structs.Point pointField) {
            this.int8Field = int8Field;
            this.uint8Field = uint8Field;
            this.int16Field = int16Field;
            this.uint16Field = uint16Field;
            this.int32Field = int32Field;
            this.uint32Field = uint32Field;
            this.int64Field = int64Field;
            this.uint64Field = uint64Field;
            this.floatField = floatField;
            this.doubleField = doubleField;
            this.stringField = stringField;
            this.booleanField = booleanField;
            this.bytesField = bytesField;
            this.pointField = pointField;
        }
        public static AllTypesStructBuilder builder() {
            return new AllTypesStructBuilder();
        }
        public static class AllTypesStructBuilder {
            public byte int8Field;
            public long uint8Field;
            public short int16Field;
            public long uint16Field;
            public int int32Field;
            public long uint32Field;
            public long int64Field;
            public long uint64Field;
            public float floatField;
            public double doubleField;
            public String stringField;
            public boolean booleanField;
            public byte[] bytesField;
            public Structs.Point pointField = new Structs.Point();
            AllTypesStructBuilder() {
            }
            public AllTypesStructBuilder int8Field(byte int8Field) {
                this.int8Field = int8Field;
                return this;
            }
            public AllTypesStructBuilder uint8Field(long uint8Field) {
                this.uint8Field = uint8Field;
                return this;
            }
            public AllTypesStructBuilder int16Field(short int16Field) {
                this.int16Field = int16Field;
                return this;
            }
            public AllTypesStructBuilder uint16Field(long uint16Field) {
                this.uint16Field = uint16Field;
                return this;
            }
            public AllTypesStructBuilder int32Field(int int32Field) {
                this.int32Field = int32Field;
                return this;
            }
            public AllTypesStructBuilder uint32Field(long uint32Field) {
                this.uint32Field = uint32Field;
                return this;
            }
            public AllTypesStructBuilder int64Field(long int64Field) {
                this.int64Field = int64Field;
                return this;
            }
            public AllTypesStructBuilder uint64Field(long uint64Field) {
                this.uint64Field = uint64Field;
                return this;
            }
            public AllTypesStructBuilder floatField(float floatField) {
                this.floatField = floatField;
                return this;
            }
            public AllTypesStructBuilder doubleField(double doubleField) {
                this.doubleField = doubleField;
                return this;
            }
            public AllTypesStructBuilder stringField(String stringField) {
                this.stringField = stringField;
                return this;
            }
            public AllTypesStructBuilder booleanField(boolean booleanField) {
                this.booleanField = booleanField;
                return this;
            }
            public AllTypesStructBuilder bytesField(byte[] bytesField) {
                this.bytesField = bytesField;
                return this;
            }
            public AllTypesStructBuilder pointField(Structs.Point pointField) {
                this.pointField = pointField;
                return this;
            }
            public AllTypesStruct build() {
                return new AllTypesStruct(int8Field, uint8Field, int16Field, uint16Field, int32Field, uint32Field, int64Field, uint64Field, floatField, doubleField, stringField, booleanField, bytesField, pointField);
            }
        }
    }
    protected Structs(final long nativeHandle) {
        super(nativeHandle, new Disposer() {
            @Override
            public void disposeNative(long handle) {
                disposeNativeHandle(handle);
            }
        });
    }
    private static native void disposeNativeHandle(long nativeHandle);
    public static native Structs.Point createPoint(final double x, final double y);
    public static native Structs.Point swapPointCoordinates(final Structs.Point input);
    public static native Structs.Line createLine(final Structs.Point pointA, final Structs.Point pointB);
    public static native Structs.ColoredLine createColoredLine(final Structs.Line line, final Structs.Color color);
    public static native Structs.ColoredLine returnColoredLine(final Structs.ColoredLine input);
    public static native Structs.AllTypesStruct returnAllTypesStruct(final Structs.AllTypesStruct input);
    public static native Structs.AllTypesStruct modifyAllTypesStruct(final Structs.AllTypesStruct input);
}