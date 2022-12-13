#pragma once
#include "CoreMinimal.h"
#include "MapModeVoteInfo.h"
#include "UObject/NoExportTypes.h"
#include "NUIBaseUIElement.h"
#include "NUIMatchResultScreen.generated.h"

class ABattalionPlayerState;
class ABattalionGameState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIMatchResultScreen : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MatchResultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MatchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ResultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText GameEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExperienceAwarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABattalionPlayerState*> TopPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> TopPlayerScoreTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMapModeVoteInfo> VoteOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasVoted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MatchResult;
    
public:
    UNUIMatchResultScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void VoteForMapMode(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPagedScoreboardUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPagedScoreboardDown();
    
protected:
    UFUNCTION(BlueprintCallable)
    FMapModeVoteInfo GetWinningVote();
    
    UFUNCTION(BlueprintCallable)
    bool GetVoteIsLockedIn(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchResult();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentVoteCount(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGameEndTime();
    
    UFUNCTION(BlueprintCallable)
    bool GetAnyVoteIsLockedIn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayMapVoteResult(const FString& CurrentMapName, const FString& CurrentMapMode);
    
};

