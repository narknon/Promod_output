#pragma once
#include "CoreMinimal.h"
#include "ELastProneKeyAction.generated.h"

UENUM(BlueprintType)
enum class ELastProneKeyAction : uint8 {
    LPKA_WASD,
    LPKA_Target,
    LPKA_MAX UMETA(Hidden),
};

