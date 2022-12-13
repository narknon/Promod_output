#pragma once
#include "CoreMinimal.h"
#include "MapIconHoverStartSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapIconHoverStartSignature, UMapIconComponent*, MapIcon);

