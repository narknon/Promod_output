#pragma once
#include "CoreMinimal.h"
#include "MapIconRegisteredSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapIconRegisteredSignature, UMapIconComponent*, MapIcon);

