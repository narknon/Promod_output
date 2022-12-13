#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIProneBlockPrompt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIProneBlockPrompt : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldPlay;
    
    UNUIProneBlockPrompt();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFlash();
    
    UFUNCTION(BlueprintCallable)
    void ElementAboutToHide();
    
};

