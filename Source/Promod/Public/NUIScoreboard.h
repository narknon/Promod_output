#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NUIBaseUIElement.h"
#include "Components/SlateWrapperTypes.h"
#include "ScoreboardData.h"
#include "NUIScoreboard.generated.h"

class UNUIScoreboardSpectators;
class UNUIScoreboardTeam;
class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIScoreboard : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideTeamsPostMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTeamHeaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTeamNationIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTeamScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTeamPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeSpectators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSpectatorPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNUIScoreboardTeam*> TeamWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNUIScoreboardSpectators* SpectatorsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIScoreboardTeam> TeamGroupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIScoreboardSpectators> SpectatorGroupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility TeamsGroupVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility FFAVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility WartideVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility CTFVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility DOMVisibility;
    
public:
    UNUIScoreboard();
    UFUNCTION(BlueprintCallable)
    void UpdateScoreboardCustom(const TArray<FScoreboardData>& Data);
    
    UFUNCTION(BlueprintCallable)
    void UpdateScoreboard();
    
    UFUNCTION(BlueprintCallable)
    void SetUpScoreboard();
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerFromTeam(ABattalionPlayerState* RemovedPlayer, int32 TeamIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerFromSpectators(ABattalionPlayerState* RemovedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScoreboardPopulated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScoreboardInitialised();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerToTeam(ABattalionPlayerState* AddedPlayer, int32 TeamIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerToSpectators(ABattalionPlayerState* AddedPlayer);
    
};

