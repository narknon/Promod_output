#pragma once
#include "CoreMinimal.h"
#include "PFPlayerInfo.h"
#include "FoundMatchDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFoundMatchDelegate, const TArray<FPFPlayerInfo>&, MatchMembers, const FString&, ServerURL);

