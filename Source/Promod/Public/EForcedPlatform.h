#pragma once
#include "CoreMinimal.h"
#include "EForcedPlatform.generated.h"

UENUM(BlueprintType)
enum class EForcedPlatform : uint8 {
    FP_None,
    FP_XBOX,
    FP_PS4,
    FP_PC,
    FP_MAX UMETA(Hidden),
};

