#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUILoadingScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUILoadingScreen : public UUserWidget {
    GENERATED_BODY()
public:
    UNUILoadingScreen();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Setup(const FName& MapName, const FName& ModeName);
    
};

