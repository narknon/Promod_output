#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.generated.h"

UENUM(BlueprintType)
enum class EInteractionType : uint8 {
    EIT_HOLD,
    EIT_PRESS,
    EIT_MAX UMETA(Hidden),
};

