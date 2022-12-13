#pragma once
#include "CoreMinimal.h"
#include "ECargoHideMarkersType.generated.h"

UENUM(BlueprintType)
enum class ECargoHideMarkersType : uint8 {
    Checkpoint,
    Capture,
    Both,
};

