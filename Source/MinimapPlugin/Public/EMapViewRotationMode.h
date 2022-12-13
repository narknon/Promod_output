#pragma once
#include "CoreMinimal.h"
#include "EMapViewRotationMode.generated.h"

UENUM(BlueprintType)
enum class EMapViewRotationMode : uint8 {
    UseFixedRotation,
    InheritYaw,
};

