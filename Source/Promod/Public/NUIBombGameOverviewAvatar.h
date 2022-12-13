#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "NUIBombGameOverviewAvatar.generated.h"

class ABombPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIBombGameOverviewAvatar : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABombPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AknowledgePlayerAliveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility BorderVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ReadyVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BorderColor;
    
public:
    UNUIBombGameOverviewAvatar();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDied();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyDefusedBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllyStoppedPlantingBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllyStoppedDefusingBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllyStartedPlantingBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllyStartedDefusingBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllyPlantedBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllyDroppedBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllyDefusedBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllyCollectedBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAknowledgeAliveChanged();
    
    UFUNCTION(BlueprintCallable)
    ABombPlayerState* GetPlayerState();
    
};

