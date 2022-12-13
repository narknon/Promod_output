#pragma once
#include "CoreMinimal.h"
#include "OnStateBeginSignatureDelegate.generated.h"

class USMStateInstance_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateBeginSignature, USMStateInstance_Base*, StateInstance);

