#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NUIGameOverview.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIBombGameOverview.generated.h"

class UNUIBombGameOverviewAvatar;
class ABombPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIBombGameOverview : public UNUIGameOverview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNUIBombGameOverviewAvatar*> LeftTeamWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNUIBombGameOverviewAvatar*> RightTeamWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBombGameOverviewAvatar> AvatarWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABombPlayerState*> LeftPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABombPlayerState*> RightPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeftTeamAliveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RightTeamAliveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SpectatorScoreVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LeftTeamAvatarsVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RightTeamAvatarsVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LeftTeamAliveCountVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RightTeamAliveCountVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SpectatorBombInteractionTimerVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombInteractionProgress;
    
public:
    UNUIBombGameOverview();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    bool IsBombTimerActive();
    
};

