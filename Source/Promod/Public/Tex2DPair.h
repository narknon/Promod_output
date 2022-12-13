#pragma once
#include "CoreMinimal.h"
#include "Tex2DPair.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTex2DPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture2;
    
    PROMOD_API FTex2DPair();
};

