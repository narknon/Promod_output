#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIWelcomeScreen.generated.h"

class UWidget;
class UTexture2DDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UNUIWelcomeScreen : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrivacyAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnPrivacyScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIScreen* PrivacyPrompt;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* PromptContainer;
    
public:
    UNUIWelcomeScreen();
    UFUNCTION(BlueprintCallable)
    void StartPlayfabLogin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerAvatar(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrePlayfabLogin();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayFabLoginCompleted(int32 ControllerId, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoginFlowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoginFlowEnded(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Login(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerLogedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUniquePlayerId();
    
};

