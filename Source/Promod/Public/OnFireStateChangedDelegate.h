#pragma once
#include "CoreMinimal.h"
#include "EWeaponArchetype.h"
#include "OnFireStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFireStateChanged, bool, bIsFiringNow, float, Intensity, EWeaponArchetype, WeaponArchetype);

