//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisDist.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisDist_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisDist *module = new CpseisDist();
    return (jlong)module;
  }
}
