#pragma once
#include "CoreMinimal.h"
#include "ECardinalDirection.generated.h"

UENUM(BlueprintType)
enum class ECardinalDirection : uint8 {
    CD_North,
    CD_South,
    CD_East,
    CD_West,
    CD_MAX UMETA(Hidden),
};

