#pragma once
#include "CoreMinimal.h"
#include "OnStateMachineStartedSignatureDelegate.generated.h"

class USMInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateMachineStartedSignature, USMInstance*, Instance);

