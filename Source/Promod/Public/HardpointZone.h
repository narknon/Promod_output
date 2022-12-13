#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHardpointState.h"
#include "HardpointZone.generated.h"

class UWorldMarkerComponent;
class APlayerState;
class UMapIconComponent;
class APromodPlayerController;
class APromodCharacter;
class USceneComponent;

UCLASS(Blueprintable)
class AHardpointZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIconComponent* MiniMapIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APromodCharacter*> PlayersInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HardpointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZoneIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentlyCapturedTeamAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHardpointState CurrentHardpointState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentFirstLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentCaptureNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentCaptureEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentDefend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentContest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsUnlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsFirstZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LockedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LockedTickTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsFullyUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LastCaptureTeam;
    
public:
    AHardpointZone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateZoneState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopHardpointSounds();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNextZoneWorldMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetZoneVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetOvertimeTimers(float MarkerTimeLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedTime(float NewLockedTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedTickTime(float NewLockedTickTime);
    
    UFUNCTION(BlueprintCallable)
    void SetIsZoneActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLocked(bool Locked);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFullyUnlocked(bool FullyUnlocked);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetIsFirstZone(bool First);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentlyCapturedTeamAllegiance(int32 NewTeamNum);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHardpointState(EHardpointState NewState);
    
    UFUNCTION(BlueprintCallable)
    void PlayerExitedZone(APlayerState* ExitingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void PlayerEnteredZone(APlayerState* EnteringPlayer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HideCurrentZoneWorldMarkers();
    
    UFUNCTION(BlueprintCallable)
    float GetLockedTime();
    
    UFUNCTION(BlueprintCallable)
    float GetLockedTickTime();
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetLocalPlayerController();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsZoneActive();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLocked();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFullyUnlocked();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFirstZone();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentlyCapturedTeamAllegiance();
    
    UFUNCTION(BlueprintCallable)
    EHardpointState GetCurrentHardpointState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Event_UnlockHardpoint();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DeactivateZone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetupPlayerJoinedInProgress(EHardpointState CurrentState, float CurrentZoneTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideCurrentZoneWorldMarkers();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ActivateZone();
    
};

