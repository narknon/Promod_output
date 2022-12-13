#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingQueue.h"
#include "OnMatchmakingStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMatchmakingStarted, EMatchmakingQueue, Queue, bool, bCrossPlay);

