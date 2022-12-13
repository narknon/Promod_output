#pragma once
#include "CoreMinimal.h"
#include "EStanceType.generated.h"

UENUM(BlueprintType)
enum class EStanceType : uint8 {
    ST_Standing,
    ST_Crouching,
    ST_Prone,
    ST_MAX UMETA(Hidden),
};

