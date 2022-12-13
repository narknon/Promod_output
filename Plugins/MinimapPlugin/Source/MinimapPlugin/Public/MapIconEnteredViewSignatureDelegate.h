#pragma once
#include "CoreMinimal.h"
#include "MapIconEnteredViewSignatureDelegate.generated.h"

class UMapViewComponent;
class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapIconEnteredViewSignature, UMapIconComponent*, MapIcon, UMapViewComponent*, View);

