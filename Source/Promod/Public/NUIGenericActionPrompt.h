#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIGenericActionPrompt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIGenericActionPrompt : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PromptDescriptionText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BindNameText;
    
public:
    UNUIGenericActionPrompt();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePrompt();
    
};

