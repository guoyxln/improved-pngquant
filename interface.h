/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_s24_image_improved_pngquant_Pngquant */

#ifndef _Included_com_s24_image_improved_pngquant_Pngquant
#define _Included_com_s24_image_improved_pngquant_Pngquant
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_s24_image_improved_pngquant_Pngquant
 * Method:    compress
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_s24_image_improved_pngquant_Pngquant_compress
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_s24_image_improved_pngquant_Pngquant
 * Method:    verbose
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_s24_image_improved_pngquant_Pngquant_verbose
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_s24_image_improved_pngquant_Pngquant
 * Method:    quality
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_s24_image_improved_pngquant_Pngquant_quality
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif