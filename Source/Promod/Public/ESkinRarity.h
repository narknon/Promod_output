#pragma once
#include "CoreMinimal.h"
#include "ESkinRarity.generated.h"

UENUM(BlueprintType)
enum class ESkinRarity : uint8 {
    Stock,
    Common,
    Uncommon,
    Rare,
    Ultra_Rare,
    Legendary,
    Unique,
};

