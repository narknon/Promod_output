#pragma once
#include "CoreMinimal.h"
#include "StartSessionDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FStartSessionDynamicDelegate, bool, bSuccess);

