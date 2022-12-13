#pragma once
#include "CoreMinimal.h"
#include "LoadoutCard.h"
#include "NUIBaseUIElement.h"
#include "NUICardsSelection.generated.h"

class ABattalionPlayerState;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNUICardsSelection : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattalionPlayerState*> PlayerStateSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeadingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CountdownTimer;
    
    UNUICardsSelection();
    UFUNCTION(BlueprintCallable)
    void ResetPlayerStateSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamLoadoutChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowTeamLoadoutInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerUnequippedCard(ABattalionPlayerState* PlayerState, FLoadoutCard Card, int32 AccessorySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerReadyStateChanged(ABattalionPlayerState* PlayerState, bool Ready);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPickedUpCard(ABattalionPlayerState* PlayerState, FLoadoutCard Card);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoadoutCorrected(ABattalionPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLeftTeam(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerJoinedTeam(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEquippedCard(ABattalionPlayerState* PlayerState, FLoadoutCard Card, int32 AccessorySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDroppedCard(ABattalionPlayerState* PlayerState, FLoadoutCard Card);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownTimerCriticalTick();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetAvatar(ABattalionPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    bool CanClose();
    
};

