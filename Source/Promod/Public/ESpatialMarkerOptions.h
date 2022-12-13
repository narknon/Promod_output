#pragma once
#include "CoreMinimal.h"
#include "ESpatialMarkerOptions.generated.h"

UENUM(BlueprintType)
enum class ESpatialMarkerOptions : uint8 {
    NONE,
    Healthbar,
    Outline,
    Icon = 0x4,
};

