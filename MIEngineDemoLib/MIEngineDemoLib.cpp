#include <string.h>
#include <jni.h>

#include "MIEngineDemoLib.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "MIEngineDemoLib", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "MIEngineDemoLib", __VA_ARGS__))

extern "C" {
    jstring Java_com_MIEngineDemo_MIEngineDemo_helloWorld(JNIEnv* env, jobject thiz)
    {
        return env->NewStringUTF("Hello, World!");
    }
}
