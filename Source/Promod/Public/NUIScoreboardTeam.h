#pragma once
#include "CoreMinimal.h"
#include "NUIScoreboardGroup.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "ScoreboardData.h"
#include "NUIScoreboardTeam.generated.h"

class UBattalionTeam;
class ABattalionPlayerState;
class ABattalionGameState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIScoreboardTeam : public UNUIScoreboardGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattalionTeam* TeamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DeadPlayerTextColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TeamScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TeamFlagState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility NationIconVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility TeamScoreVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility CTFFlagStateVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ABattalionPlayerState*, float> CachedScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility FFAVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility WartideVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility CTFVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility DOMVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility INFVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MemberWidgetListInitializing;
    
public:
    UNUIScoreboardTeam();
    UFUNCTION(BlueprintCallable)
    void UpdateTeamData(ABattalionGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMembers(ABattalionGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMemberWidgetListCustom(const FScoreboardData& ScoreboardData);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMemberWidgetList();
    
};

