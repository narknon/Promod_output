#pragma once
#include "CoreMinimal.h"
#include "MapFogUnregisteredSignatureDelegate.generated.h"

class AMapFog;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapFogUnregisteredSignature, AMapFog*, MapFog);

