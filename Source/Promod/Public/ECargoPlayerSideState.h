#pragma once
#include "CoreMinimal.h"
#include "ECargoPlayerSideState.generated.h"

UENUM(BlueprintType)
enum class ECargoPlayerSideState : uint8 {
    ATTACKING,
    DEFENDING,
};

