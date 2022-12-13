#pragma once
#include "CoreMinimal.h"
#include "OnQuickReloadOccurredDelegate.generated.h"

class ABattalionWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuickReloadOccurred, ABattalionWeapon*, QuickReloadedWeapon);

