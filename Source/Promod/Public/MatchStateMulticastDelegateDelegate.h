#pragma once
#include "CoreMinimal.h"
#include "MatchStateMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMatchStateMulticastDelegate, FName, OldMatchState, FName, NewMatchState);

