#pragma once
#include "CoreMinimal.h"
#include "EMapSelectType.generated.h"

UENUM(BlueprintType)
enum class EMapSelectType : uint8 {
    InGameVote,
    GrenadeTraining,
    VSBots,
};

