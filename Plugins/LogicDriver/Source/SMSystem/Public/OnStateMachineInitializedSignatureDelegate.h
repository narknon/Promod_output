#pragma once
#include "CoreMinimal.h"
#include "OnStateMachineInitializedSignatureDelegate.generated.h"

class USMInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateMachineInitializedSignature, USMInstance*, Instance);

