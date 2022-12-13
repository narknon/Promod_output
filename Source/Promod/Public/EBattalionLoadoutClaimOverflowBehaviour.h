#pragma once
#include "CoreMinimal.h"
#include "EBattalionLoadoutClaimOverflowBehaviour.generated.h"

UENUM(BlueprintType)
enum class EBattalionLoadoutClaimOverflowBehaviour : uint8 {
    Deny,
    Clamp,
};

