#pragma once
#include "CoreMinimal.h"
#include "MapIconDestroyedSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapIconDestroyedSignature, UMapIconComponent*, MapIcon);

