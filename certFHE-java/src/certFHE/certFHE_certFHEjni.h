/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class certFHE_certFHEjni */

#ifndef _Included_certFHE_certFHEjni
#define _Included_certFHE_certFHEjni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     certFHE_certFHEjni
 * Method:    _setup
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_certFHE_certFHEjni__1setup__
  (JNIEnv *, jobject);

/*
 * Class:     certFHE_certFHEjni
 * Method:    _setup
 * Signature: (JJJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_certFHE_certFHEjni__1setup__JJJ
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     certFHE_certFHEjni
 * Method:    _multiply
 * Signature: (LcertFHE/internalCiphertext;LcertFHE/internalCiphertext;JJJLcertFHE/internalCiphertext;)V
 */
JNIEXPORT void JNICALL Java_certFHE_certFHEjni__1multiply
  (JNIEnv *, jobject, jobject, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     certFHE_certFHEjni
 * Method:    _add
 * Signature: (LcertFHE/internalCiphertext;LcertFHE/internalCiphertext;LcertFHE/internalCiphertext;)V
 */
JNIEXPORT void JNICALL Java_certFHE_certFHEjni__1add
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     certFHE_certFHEjni
 * Method:    _encrypt
 * Signature: (BLcertFHE/internalCiphertext;JJJ[B)V
 */
JNIEXPORT void JNICALL Java_certFHE_certFHEjni__1encrypt
  (JNIEnv *, jobject, jbyte, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     certFHE_certFHEjni
 * Method:    _decrypt
 * Signature: (LcertFHE/internalCiphertext;JJJ[B)B
 */
JNIEXPORT jbyte JNICALL Java_certFHE_certFHEjni__1decrypt
  (JNIEnv *, jobject, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     certFHE_certFHEjni
 * Method:    generatePermutation
 * Signature: (JJJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_certFHE_certFHEjni_generatePermutation
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     certFHE_certFHEjni
 * Method:    applyPermutationOverCiphertext
 * Signature: (JJJ[JLcertFHE/internalCiphertext;LcertFHE/internalCiphertext;)V
 */
JNIEXPORT void JNICALL Java_certFHE_certFHEjni_applyPermutationOverCiphertext
  (JNIEnv *, jobject, jlong, jlong, jlong, jlongArray, jobject, jobject);

/*
 * Class:     certFHE_certFHEjni
 * Method:    applyPermutationOverKey
 * Signature: (JJJ[J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_certFHE_certFHEjni_applyPermutationOverKey
  (JNIEnv *, jobject, jlong, jlong, jlong, jlongArray, jbyteArray);

/*
 * Class:     certFHE_certFHEjni
 * Method:    combinePermutations
 * Signature: (JJJ[J[J)[J
 */
JNIEXPORT jlongArray JNICALL Java_certFHE_certFHEjni_combinePermutations
  (JNIEnv *, jobject, jlong, jlong, jlong, jlongArray, jlongArray);

/*
 * Class:     certFHE_certFHEjni
 * Method:    inverseOfPermutation
 * Signature: (JJJ[J)[J
 */
JNIEXPORT jlongArray JNICALL Java_certFHE_certFHEjni_inverseOfPermutation
  (JNIEnv *, jobject, jlong, jlong, jlong, jlongArray);

#ifdef __cplusplus
}
#endif
#endif
