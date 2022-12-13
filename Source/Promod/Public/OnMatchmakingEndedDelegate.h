#pragma once
#include "CoreMinimal.h"
#include "OnMatchmakingEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchmakingEnded, bool, bSuccess);

