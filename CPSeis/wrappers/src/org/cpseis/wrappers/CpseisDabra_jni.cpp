//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisDabra.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisDabra_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisDabra *module = new CpseisDabra();
    return (jlong)module;
  }
}