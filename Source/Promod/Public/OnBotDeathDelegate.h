#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnBotDeathDelegate.generated.h"

class APromodBot;
class AController;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnBotDeath, APromodBot*, DeadBot, float, KillingDamage, const FDamageEvent&, DamageEvent, AController*, EventInstigator, AActor*, DamageCauser);

