#pragma once
#include "CoreMinimal.h"
#include "MapBackgroundMaterialChangedSignatureDelegate.generated.h"

class AMapBackground;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapBackgroundMaterialChangedSignature, AMapBackground*, MapBackground);

