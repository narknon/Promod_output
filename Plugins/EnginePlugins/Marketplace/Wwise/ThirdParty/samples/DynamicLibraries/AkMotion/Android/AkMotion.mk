LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkMotionGeneratorSource
LOCAL_SRC_FILES := ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkMotionGeneratorSource.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkMotionSink
LOCAL_SRC_FILES := ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkMotionSink.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkMotionSourceSource
LOCAL_SRC_FILES := ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkMotionSourceSource.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := AkMotion
LOCAL_MODULE_FILENAME := libAkMotion

LOCAL_SRC_FILES := ../InitPlugins.cpp

ifeq ($(PM5_CONFIG),debug_android_armeabi-v7a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -D_DEBUG -mfloat-abi=softfp -mfpu=neon -fno-omit-frame-pointer -g
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_x86)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -D_DEBUG -fno-omit-frame-pointer -g
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_arm64-v8a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -D_DEBUG -fno-omit-frame-pointer -g
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_x86_64)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -D_DEBUG -fno-omit-frame-pointer -g
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_armeabi-v7a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -DNDEBUG -mfloat-abi=softfp -mfpu=neon -ffunction-sections -fdata-sections -fno-omit-frame-pointer -g -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_x86)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -DNDEBUG -ffunction-sections -fdata-sections -fno-omit-frame-pointer -g -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_arm64-v8a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -DNDEBUG -ffunction-sections -fdata-sections -fno-omit-frame-pointer -g -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_x86_64)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -DNDEBUG -ffunction-sections -fdata-sections -fno-omit-frame-pointer -g -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),release_android_armeabi-v7a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -DNDEBUG -DAK_OPTIMIZED -mfloat-abi=softfp -mfpu=neon -ffunction-sections -fdata-sections -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),release_android_x86)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -DNDEBUG -DAK_OPTIMIZED -ffunction-sections -fdata-sections -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),release_android_arm64-v8a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -DNDEBUG -DAK_OPTIMIZED -ffunction-sections -fdata-sections -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),release_android_x86_64)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../include
  LOCAL_STATIC_LIBRARIES := AkMotionGeneratorSource AkMotionSink AkMotionSourceSource
  LOCAL_LDLIBS := $(addprefix -L, ../../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log)
  LOCAL_LDFLAGS := -Wl,--as-needed -Wl,--export-dynamic
  LOCAL_CFLAGS := -Werror -DNDEBUG -DAK_OPTIMIZED -ffunction-sections -fdata-sections -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  include $(BUILD_SHARED_LIBRARY)
endif

$(call import-module,android/native_app_glue)

all: $(LOCAL_INSTALLED)