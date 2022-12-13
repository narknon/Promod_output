#pragma once
#include "CoreMinimal.h"
#include "ECargoWorldMarkers.generated.h"

UENUM(BlueprintType)
enum class ECargoWorldMarkers : uint8 {
    ATTACK,
    ESCORT,
    DEFEND,
    CAPTURE,
    DISABLE_PROGRESS,
    DISABLED,
    REPAIR_PROGRESS,
    REPAIR,
    CONTESTED,
    CHECKPOINT,
    NONE,
};

