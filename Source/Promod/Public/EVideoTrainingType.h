#pragma once
#include "CoreMinimal.h"
#include "EVideoTrainingType.generated.h"

UENUM(BlueprintType)
enum class EVideoTrainingType : uint8 {
    Wartide,
    Arcade,
    Movement,
    Weapons,
    Utility,
    ProScoreXP,
};

