#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUITraining.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUITraining : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUITraining();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadTrainingPressed();
    
};

