#pragma once
#include "CoreMinimal.h"
#include "OnQuickFireGlitchOccurredDelegate.generated.h"

class ABattalionWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuickFireGlitchOccurred, ABattalionWeapon*, QuickFiredWeapon);

