#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUIButtonStyle.h"
#include "ENUIButtonStyle.h"
#include "NUIButton.generated.h"

class UImage;
class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNUIButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ButtonBackground;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENUIButtonStyle ActiveStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNUIButtonStyle NormalStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNUIButtonStyle HoveredStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNUIButtonStyle PressedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSFX;
    
public:
    UNUIButton();
private:
    UFUNCTION(BlueprintCallable)
    void UnhoveredHandler();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(ENUIButtonStyle Style, bool bForce);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReleasedHandler();
    
    UFUNCTION(BlueprintCallable)
    void PressedHandler();
    
    UFUNCTION(BlueprintCallable)
    void HoveredHandler();
    
    UFUNCTION(BlueprintCallable)
    void ClickedHandler();
    
};

