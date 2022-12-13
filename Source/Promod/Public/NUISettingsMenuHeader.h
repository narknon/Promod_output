#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUISettingsMenuHeader.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUISettingsMenuHeader : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SecretSetting;
    
    UNUISettingsMenuHeader();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeaderText(const FText& Option);
    
    UFUNCTION(BlueprintCallable)
    void HideSecretSetting(bool Hide);
    
};

