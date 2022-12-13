#pragma once
#include "CoreMinimal.h"
#include "ESettingSection.generated.h"

UENUM(BlueprintType)
enum class ESettingSection : uint8 {
    ESS_GENERAL,
    ESS_XBOXCONTROLS,
    ESS_PCCONTROLS,
    ESS_VIDEO,
    ESS_AUDIO,
    ESS_MAX UMETA(Hidden),
};

