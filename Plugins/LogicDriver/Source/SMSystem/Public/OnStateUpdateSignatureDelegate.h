#pragma once
#include "CoreMinimal.h"
#include "OnStateUpdateSignatureDelegate.generated.h"

class USMStateInstance_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateUpdateSignature, USMStateInstance_Base*, StateInstance, float, DeltaSeconds);

