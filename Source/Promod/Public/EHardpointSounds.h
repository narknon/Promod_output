#pragma once
#include "CoreMinimal.h"
#include "EHardpointSounds.generated.h"

UENUM(BlueprintType)
enum class EHardpointSounds : uint8 {
    FIRST_SPAWN,
    POINT_UNLOCKED,
    CAPTURE_ENEMY,
    CAPTURE_FRIENDLY,
    CONTESTED,
    MOVING_SHORTLY,
    CAPTURE_NEUTRAL,
    NONE,
};

