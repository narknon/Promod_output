#pragma once
#include "CoreMinimal.h"
#include "OnTransitionEnteredSignatureDelegate.generated.h"

class USMTransitionInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTransitionEnteredSignature, USMTransitionInstance*, TransitionInstance);

