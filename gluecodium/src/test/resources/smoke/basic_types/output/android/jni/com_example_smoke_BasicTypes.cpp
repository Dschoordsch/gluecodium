/*
 *
 */
#include "com_example_smoke_BasicTypes.h"
#include "com_example_smoke_BasicTypes__Conversion.h"
#include "ArrayConversionUtils.h"
#include "JniClassCache.h"
#include "JniReference.h"
extern "C" {
jstring
Java_com_example_smoke_BasicTypes_stringFunction(JNIEnv* _jenv, jobject _jinstance, jstring jinput)
{
    ::std::string input = ::gluecodium::jni::convert_from_jni(_jenv,
            ::gluecodium::jni::make_non_releasing_ref(jinput),
            (::std::string*)nullptr);
    auto result = ::smoke::BasicTypes::string_function(input);
    return ::gluecodium::jni::convert_to_jni(_jenv, result).release();
}
jboolean
Java_com_example_smoke_BasicTypes_boolFunction(JNIEnv* _jenv, jobject _jinstance, jboolean jinput)
{
    bool input = jinput;
    auto result = ::smoke::BasicTypes::bool_function(input);
    return result;
}
jfloat
Java_com_example_smoke_BasicTypes_floatFunction(JNIEnv* _jenv, jobject _jinstance, jfloat jinput)
{
    float input = jinput;
    auto result = ::smoke::BasicTypes::float_function(input);
    return result;
}
jdouble
Java_com_example_smoke_BasicTypes_doubleFunction(JNIEnv* _jenv, jobject _jinstance, jdouble jinput)
{
    double input = jinput;
    auto result = ::smoke::BasicTypes::double_function(input);
    return result;
}
jbyte
Java_com_example_smoke_BasicTypes_byteFunction(JNIEnv* _jenv, jobject _jinstance, jbyte jinput)
{
    int8_t input = jinput;
    auto result = ::smoke::BasicTypes::byte_function(input);
    return result;
}
jshort
Java_com_example_smoke_BasicTypes_shortFunction(JNIEnv* _jenv, jobject _jinstance, jshort jinput)
{
    int16_t input = jinput;
    auto result = ::smoke::BasicTypes::short_function(input);
    return result;
}
jint
Java_com_example_smoke_BasicTypes_intFunction(JNIEnv* _jenv, jobject _jinstance, jint jinput)
{
    int32_t input = jinput;
    auto result = ::smoke::BasicTypes::int_function(input);
    return result;
}
jlong
Java_com_example_smoke_BasicTypes_longFunction(JNIEnv* _jenv, jobject _jinstance, jlong jinput)
{
    int64_t input = jinput;
    auto result = ::smoke::BasicTypes::long_function(input);
    return result;
}
jshort
Java_com_example_smoke_BasicTypes_ubyteFunction(JNIEnv* _jenv, jobject _jinstance, jshort jinput)
{
    uint8_t input = jinput;
    auto result = ::smoke::BasicTypes::ubyte_function(input);
    return result;
}
jint
Java_com_example_smoke_BasicTypes_ushortFunction(JNIEnv* _jenv, jobject _jinstance, jint jinput)
{
    uint16_t input = jinput;
    auto result = ::smoke::BasicTypes::ushort_function(input);
    return result;
}
jlong
Java_com_example_smoke_BasicTypes_uintFunction(JNIEnv* _jenv, jobject _jinstance, jlong jinput)
{
    uint32_t input = jinput;
    auto result = ::smoke::BasicTypes::uint_function(input);
    return result;
}
jlong
Java_com_example_smoke_BasicTypes_ulongFunction(JNIEnv* _jenv, jobject _jinstance, jlong jinput)
{
    uint64_t input = jinput;
    auto result = ::smoke::BasicTypes::ulong_function(input);
    return result;
}
JNIEXPORT void JNICALL
Java_com_example_smoke_BasicTypes_disposeNativeHandle(JNIEnv* _jenv, jobject _jinstance, jlong _jpointerRef)
{
    delete reinterpret_cast<std::shared_ptr<::smoke::BasicTypes>*> (_jpointerRef);
}
}
