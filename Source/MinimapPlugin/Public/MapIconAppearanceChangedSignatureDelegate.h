#pragma once
#include "CoreMinimal.h"
#include "MapIconAppearanceChangedSignatureDelegate.generated.h"

class UMapIconComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapIconAppearanceChangedSignature, UMapIconComponent*, MapIcon);

