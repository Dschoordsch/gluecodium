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

#include "CppProxyBase.h"
#include "JniBase.h"
#include <pthread.h>

namespace
{

static pthread_key_t s_thread_key;

JNIEnv*
attach_current_thread( )
{
    JNIEnv* jniEnv;
    JavaVM* jvm = here::internal::jni::get_java_vm();
    int envState = jvm->GetEnv( reinterpret_cast< void** >( &jniEnv ), JNI_VERSION_1_6 );
    if ( envState == JNI_EDETACHED )
    {
#ifdef __ANDROID__
        jvm->AttachCurrentThread( &jniEnv, nullptr );
#else  // ifdef __ANDROID__
        jvm->AttachCurrentThread( reinterpret_cast< void** >( &jniEnv ), nullptr );
#endif // ifdef __ANDROID__
    }

    return jniEnv;
}

void
detach_current_thread( void* )
{
    here::internal::jni::get_java_vm()->DetachCurrentThread( );
}

inline void
callJavaMethodVaList( JNIEnv* jniEnv, jobject jObj, jmethodID jmid, va_list iParams )
{
    jniEnv->CallVoidMethodV( jObj, jmid, iParams );
}

void
make_key_once()
{
    pthread_key_create(&s_thread_key, NULL);
}

} // namespace


namespace here
{
namespace internal
{

CppProxyBase::ProxyCache CppProxyBase::sProxyCache { };
::std::mutex CppProxyBase::sCacheMutex { };

void
CppProxyBase::callJavaMethod( const ::std::string& methodName,
                              const ::std::string& jniSignature,
                              JNIEnv* jniEnv,
                              ... ) const
{
    jclass jClass = jniEnv->GetObjectClass( jGlobalRef );
    jmethodID jmethodId = jniEnv->GetMethodID( jClass, methodName.c_str( ), jniSignature.c_str( ) );
    va_list vaList;
    va_start( vaList, jniEnv );
    ::callJavaMethodVaList( jniEnv, jGlobalRef, jmethodId, vaList );
    va_end( vaList );
}

JNIEnv*
CppProxyBase::getJniEnvironment( )
{
    // Add cleanup callback to current thread when called the first time
    static pthread_once_t s_key_once = PTHREAD_ONCE_INIT;
    pthread_once(&s_key_once, make_key_once);

    JNIEnv* env;
    if ( ( env = static_cast<JNIEnv*>( pthread_getspecific( s_thread_key ) ) ) == nullptr )
    {
        env = attach_current_thread( );
        pthread_setspecific( s_thread_key, env );
    }

    return env;
}

CppProxyBase::CppProxyBase( JNIEnv* jenv, jobject jGlobalRef, jint jHashCode )
    : jGlobalRef( jGlobalRef )
    , jHashCode( jHashCode )
{
}

CppProxyBase::~CppProxyBase( )
{
    JNIEnv* jniEnv = getJniEnvironment( );

    {
        ::std::lock_guard< std::mutex > lock( sCacheMutex );
        sProxyCache.erase( ProxyCacheKey { jniEnv, jGlobalRef, jHashCode } );
    }

    jniEnv->DeleteGlobalRef( jGlobalRef );
}

bool
CppProxyBase::ProxyCacheKey::operator==( const CppProxyBase::ProxyCacheKey& other ) const
{
    return jHashCode == other.jHashCode &&
           jniEnv->IsSameObject( jObject, other.jObject );
}

jint
CppProxyBase::getHashCode( JNIEnv* jniEnv, jobject jObj )
{
    jclass jClass = jniEnv->FindClass( "java/lang/System" );
    jmethodID jMethodId =
        jniEnv->GetStaticMethodID( jClass, "identityHashCode", "(Ljava/lang/Object;)I" );

    return jniEnv->CallStaticIntMethod( jClass, jMethodId, jObj );
}
} // namespace internal
} // namespace here
