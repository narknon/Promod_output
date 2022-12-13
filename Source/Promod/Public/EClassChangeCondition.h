#pragma once
#include "CoreMinimal.h"
#include "EClassChangeCondition.generated.h"

UENUM(BlueprintType)
enum class EClassChangeCondition : uint8 {
    Cond_Always,
    Cond_Preround,
    Cond_MAX UMETA(Hidden),
};

