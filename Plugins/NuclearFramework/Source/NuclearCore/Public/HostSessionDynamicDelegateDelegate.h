#pragma once
#include "CoreMinimal.h"
#include "HostSessionDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FHostSessionDynamicDelegate, bool, bSuccess);

