#pragma once
#include "CoreMinimal.h"
#include "OnStateMachineUpdatedSignatureDelegate.generated.h"

class USMInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateMachineUpdatedSignature, USMInstance*, Instance, float, DeltaSeconds);

