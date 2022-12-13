#pragma once
#include "CoreMinimal.h"
#include "EFillStage.generated.h"

UENUM(BlueprintType)
enum class EFillStage : uint8 {
    Score,
    Medals,
    Challenges,
    MatchResult,
    Finished,
};

