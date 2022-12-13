#pragma once
#include "CoreMinimal.h"
#include "ECrawlerState.generated.h"

UENUM(BlueprintType)
enum class ECrawlerState : uint8 {
    EProgressing,
    EReversing,
    EStationary,
};

