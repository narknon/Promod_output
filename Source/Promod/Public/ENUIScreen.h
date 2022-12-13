#pragma once
#include "CoreMinimal.h"
#include "ENUIScreen.generated.h"

UENUM(BlueprintType)
enum class ENUIScreen : uint8 {
    NUI_MAIN,
    NUI_PLAY,
    NUI_TRAINING,
    NUI_BACKG,
    NUI_HEADER,
    NUI_SETTING,
    NUI_BATTLERANK,
    NUI_MAP_SELECT,
    NUI_TRAINING_VIDEO,
    NUI_TRAINING_VIDEO_PLAYING,
    NUI_VS_BOTS,
    NUI_PARTY,
    NUI_PREMIUMSALES,
    NUI_CREDITS,
    NUI_PREVIOUS_SCREEN,
    NUI_MAX UMETA(Hidden),
};

