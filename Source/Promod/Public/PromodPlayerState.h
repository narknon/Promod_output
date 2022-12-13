#pragma once
#include "CoreMinimal.h"
#include "ClassChangedDelegate.h"
#include "LoadoutData.h"
#include "WartidePlayerState.h"
#include "FireupAvailabilityChangedDelegate.h"
#include "FireupState.h"
#include "EPromodActionPrompt.h"
#include "EFireUpType.h"
#include "EFireUpSlotType.h"
#include "PromodPlayerState.generated.h"

class APromodPlayerController;

UCLASS(Blueprintable)
class APromodPlayerState : public AWartidePlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastChosenClass, meta=(AllowPrivateAccess=true))
    FLoadoutData LastChosenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FLoadoutData PendingClassChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireupAvailabilityChanged OnFireupAvailabilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireupAvailabilityChanged OnQuickUtilAvailabilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClassChanged OnClassChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireUpScoreProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bShootoutEliminated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 KillsThisRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSpawnedWithClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireupState_Ultimate, meta=(AllowPrivateAccess=true))
    FFireupState FireupState_Ultimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireupState_Quick, meta=(AllowPrivateAccess=true))
    FFireupState FireupState_Quick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeUntilQuickUtilAward;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentActionPrompt, meta=(AllowPrivateAccess=true))
    EPromodActionPrompt CurrentActionPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentKillConfirmPoints;
    
public:
    APromodPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Timer_FireUpComboEnded();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCurrentKillConfirmPoints(const int32 Val);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterPlayerMatchScore(int32 MatchScore);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastChosenClass();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireupState_Ultimate(FFireupState PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireupState_Quick(FFireupState PreviousState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentActionPrompt(EPromodActionPrompt LastActionPrompt);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayerActivatedFireup();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayerAbortedFireup(APromodPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_FireUpEnded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_FireupDurationRefreshed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_FireUpChanged(EFireUpType NewFireUp, EFireUpSlotType FireUpSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerNameTrimmed(const int32 TrimAt) const;
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetOwningController();
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetLocalController();
    
    UFUNCTION(BlueprintCallable)
    bool GetCanSeeHealthbars();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateFireUpPercentage(float NewPercentage, bool bAvailable, EFireUpSlotType FireUpSlotType);
    
    UFUNCTION(BlueprintCallable)
    void AwardQuickUtil();
    
    UFUNCTION(BlueprintCallable)
    void ApplyClass();
    
};

