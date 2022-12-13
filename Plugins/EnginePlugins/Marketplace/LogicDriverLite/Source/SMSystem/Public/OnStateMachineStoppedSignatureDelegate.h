#pragma once
#include "CoreMinimal.h"
#include "OnStateMachineStoppedSignatureDelegate.generated.h"

class USMInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateMachineStoppedSignature, USMInstance*, Instance);

