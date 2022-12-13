#pragma once
#include "CoreMinimal.h"
#include "MapBackgroundRegisteredSignatureDelegate.generated.h"

class AMapBackground;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapBackgroundRegisteredSignature, AMapBackground*, MapBackground);

