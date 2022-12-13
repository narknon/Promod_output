#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "EVideoTrainingType.h"
#include "NUIVideoTrainingPlaying.generated.h"

class UBattalionSubtitlesDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class UNUIVideoTrainingPlaying : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoTrainingType CurrentVideoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSubtitlesDataAsset* CurrentSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SubtitlesVisible;
    
    UNUIVideoTrainingPlaying();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubtitles();
    
    UFUNCTION(BlueprintCallable)
    void Setup(EVideoTrainingType VideoType, UBattalionSubtitlesDataAsset* Subtitles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubtitlesText(const FText& Subtitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSubtitles();
    
};

