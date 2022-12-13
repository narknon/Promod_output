#pragma once
#include "CoreMinimal.h"
#include "MapIconHoverEndSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapIconHoverEndSignature, UMapIconComponent*, MapIcon);

