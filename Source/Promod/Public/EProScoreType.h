#pragma once
#include "CoreMinimal.h"
#include "EProScoreType.generated.h"

UENUM(BlueprintType)
enum class EProScoreType : uint8 {
    Unranked,
    Bronze,
    Silver,
    Gold,
    Platinum,
    Diamond,
    Master,
    Pro,
};

