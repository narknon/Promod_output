#pragma once
#include "CoreMinimal.h"
#include "MapFogMaterialChangedSignatureDelegate.generated.h"

class AMapFog;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapFogMaterialChangedSignature, AMapFog*, MapFog);

