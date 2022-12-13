#pragma once
#include "CoreMinimal.h"
#include "MapViewCategoriesChangedSignatureDelegate.generated.h"

class UMapViewComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapViewCategoriesChangedSignature, UMapViewComponent*, MapView);

