#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIWeaponPrompt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIWeaponPrompt : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText PromptText;
    
public:
    UNUIWeaponPrompt();
    UFUNCTION(BlueprintCallable)
    void HidePrompt();
    
    UFUNCTION(BlueprintCallable)
    void ElementAboutToHide();
    
};

