#pragma once
#include "CoreMinimal.h"
#include "EDOMZoneState.generated.h"

UENUM(BlueprintType)
enum class EDOMZoneState : uint8 {
    DOMZoneState_Neutral,
    DOMZoneState_Captured,
    DOMZoneState_Losing,
    DOMZoneState_Lost,
    DOMZoneState_MAX UMETA(Hidden),
};

