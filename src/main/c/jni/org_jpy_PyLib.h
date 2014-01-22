/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jpy_PyLib */

#ifndef _Included_org_jpy_PyLib
#define _Included_org_jpy_PyLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jpy_PyLib
 * Method:    isInterpreterInitialized
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jpy_PyLib_isInterpreterInitialized
  (JNIEnv *, jclass);

/*
 * Class:     org_jpy_PyLib
 * Method:    initializeInterpreter
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jpy_PyLib_initializeInterpreter
  (JNIEnv *, jclass);

/*
 * Class:     org_jpy_PyLib
 * Method:    destroyInterpreter
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jpy_PyLib_destroyInterpreter
  (JNIEnv *, jclass);

/*
 * Class:     org_jpy_PyLib
 * Method:    execScript
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_jpy_PyLib_execScript
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jpy_PyLib
 * Method:    decref
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jpy_PyLib_decref
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jpy_PyLib
 * Method:    getIntValue
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jpy_PyLib_getIntValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jpy_PyLib
 * Method:    getDoubleValue
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_jpy_PyLib_getDoubleValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jpy_PyLib
 * Method:    getStringValue
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jpy_PyLib_getStringValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jpy_PyLib
 * Method:    getObjectValue
 * Signature: (J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_jpy_PyLib_getObjectValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jpy_PyLib
 * Method:    importModule
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jpy_PyLib_importModule
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jpy_PyLib
 * Method:    getAttributeObject
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jpy_PyLib_getAttributeObject
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jpy_PyLib
 * Method:    getAttributeValue
 * Signature: (JLjava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_jpy_PyLib_getAttributeValue
  (JNIEnv *, jclass, jlong, jstring, jclass);

/*
 * Class:     org_jpy_PyLib
 * Method:    setAttributeValue
 * Signature: (JLjava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_org_jpy_PyLib_setAttributeValue
  (JNIEnv *, jclass, jlong, jstring, jobject, jclass);

/*
 * Class:     org_jpy_PyLib
 * Method:    callAndReturnObject
 * Signature: (JZLjava/lang/String;I[Ljava/lang/Object;[Ljava/lang/Class;)J
 */
JNIEXPORT jlong JNICALL Java_org_jpy_PyLib_callAndReturnObject
  (JNIEnv *, jclass, jlong, jboolean, jstring, jint, jobjectArray, jobjectArray);

/*
 * Class:     org_jpy_PyLib
 * Method:    callAndReturnValue
 * Signature: (JZLjava/lang/String;I[Ljava/lang/Object;[Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_jpy_PyLib_callAndReturnValue
  (JNIEnv *, jclass, jlong, jboolean, jstring, jint, jobjectArray, jobjectArray, jclass);

#ifdef __cplusplus
}
#endif
#endif
