#pragma once
#include "CoreMinimal.h"
#include "MapViewDestroyedSignatureDelegate.generated.h"

class UMapViewComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapViewDestroyedSignature, UMapViewComponent*, MapView);

