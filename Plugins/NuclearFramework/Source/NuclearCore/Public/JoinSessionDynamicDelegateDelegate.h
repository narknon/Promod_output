#pragma once
#include "CoreMinimal.h"
#include "JoinSessionDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJoinSessionDynamicDelegate, bool, bSuccess, const FText&, ErrorText);

