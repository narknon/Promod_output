#pragma once
#include "CoreMinimal.h"
#include "PFPlayerId.h"
#include "PFPlayerData.h"
#include "ReceivedPlayerDataDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReceivedPlayerDataDelegate, const FPFPlayerId&, PlayerId, const TArray<FPFPlayerData>&, Data);

