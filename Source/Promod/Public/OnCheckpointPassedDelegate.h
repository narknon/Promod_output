#pragma once
#include "CoreMinimal.h"
#include "OnCheckpointPassedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckpointPassed, int32, NewCheckpoint);

