#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUICallVoteMenu.generated.h"

class UTextBlock;
class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUICallVoteMenu : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TimeoutTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UNUICallVoteMenu();
    UFUNCTION(BlueprintCallable)
    void VoteToSurrender();
    
    UFUNCTION(BlueprintCallable)
    void VoteToKickPlayer(ABattalionPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void VoteForTimeout(bool bIsTactical);
    
    UFUNCTION(BlueprintCallable)
    void ViewProfile(ABattalionPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void UnmuteChatAllPlayers(TArray<ABattalionPlayerState*> Players);
    
    UFUNCTION(BlueprintCallable)
    void UnmuteAllPlayers(TArray<ABattalionPlayerState*> Players);
    
    UFUNCTION(BlueprintCallable)
    void ToggleMutePlayer(ABattalionPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void ToggleMuteChatPlayer(ABattalionPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeoutTypes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayersToView(const TArray<ABattalionPlayerState*>& Players);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayersToReport(const TArray<ABattalionPlayerState*>& Players);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayersToMuteChat(const TArray<ABattalionPlayerState*>& Players);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayersToMute(const TArray<ABattalionPlayerState*>& Players);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayersToKick(const TArray<ABattalionPlayerState*>& TeamMembers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShowAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OfferSurrender();
    
    UFUNCTION(BlueprintCallable)
    void MuteChatAllPlayers(TArray<ABattalionPlayerState*> Players);
    
    UFUNCTION(BlueprintCallable)
    void MuteAllPlayers(TArray<ABattalionPlayerState*> Players);
    
    UFUNCTION(BlueprintCallable)
    void GetTimeoutOptions();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersToView();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersToReport();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersToMuteChat();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersToMute();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersToKick();
    
    UFUNCTION(BlueprintCallable)
    void BackToPauseMenu();
    
};

