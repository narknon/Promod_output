#pragma once
#include "CoreMinimal.h"
#include "EMonorailWorldMarkerStates.generated.h"

UENUM(BlueprintType)
enum class EMonorailWorldMarkerStates : uint8 {
    ATTACK_ESCORT,
    DISABLING_ESCORT,
    REPAIRING_DISABLED,
    NONE,
};

