#pragma once
#include "CoreMinimal.h"
#include "SMStateInfo.h"
#include "OnStateMachineStateChangedSignatureDelegate.generated.h"

class USMInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStateMachineStateChangedSignature, USMInstance*, Instance, FSMStateInfo, NewState, FSMStateInfo, PreviousState);

