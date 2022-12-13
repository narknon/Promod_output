#pragma once
#include "CoreMinimal.h"
#include "OnStateEndSignatureDelegate.generated.h"

class USMStateInstance_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateEndSignature, USMStateInstance_Base*, StateInstance);

