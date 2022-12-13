#pragma once
#include "CoreMinimal.h"
#include "ENationType.generated.h"

UENUM(BlueprintType)
enum class ENationType : uint8 {
    Nation_FRIENDLY,
    Nation_ENEMY,
    Nation_Invalid,
    Nation_MAX UMETA(Hidden),
};

