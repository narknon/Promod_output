#pragma once
#include "CoreMinimal.h"
#include "EMapSelectType.h"
#include "NUIScreen.h"
#include "NUIMapSelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIMapSelect : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUIMapSelect();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBasics(EMapSelectType MapSelectType);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextMapSelectType(EMapSelectType MapSelectType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnMapSelected(const FString& MapName);
    
};

