#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIPlay.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNUIPlay : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUIPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnWartidePressed(UWidget* widgetPressed);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialPressed(UWidget* widgetPressed);
    
    UFUNCTION(BlueprintCallable)
    void OnArcadePressed(UWidget* widgetPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrossPlaySettingUpdated();
    
};

