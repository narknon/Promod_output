#pragma once
#include "CoreMinimal.h"
#include "EDashDirection.generated.h"

UENUM(BlueprintType)
enum class EDashDirection : uint8 {
    CameraDirection,
    MovementDirection,
};

