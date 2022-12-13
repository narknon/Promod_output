#pragma once
#include "CoreMinimal.h"
#include "ESMTransactionType.generated.h"

UENUM(BlueprintType)
enum class ESMTransactionType : uint8 {
    SM_Transition,
    SM_State,
    SM_MAX UMETA(Hidden),
};

