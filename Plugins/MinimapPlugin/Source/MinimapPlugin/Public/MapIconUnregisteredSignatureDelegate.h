#pragma once
#include "CoreMinimal.h"
#include "MapIconUnregisteredSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapIconUnregisteredSignature, UMapIconComponent*, MapIcon);

