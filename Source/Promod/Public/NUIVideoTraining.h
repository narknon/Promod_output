#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "EVideoTrainingType.h"
#include "NUIVideoTraining.generated.h"

class UBattalionSubtitlesDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class UNUIVideoTraining : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUIVideoTraining();
    UFUNCTION(BlueprintCallable)
    void RequestVideo(EVideoTrainingType VideoType, UBattalionSubtitlesDataAsset* Subtitles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
};

