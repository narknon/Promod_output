#pragma once
#include "CoreMinimal.h"
#include "ESettingType.generated.h"

UENUM(BlueprintType)
enum class ESettingType : uint8 {
    EST_LEFTRIGHT,
    EST_SLIDER,
    EST_INPUTBINDING,
    EST_COMBO,
    EST_MAX UMETA(Hidden),
};

