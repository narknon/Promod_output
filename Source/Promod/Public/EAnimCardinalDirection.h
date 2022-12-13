#pragma once
#include "CoreMinimal.h"
#include "EAnimCardinalDirection.generated.h"

UENUM(BlueprintType)
enum class EAnimCardinalDirection : uint8 {
    CD_North,
    CD_South,
    CD_East,
    CD_West,
    CD_MAX UMETA(Hidden),
};

