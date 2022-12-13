#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIVotingMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIVotingMenu : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 VotesYes;
    
    UPROPERTY(EditAnywhere)
    uint8 VotesNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVotedYes;
    
    UNUIVotingMenu();
    UFUNCTION(BlueprintImplementableEvent)
    void SetVote(const FString& Caller, const FString& Msg, float VoteTime, uint8 VotesReq);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentVote(const FString& Caller, const FString& Title, const FString& Item, float VoteTime, uint8 VotesReq, const FString& PassOption, const FString& FailOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShowAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_VoteYes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_VoteNo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_VoteFinished(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_VoteCast(bool InVotedYes);
    
};

