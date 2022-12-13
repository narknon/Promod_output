#pragma once
#include "CoreMinimal.h"
#include "MapImageData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMapImageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LanImage;
    
    PROMOD_API FMapImageData();
};

