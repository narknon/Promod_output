#pragma once
#include "CoreMinimal.h"
#include "EGameActionsAllowed.generated.h"

UENUM(BlueprintType)
enum class EGameActionsAllowed : uint8 {
    GAE_ALL,
    GAE_SWAP,
    GAE_NONE,
    GAE_LOOK,
    GAE_MAX UMETA(Hidden),
};

