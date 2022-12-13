#pragma once
#include "CoreMinimal.h"
#include "OnCheckpointReachedDelegate.generated.h"

class ACargoCheckpoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCheckpointReached, int32, NewCheckpoint, ACargoCheckpoint*, CheckpointActor);

