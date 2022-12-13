#pragma once
#include "CoreMinimal.h"
#include "MapIconMaterialInstancesChangedSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapIconMaterialInstancesChangedSignature, UMapIconComponent*, MapIcon);

