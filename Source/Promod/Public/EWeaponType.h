#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8 {
    AK74u,
    AK47,
    R700,
    Intervention,
    Shotgun,
    Knife,
    Deagle,
    Socom,
    MP5,
    M4,
    WW2_Smg,
    WW2_Rifle,
    WW2_Sniper,
    WW2_Sidearm,
    WW2_Melee,
    UNDC_Smg,
    UNDC_Rifle,
    UNDC_Sniper,
    UNDC_Sidearm,
    UNDC_Melee,
    Nade,
    Karambit,
    Other,
    HandCannon,
    LENGTH,
};

