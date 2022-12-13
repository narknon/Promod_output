#pragma once
#include "CoreMinimal.h"
#include "ELastKeyAction.generated.h"

UENUM(BlueprintType)
enum class ELastKeyAction : uint8 {
    LKA_Sprint,
    LKA_Target,
    LKA_MAX UMETA(Hidden),
};

