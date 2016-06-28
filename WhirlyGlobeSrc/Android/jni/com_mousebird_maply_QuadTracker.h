/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_QuadTracker */

#ifndef _Included_com_mousebird_maply_QuadTracker
#define _Included_com_mousebird_maply_QuadTracker
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_QuadTracker
 * Method:    queryTilesNative
 * Signature: (I[D[I[D[D)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_QuadTracker_queryTilesNative
  (JNIEnv *, jobject, jint, jdoubleArray, jintArray, jdoubleArray, jdoubleArray);

/*
 * Class:     com_mousebird_maply_QuadTracker
 * Method:    addTile
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_QuadTracker_addTile
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_mousebird_maply_QuadTracker
 * Method:    removeTile
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_QuadTracker_removeTile
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_mousebird_maply_QuadTracker
 * Method:    getMinLevel
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_QuadTracker_getMinLevel
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_QuadTracker
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_QuadTracker_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_QuadTracker
 * Method:    initialise
 * Signature: (Lcom/mousebird/maply/GlobeView;Lcom/mousebird/maply/MaplyRenderer;Lcom/mousebird/maply/CoordSystemDisplayAdapter;Lcom/mousebird/maply/CoordSystem;Lcom/mousebird/maply/Point2d;Lcom/mousebird/maply/Point2d;I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_QuadTracker_initialise
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject, jobject, jobject, jint);

/*
 * Class:     com_mousebird_maply_QuadTracker
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_QuadTracker_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif