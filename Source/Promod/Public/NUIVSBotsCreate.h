#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIVSBotsCreate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIVSBotsCreate : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUIVSBotsCreate();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBasics();
    
    UFUNCTION(BlueprintCallable)
    void RequestMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
};

