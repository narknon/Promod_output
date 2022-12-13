#pragma once
#include "CoreMinimal.h"
#include "MapBackgroundUnregisteredSignatureDelegate.generated.h"

class AMapBackground;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapBackgroundUnregisteredSignature, AMapBackground*, MapBackground);

