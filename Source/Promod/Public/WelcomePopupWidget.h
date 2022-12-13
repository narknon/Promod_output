#pragma once
#include "CoreMinimal.h"
#include "NUITimedPopup.h"
#include "WelcomePopupWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UWelcomePopupWidget : public UNUITimedPopup {
    GENERATED_BODY()
public:
    UWelcomePopupWidget();
    UFUNCTION(BlueprintCallable)
    void ReloadSaveDataWelcome();
    
};

