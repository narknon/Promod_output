#pragma once
#include "CoreMinimal.h"
#include "EWeaponArchetype.generated.h"

UENUM(BlueprintType)
enum class EWeaponArchetype : uint8 {
    SMG,
    Rifle,
    Sniper,
    Pistol,
    Melee,
};

