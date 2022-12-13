#pragma once
#include "CoreMinimal.h"
#include "ESlotType.generated.h"

UENUM(BlueprintType)
enum class ESlotType : uint8 {
    Primary,
    Secondary,
    Melee,
    Item,
    Special,
};

