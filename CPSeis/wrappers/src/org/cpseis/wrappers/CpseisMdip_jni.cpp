//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisMdip.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisMdip_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisMdip *module = new CpseisMdip();
    return (jlong)module;
  }
}