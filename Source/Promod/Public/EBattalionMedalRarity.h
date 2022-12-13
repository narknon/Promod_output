#pragma once
#include "CoreMinimal.h"
#include "EBattalionMedalRarity.generated.h"

UENUM(BlueprintType)
enum class EBattalionMedalRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    UltraRare,
    Godlike,
};

