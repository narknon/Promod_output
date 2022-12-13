#pragma once
#include "CoreMinimal.h"
#include "EPromodCustomMovementType.generated.h"

UENUM(BlueprintType)
enum EPromodCustomMovementType {
    CUSTOM_MOVEMENT_LADDER,
    CUSTOM_MOVEMENT_VAULT,
    CUSTOM_MOVEMENT_MAX UMETA(Hidden),
};

