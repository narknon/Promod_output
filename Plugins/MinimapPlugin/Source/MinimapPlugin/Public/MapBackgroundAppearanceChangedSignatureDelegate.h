#pragma once
#include "CoreMinimal.h"
#include "MapBackgroundAppearanceChangedSignatureDelegate.generated.h"

class AMapBackground;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapBackgroundAppearanceChangedSignature, AMapBackground*, MapBackground);

