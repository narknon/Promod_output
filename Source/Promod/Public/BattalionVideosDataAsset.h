#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BattalionVideoDataEntity.h"
#include "BattalionVideosDataAsset.generated.h"

UCLASS(Blueprintable)
class UBattalionVideosDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattalionVideoDataEntity> Videos;
    
    UBattalionVideosDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBattalionVideoDataEntity GetVideoData(const FString& VideoTitle) const;
    
};

