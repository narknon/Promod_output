#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIInteract.generated.h"

class ABattalionPlayerState;
class APlayerState;
class ABattalionPlayerControllerGMBase;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNUIInteract : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* SpectatingPlayerState;
    
public:
    UNUIInteract();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatingCharacterChanged();
    
    UFUNCTION(BlueprintCallable)
    void ShowHudElement(ABattalionPlayerControllerGMBase* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void OnSpectatingCharacterChanged(APlayerState* PC);
    
    UFUNCTION(BlueprintCallable)
    void HideHudElement(ABattalionPlayerControllerGMBase* Controller);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UImage* GetProgressImage();
    
};

