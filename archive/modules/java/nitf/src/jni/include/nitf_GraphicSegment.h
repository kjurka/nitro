/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nitf_GraphicSegment */

#ifndef _Included_nitf_GraphicSegment
#define _Included_nitf_GraphicSegment
#ifdef __cplusplus
extern "C" {
#endif
#undef nitf_GraphicSegment_INVALID_ADDRESS
#define nitf_GraphicSegment_INVALID_ADDRESS 0L
/*
 * Class:     nitf_GraphicSegment
 * Method:    getSubheader
 * Signature: ()Lnitf/GraphicSubheader;
 */
JNIEXPORT jobject JNICALL Java_nitf_GraphicSegment_getSubheader
  (JNIEnv *, jobject);

/*
 * Class:     nitf_GraphicSegment
 * Method:    getOffset
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_nitf_GraphicSegment_getOffset
  (JNIEnv *, jobject);

/*
 * Class:     nitf_GraphicSegment
 * Method:    getEnd
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_nitf_GraphicSegment_getEnd
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif