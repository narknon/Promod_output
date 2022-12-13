#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUIClosedPrototypeVersion.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UNUIClosedPrototypeVersion : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MilestoneText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MatchIdText;
    
    UNUIClosedPrototypeVersion();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowInViewport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideFromViewport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddThisToViewport();
    
};

