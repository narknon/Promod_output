#pragma once
#include "CoreMinimal.h"
#include "ENUILayerBP.generated.h"

UENUM(BlueprintType)
enum class ENUILayerBP : uint8 {
    HUDWorld,
    HUDScreenEffects,
    HUDCrosshair,
    HUDOverlays,
    NUIDefault,
    GameMenu,
    SystemMenu,
};

