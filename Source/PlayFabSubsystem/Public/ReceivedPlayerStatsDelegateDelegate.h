#pragma once
#include "CoreMinimal.h"
#include "PFPlayerStat.h"
#include "PFPlayerId.h"
#include "ReceivedPlayerStatsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReceivedPlayerStatsDelegate, const FPFPlayerId&, PlayerId, const TArray<FPFPlayerStat>&, Stats);

