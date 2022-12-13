#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDRadialProgressBar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHUDRadialProgressBar : public UUserWidget {
    GENERATED_BODY()
public:
    UHUDRadialProgressBar();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(float Progress);
    
};

