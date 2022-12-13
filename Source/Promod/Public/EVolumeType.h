#pragma once
#include "CoreMinimal.h"
#include "EVolumeType.generated.h"

UENUM(BlueprintType)
enum class EVolumeType : uint8 {
    VT_INDOORSMALL,
    VT_INDOORLARGE,
    VT_MAX UMETA(Hidden),
};

