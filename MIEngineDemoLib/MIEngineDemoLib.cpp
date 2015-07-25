#include <string.h>
#include <jni.h>
#include <map>
#include <string>

#include "MIEngineDemoLib.h"

using namespace std;

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "MIEngineDemoLib", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "MIEngineDemoLib", __VA_ARGS__))

extern "C" {

    void stepping_2()
    {
        int i = 0;
    }

    void stepping_1() 
    {
        stepping_2();
    }

    void Java_com_MIEngineDemo_MIEngineDemo_breakpoint(JNIEnv* env, jobject thiz)
    {
        int i = 0;
    }

    void Java_com_MIEngineDemo_MIEngineDemo_stepping(JNIEnv* env, jobject thiz)
    {
        stepping_1();
    }

    void Java_com_MIEngineDemo_MIEngineDemo_expressionEvaluation(JNIEnv* env, jobject thiz)
    {
        map<int, string> nameMap;

        nameMap.insert(pair<int, string>(0, "ChuckR"));
        nameMap.insert(pair<int, string>(1, "AndreHal"));

        int i = 0;
    }

    void Java_com_MIEngineDemo_MIEngineDemo_exception(JNIEnv* env, jobject thiz)
    {
        int i = 0; 
    }
}
