#pragma once
#include "CoreMinimal.h"
#include "MapIconClickedSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapIconClickedSignature, UMapIconComponent*, MapIcon, bool, bIsLeftMouse);

