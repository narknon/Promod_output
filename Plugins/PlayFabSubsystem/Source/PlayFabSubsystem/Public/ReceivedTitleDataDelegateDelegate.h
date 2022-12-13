#pragma once
#include "CoreMinimal.h"
#include "PFTitleData.h"
#include "ReceivedTitleDataDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivedTitleDataDelegate, const TArray<FPFTitleData>&, Data);

