#pragma once
#include "CoreMinimal.h"
#include "EFireUpWeaponEquipTiming.generated.h"

UENUM(BlueprintType)
enum class EFireUpWeaponEquipTiming : uint8 {
    NoHolster,
    PostDeploy,
    PostActivation,
    PostDeployAnimation,
    PostActivationAnimation,
    Custom,
    Manual,
};

