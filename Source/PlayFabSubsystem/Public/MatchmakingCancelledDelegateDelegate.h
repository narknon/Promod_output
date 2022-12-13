#pragma once
#include "CoreMinimal.h"
#include "MatchmakingCancelledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMatchmakingCancelledDelegate, int32, ErrorCode, const FString&, ErrorMessage);

