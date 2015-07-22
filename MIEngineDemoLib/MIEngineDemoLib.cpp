#include <string.h>
#include <jni.h>

#include "MIEngineDemoLib.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "MIEngineDemoLib", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "MIEngineDemoLib", __VA_ARGS__))

extern "C" {
    void Java_com_MIEngineDemo_MIEngineDemo_breakpoint(JNIEnv* env, jobject thiz)
    {
        int i = 0;
    }

    void Java_com_MIEngineDemo_MIEngineDemo_stepping(JNIEnv* env, jobject thiz)
    {
        int i = 0;
    }

    void Java_com_MIEngineDemo_MIEngineDemo_expressionEvaluation(JNIEnv* env, jobject thiz)
    {
        int i = 0;
    }

    void Java_com_MIEngineDemo_MIEngineDemo_exception(JNIEnv* env, jobject thiz)
    {
        int i = 0; 
    }
}
