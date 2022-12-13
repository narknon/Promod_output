#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIPrompt.generated.h"

class UTextBlock;
class UScrollBox;
class UWidget;
class UNUIButton;

UCLASS(Blueprintable, EditInlineNew)
class UNUIPrompt : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccepted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* MessageContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIButton* AcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIButton* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CancelContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SmokeBackdrop;
    
public:
    UNUIPrompt();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllowAudio(bool allowAudio);
    
private:
    UFUNCTION(BlueprintCallable)
    void CancelClickedHandler();
    
    UFUNCTION(BlueprintCallable)
    void AcceptClickedHandler();
    
};

