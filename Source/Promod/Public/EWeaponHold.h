#pragma once
#include "CoreMinimal.h"
#include "EWeaponHold.generated.h"

UENUM(BlueprintType)
enum class EWeaponHold : uint8 {
    Default,
    Alternate,
    Long,
    Pistol,
    MP40,
};

