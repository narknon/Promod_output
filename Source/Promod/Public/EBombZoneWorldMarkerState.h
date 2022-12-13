#pragma once
#include "CoreMinimal.h"
#include "EBombZoneWorldMarkerState.generated.h"

UENUM(BlueprintType)
enum class EBombZoneWorldMarkerState : uint8 {
    ATTACK,
    DEFEND,
    NONE,
};

