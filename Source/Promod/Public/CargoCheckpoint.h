#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECargoCheckpointState.h"
#include "CargoCheckpointData.h"
#include "Engine/EngineTypes.h"
#include "ECargoHideMarkersType.h"
#include "CargoCheckpoint.generated.h"

class ACargoPlayerState;
class UWorldMarkerComponent;
class UDecalComponent;
class AMonorailCarriage;
class UBoxComponent;
class ACargoGameState;
class UPrimitiveComponent;
class APromodPlayerController;

UCLASS(Blueprintable)
class PROMOD_API ACargoCheckpoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* CheckpointDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* ObjectiveDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* ObjectiveDecalCorner1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* ObjectiveDecalCorner2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* ObjectiveDecalCorner3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* ObjectiveDecalCorner4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ContestantBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CheckpointNumber, meta=(AllowPrivateAccess=true))
    int32 CheckpointNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CheckpointData, meta=(AllowPrivateAccess=true))
    FCargoCheckpointData CheckpointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECargoCheckpointState PrevCheckpointState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECargoCheckpointState CheckpointState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACargoPlayerState*> AllPresentPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAttackersPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDefendersPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnlockProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnlockProgressPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentUnlockProgressPip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PipPercentageTickSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumUnlockProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumUnlockProgressPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentUnoccupiedDecayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTimeToDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AMonorailCarriage* CargoActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentDefendCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentContested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAtSplineStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACargoGameState* CargoGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WorldMarkerAllowedVisibilityStates;
    
public:
    ACargoCheckpoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateUnlockPercent(float UnlockPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CheckpointNumber();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CheckpointData();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapContestBox(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckpointDataSet(const FCargoCheckpointData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapContestBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_Reset();
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetLocalPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowMarker(bool Show, ECargoHideMarkersType HideType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetCurrentState(ECargoCheckpointState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetColour();
    
};

