#pragma once
#include "CoreMinimal.h"
#include "EPlatformOriginationType.generated.h"

UENUM(BlueprintType)
enum class EPlatformOriginationType : uint8 {
    Global,
    Xbox,
    PSN,
};

