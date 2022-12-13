#pragma once
#include "CoreMinimal.h"
#include "EOnFireAwardTiming.generated.h"

UENUM(BlueprintType)
enum class EOnFireAwardTiming : uint8 {
    Instant,
    ScalingOverTime,
    ScalingCustom,
};

