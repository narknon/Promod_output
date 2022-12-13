#pragma once
#include "CoreMinimal.h"
#include "LeaveSessionDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FLeaveSessionDynamicDelegate, bool, bSuccess);

