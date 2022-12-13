#pragma once
#include "CoreMinimal.h"
#include "LoginCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLoginCompletedDelegate, int32, ControllerId, bool, bSuccess);

