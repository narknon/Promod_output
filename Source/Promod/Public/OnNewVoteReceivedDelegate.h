#pragma once
#include "CoreMinimal.h"
#include "VoteData.h"
#include "OnNewVoteReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewVoteReceived, const FVoteData&, VoteData);

