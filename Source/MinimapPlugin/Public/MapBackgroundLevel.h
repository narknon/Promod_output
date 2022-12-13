#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapBackgroundLevel.generated.h"

class UTextureRenderTarget2D;
class UTexture2D;

USTRUCT(BlueprintType)
struct FMapBackgroundLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D SamplingResolution;
    
    MINIMAPPLUGIN_API FMapBackgroundLevel();
};

