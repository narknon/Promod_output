#pragma once
#include "CoreMinimal.h"
#include "EVaultType.generated.h"

UENUM(BlueprintType)
enum class EVaultType : uint8 {
    VT_None,
    VT_Onto,
    VT_Over,
    VT_MAX UMETA(Hidden),
};

