#pragma once
#include "CoreMinimal.h"
#include "SMTransitionInfo.h"
#include "OnStateMachineTransitionTakenSignatureDelegate.generated.h"

class USMInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateMachineTransitionTakenSignature, USMInstance*, Instance, FSMTransitionInfo, Transition);

