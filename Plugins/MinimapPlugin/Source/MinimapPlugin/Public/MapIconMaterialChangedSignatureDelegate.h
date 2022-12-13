#pragma once
#include "CoreMinimal.h"
#include "MapIconMaterialChangedSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapIconMaterialChangedSignature, UMapIconComponent*, MapIcon);

