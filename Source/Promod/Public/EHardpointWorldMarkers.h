#pragma once
#include "CoreMinimal.h"
#include "EHardpointWorldMarkers.generated.h"

UENUM(BlueprintType)
enum class EHardpointWorldMarkers : uint8 {
    LOCKED,
    CAPTURE_NEUTRAL,
    CAPTURE_ENEMY,
    DEFEND,
    CONTESTED,
    NEXT,
    NONE,
};

