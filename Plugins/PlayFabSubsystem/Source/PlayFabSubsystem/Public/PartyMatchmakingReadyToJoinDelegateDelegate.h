#pragma once
#include "CoreMinimal.h"
#include "PartyMatchmakingReadyToJoinDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPartyMatchmakingReadyToJoinDelegate, const FString&, MatchmakingTicketId, const FString&, BaseQueueName, bool, bCrossPlay);

