#pragma once
#include "CoreMinimal.h"
#include "MapBackgroundTextureChangedSignatureDelegate.generated.h"

class AMapBackground;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapBackgroundTextureChangedSignature, AMapBackground*, MapBackground);

