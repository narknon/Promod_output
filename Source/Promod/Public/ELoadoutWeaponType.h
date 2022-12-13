#pragma once
#include "CoreMinimal.h"
#include "ELoadoutWeaponType.generated.h"

UENUM(BlueprintType)
enum class ELoadoutWeaponType : uint8 {
    None,
    MainWeapon,
    Sidearm,
};

