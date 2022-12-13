#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIMatchStatus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIMatchStatus : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIMatchStatus();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubtitleVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubtitle(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfoVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfo(const FString& Text);
    
};

