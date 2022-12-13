#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BattalionSubtitlesDataAsset.generated.h"

UCLASS(Blueprintable)
class UBattalionSubtitlesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FText> Subtitles;
    
    UBattalionSubtitlesDataAsset();
};

