#pragma once
#include "CoreMinimal.h"
#include "MapViewSizeChangedSignatureDelegate.generated.h"

class UMapViewComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapViewSizeChangedSignature, UMapViewComponent*, MapView);

