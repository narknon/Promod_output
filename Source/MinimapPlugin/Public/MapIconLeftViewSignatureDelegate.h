#pragma once
#include "CoreMinimal.h"
#include "MapIconLeftViewSignatureDelegate.generated.h"

class UMapViewComponent;
class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapIconLeftViewSignature, UMapIconComponent*, MapIcon, UMapViewComponent*, View);

