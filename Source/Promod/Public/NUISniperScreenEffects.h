#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUISniperScreenEffects.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNUISniperScreenEffects : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SniperVignette;
    
public:
    UNUISniperScreenEffects();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEffect(float TargetingTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCrosshair(UTexture2D* SniperCrosshairTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEffect(float TargetingTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCrosshair(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideEffect();
    
};

