#pragma once
#include "CoreMinimal.h"
#include "OnVoteCastedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVoteCasted, bool, bYesVote, int32, NewVoteCount);

