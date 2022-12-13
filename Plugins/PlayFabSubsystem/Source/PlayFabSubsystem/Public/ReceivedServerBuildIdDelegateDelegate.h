#pragma once
#include "CoreMinimal.h"
#include "ReceivedServerBuildIdDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReceivedServerBuildIdDelegate, const FString&, ServerBuildId);

