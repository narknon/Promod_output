#pragma once
#include "CoreMinimal.h"
#include "EIconFogInteraction.generated.h"

UENUM(BlueprintType)
enum class EIconFogInteraction : uint8 {
    OnlyRenderWhenRevealing,
    OnlyRenderWhenExplored,
    AlwaysRenderUnderFog,
    AlwaysRenderAboveFog,
};

