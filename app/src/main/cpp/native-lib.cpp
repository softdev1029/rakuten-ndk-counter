#include <jni.h>
#include <string>

extern "C" JNIEXPORT jint

JNICALL
Java_test_rakuten_ndkcounter_MainActivity_increaseNumberByJNI(
        JNIEnv *env,
        jobject /* this */,
        jint number) {
    number++;
    return number;
}