#pragma once
#include "CoreMinimal.h"
#include "ESpectatorCameraMode.generated.h"

UENUM(BlueprintType)
enum class ESpectatorCameraMode : uint8 {
    FirstPerson,
    ThirdPerson,
    FreeCam,
};

