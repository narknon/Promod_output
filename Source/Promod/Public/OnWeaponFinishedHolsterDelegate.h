#pragma once
#include "CoreMinimal.h"
#include "OnWeaponFinishedHolsterDelegate.generated.h"

class ABattalionWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponFinishedHolster, ABattalionWeapon*, HolsteredWeapon);

