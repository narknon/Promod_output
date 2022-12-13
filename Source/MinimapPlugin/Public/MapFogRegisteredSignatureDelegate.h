#pragma once
#include "CoreMinimal.h"
#include "MapFogRegisteredSignatureDelegate.generated.h"

class AMapFog;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapFogRegisteredSignature, AMapFog*, MapFog);

