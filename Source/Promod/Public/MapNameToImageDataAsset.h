#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MapImageData.h"
#include "MapNameToImageDataAsset.generated.h"

UCLASS(Blueprintable)
class UMapNameToImageDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapImageData> Maps;
    
    UMapNameToImageDataAsset();
    UFUNCTION(BlueprintCallable)
    FMapImageData GetMapFromName(const FString& Name);
    
};

