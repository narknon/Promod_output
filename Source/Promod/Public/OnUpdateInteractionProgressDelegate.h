#pragma once
#include "CoreMinimal.h"
#include "OnUpdateInteractionProgressDelegate.generated.h"

class ABattalionPlayerControllerGMBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUpdateInteractionProgress, ABattalionPlayerControllerGMBase*, Controller, ABattalionPlayerControllerGMBase*, receiver, float, Progress);

