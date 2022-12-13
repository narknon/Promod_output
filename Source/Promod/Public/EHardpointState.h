#pragma once
#include "CoreMinimal.h"
#include "EHardpointState.generated.h"

UENUM(BlueprintType)
enum class EHardpointState : uint8 {
    NEUTRAL,
    CONTESTED,
    CAPTURED,
    LOCKED,
    NEXT,
};

