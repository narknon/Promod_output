#pragma once
#include "CoreMinimal.h"
#include "EIconBackgroundInteraction.generated.h"

UENUM(BlueprintType)
enum class EIconBackgroundInteraction : uint8 {
    AlwaysRender,
    OnlyRenderInSameVolume,
    OnlyRenderOnSameFloor,
    OnlyRenderInPriorityVolume,
    OnlyRenderOnPriorityFloor,
};

