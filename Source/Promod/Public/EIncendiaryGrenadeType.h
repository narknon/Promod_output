#pragma once
#include "CoreMinimal.h"
#include "EIncendiaryGrenadeType.generated.h"

UENUM(BlueprintType)
enum class EIncendiaryGrenadeType : uint8 {
    IGT_Incendiary,
    IGT_MAX UMETA(Hidden),
};

