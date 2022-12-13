#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "EPromodActionPrompt.h"
#include "PromodActionPrompt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPromodActionPrompt : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility PromptVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PromptDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PromptShowing;
    
    UPromodActionPrompt();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton();
    
    UFUNCTION(BlueprintCallable)
    void ShowHidePrompt(EPromodActionPrompt ActionPrompt);
    
};

