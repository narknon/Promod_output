#pragma once
#include "CoreMinimal.h"
#include "EProgressTimer.generated.h"

UENUM(BlueprintType)
enum class EProgressTimer : uint8 {
    None,
    Planting,
    Defusing,
    Capturing,
};

