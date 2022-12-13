#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIDebugMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIDebugMenu : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUIDebugMenu();
    UFUNCTION(BlueprintCallable)
    void ResumeGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AboutToShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AboutToHide();
    
};

