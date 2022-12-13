#pragma once
#include "CoreMinimal.h"
#include "ELoadoutSlotType.generated.h"

UENUM(BlueprintType)
enum class ELoadoutSlotType : uint8 {
    Empty,
    Used,
    Fixed,
    Unavailable,
};

