LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkAudioInputSource
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkAudioInputSource.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkMemoryMgr
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkMemoryMgr.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkMotionGeneratorSource
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkMotionGeneratorSource.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkMotionSink
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkMotionSink.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkMotionSourceSource
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkMotionSourceSource.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkMusicEngine
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkMusicEngine.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkOpusDecoder
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkOpusDecoder.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkSoundEngine
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkSoundEngine.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkSpatialAudio
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkSpatialAudio.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkStreamMgr
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkStreamMgr.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := AkVorbisDecoder
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libAkVorbisDecoder.a
include $(PREBUILT_STATIC_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE    := zip
LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libzip.a
include $(PREBUILT_STATIC_LIBRARY)

ifeq ($(PM5_CONFIG),debug_android_armeabi-v7a)
  include $(CLEAR_VARS)
  LOCAL_MODULE    := CommunicationCentral
  LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libCommunicationCentral.a
  include $(PREBUILT_STATIC_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_x86)
  include $(CLEAR_VARS)
  LOCAL_MODULE    := CommunicationCentral
  LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libCommunicationCentral.a
  include $(PREBUILT_STATIC_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_arm64-v8a)
  include $(CLEAR_VARS)
  LOCAL_MODULE    := CommunicationCentral
  LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libCommunicationCentral.a
  include $(PREBUILT_STATIC_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_x86_64)
  include $(CLEAR_VARS)
  LOCAL_MODULE    := CommunicationCentral
  LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libCommunicationCentral.a
  include $(PREBUILT_STATIC_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_armeabi-v7a)
  include $(CLEAR_VARS)
  LOCAL_MODULE    := CommunicationCentral
  LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libCommunicationCentral.a
  include $(PREBUILT_STATIC_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_x86)
  include $(CLEAR_VARS)
  LOCAL_MODULE    := CommunicationCentral
  LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libCommunicationCentral.a
  include $(PREBUILT_STATIC_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_arm64-v8a)
  include $(CLEAR_VARS)
  LOCAL_MODULE    := CommunicationCentral
  LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libCommunicationCentral.a
  include $(PREBUILT_STATIC_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_x86_64)
  include $(CLEAR_VARS)
  LOCAL_MODULE    := CommunicationCentral
  LOCAL_SRC_FILES := ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib/libCommunicationCentral.a
  include $(PREBUILT_STATIC_LIBRARY)
endif

include $(CLEAR_VARS)
LOCAL_MODULE := IntegrationDemoMotion
LOCAL_MODULE_FILENAME := libIntegrationDemoMotion

LOCAL_SRC_FILES := $(NDKROOT)/sources/android/native_app_glue/android_native_app_glue.c ../../SoundEngine/Android/AkDefaultIOHookBlocking.cpp ../../SoundEngine/Android/AkDefaultIOHookDeferred.cpp ../../SoundEngine/Android/AkFileHelpers.cpp ../../SoundEngine/Common/AkFileLocationBase.cpp ../../SoundEngine/Common/AkFilePackage.cpp ../../SoundEngine/Common/AkFilePackageLUT.cpp ../../SoundEngine/Common/AkGeneratedSoundBanksResolver.cpp ../../SoundEngine/Common/AkJobWorkerMgr.cpp ../../SoundEngine/Common/AkPlatformProfilerHookStubs.cpp ../Common/Drawing.cpp ../Common/Helpers.cpp ../Common/IntegrationDemo.cpp ../Common/PlatformHooks.cpp ../Common/SoundInputBase.cpp ../Common/UniversalInput.cpp ../Common/stdafx.cpp ../FreetypeRenderer/FreetypeGraphicRenderer.cpp ../MenuSystem/ButtonControl.cpp ../MenuSystem/Control.cpp ../MenuSystem/LabelControl.cpp ../MenuSystem/Menu.cpp ../MenuSystem/MessagePage.cpp ../MenuSystem/MovableChip.cpp ../MenuSystem/MultiplayerPage.cpp ../MenuSystem/NumericControl.cpp ../MenuSystem/Page.cpp ../MenuSystem/ToggleControl.cpp ../Motion/BaseMenuPage.cpp ../Motion/DemoMotion.cpp AndroidUtils.cpp Drawing.cpp InputMgr.cpp Platform.cpp jni/main.cpp

ifeq ($(PM5_CONFIG),debug_android_armeabi-v7a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := CommunicationCentral zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Debug/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -D_DEBUG -DMOTIONDEMO -mfloat-abi=softfp -mfpu=neon -fno-omit-frame-pointer -g
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_x86)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := CommunicationCentral zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Debug/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -D_DEBUG -DMOTIONDEMO -fno-omit-frame-pointer -g
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_arm64-v8a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := CommunicationCentral zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Debug/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -D_DEBUG -DMOTIONDEMO -fno-omit-frame-pointer -g
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),debug_android_x86_64)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := CommunicationCentral zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Debug/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -D_DEBUG -DMOTIONDEMO -fno-omit-frame-pointer -g
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_armeabi-v7a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := CommunicationCentral zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Profile/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -DNDEBUG -DMOTIONDEMO -mfloat-abi=softfp -mfpu=neon -ffunction-sections -fdata-sections -fno-omit-frame-pointer -g -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_x86)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := CommunicationCentral zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Profile/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -DNDEBUG -DMOTIONDEMO -ffunction-sections -fdata-sections -fno-omit-frame-pointer -g -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_arm64-v8a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := CommunicationCentral zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Profile/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -DNDEBUG -DMOTIONDEMO -ffunction-sections -fdata-sections -fno-omit-frame-pointer -g -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),profile_android_x86_64)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := CommunicationCentral zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Profile/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -DNDEBUG -DMOTIONDEMO -ffunction-sections -fdata-sections -fno-omit-frame-pointer -g -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  cmd-strip :=
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),release_android_armeabi-v7a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Release/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -DNDEBUG -DAK_OPTIMIZED -DMOTIONDEMO -mfloat-abi=softfp -mfpu=neon -ffunction-sections -fdata-sections -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),release_android_x86)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Release/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -DNDEBUG -DAK_OPTIMIZED -DMOTIONDEMO -ffunction-sections -fdata-sections -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),release_android_arm64-v8a)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Release/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -DNDEBUG -DAK_OPTIMIZED -DMOTIONDEMO -ffunction-sections -fdata-sections -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(PM5_CONFIG),release_android_x86_64)
  LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../SoundEngine/Android/libzip/lib $(NDKROOT)/sources/android/native_app_glue $(LOCAL_PATH)/. $(LOCAL_PATH)/../Common $(LOCAL_PATH)/../FreetypeRenderer $(LOCAL_PATH)/../FreetypeRenderer/Assets $(LOCAL_PATH)/../MenuSystem $(LOCAL_PATH)/../../SoundEngine/Android $(LOCAL_PATH)/../../SoundEngine/Common $(LOCAL_PATH)/../../../include $(LOCAL_PATH)/../Motion $(LOCAL_PATH)/../Motion/WwiseProject/GeneratedSoundBanks
  LOCAL_CPP_FEATURES := exceptions
  LOCAL_STATIC_LIBRARIES := zip AkAudioInputSource AkMotionSink AkMotionGeneratorSource AkMotionSourceSource AkMemoryMgr AkMusicEngine AkSoundEngine AkSpatialAudio AkStreamMgr AkVorbisDecoder AkOpusDecoder
  LOCAL_LDLIBS := $(addprefix -L, ../../../Android_$(ArchAbi)/$(Configuration)/lib ../../../Android_$(TARGET_ARCH_ABI)/Release/lib ../../../Android_$(APP_ABI)/$(CONFIGURATION)/lib) $(addprefix -l, log OpenSLES android EGL GLESv1_CM z)
  LOCAL_LDFLAGS := -Wl,--as-needed
  LOCAL_CFLAGS := -Werror -DNDEBUG -DAK_OPTIMIZED -DMOTIONDEMO -ffunction-sections -fdata-sections -O3
  LOCAL_CPPFLAGS := -Wno-conversion-null -Wno-deprecated-declarations -fvisibility=hidden -fno-rtti -fno-exceptions -DLUA_USE_POSIX -std=c++14
  LOCAL_CONLYFLAGS := -std=c11
  include $(BUILD_SHARED_LIBRARY)
endif

$(call import-module,android/native_app_glue)

all: $(LOCAL_INSTALLED)