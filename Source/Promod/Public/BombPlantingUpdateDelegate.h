#pragma once
#include "CoreMinimal.h"
#include "BombPlantingUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBombPlantingUpdate, bool, NewPlantingState);

