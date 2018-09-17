// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from helloworld.djinni

#include "NativeHelloWorld.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeHelloWorld::NativeHelloWorld() : ::djinni::JniInterface<::helloworld::HelloWorld, NativeHelloWorld>("com/mycompany/helloworld/HelloWorld$CppProxy") {}

NativeHelloWorld::~NativeHelloWorld() = default;


CJNIEXPORT void JNICALL Java_com_mycompany_helloworld_HelloWorld_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::helloworld::HelloWorld>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_mycompany_helloworld_HelloWorld_00024CppProxy_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::helloworld::HelloWorld::create();
        return ::djinni::release(::djinni_generated::NativeHelloWorld::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_mycompany_helloworld_HelloWorld_00024CppProxy_native_1getHelloWorld(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::helloworld::HelloWorld>(nativeRef);
        auto r = ref->get_hello_world();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_mycompany_helloworld_HelloWorld_00024CppProxy_native_1getName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::helloworld::HelloWorld>(nativeRef);
        auto r = ref->get_name();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_mycompany_helloworld_HelloWorld_00024CppProxy_native_1setName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_name)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::helloworld::HelloWorld>(nativeRef);
        ref->set_name(::djinni::String::toCpp(jniEnv, j_name));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
