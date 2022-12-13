#pragma once
#include "CoreMinimal.h"
#include "MapBackgroundRenderedSignatureDelegate.generated.h"

class AMapBackground;
class UTextureRenderTarget2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMapBackgroundRenderedSignature, AMapBackground*, MapBackground, int32, Level, UTextureRenderTarget2D*, RenderTarget);

