#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "NUIHeader.generated.h"

class UObject;
class UTexture2DDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UNUIHeader : public UNUIScreen {
    GENERATED_BODY()
public:
    UNUIHeader();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateXPDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTitleWithAnim(const FText& Title, float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTitleInstant(const FText& Title, float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBattalionLogoWithAnim(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBattalionLogoInstant(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgressBar(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerProScore(int32 ProScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerName(const FString& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerLevel(int32 playerLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerAvatar(int32 PartyIdx, UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTitleWithAnim(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTitleInstant(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HidePanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBattalionLogoWithAnimAndSettingsLine(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBattalionLogoWithAnim(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBattalionLogoInstant(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyAvatars();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetInviteOptionVisible(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnablePartyButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisablePartyButtons();
    
};

