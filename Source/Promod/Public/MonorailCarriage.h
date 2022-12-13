#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EMonorailWorldMarkerStates.h"
#include "MonorailCarriage.generated.h"

class UWorldMarkerComponent;
class ACargoPlayerState;
class APromodCharacter;
class UStaticMeshComponent;
class UBoxComponent;
class UMapIconComponent;
class UDamageType;
class UAkComponent;
class UAkAudioEvent;
class UPrimitiveComponent;
class APromodPlayerController;

UCLASS(Blueprintable)
class AMonorailCarriage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ContestantBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIconComponent* MapIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MapIconRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool AreAttackersPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumberOfAttackersPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool AreDefendersPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsTeam0Present;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsTeam1Present;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APromodCharacter*> AllPresentCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACargoPlayerState*> AllPresentPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACargoPlayerState*> PresentAttackingPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACargoPlayerState*> PresentDefendingPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APromodCharacter*> PresentAttackingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APromodCharacter*> PresentDefendingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentEscortAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentDisabledRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentContested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponentRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CargoVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartCheckpointProgressSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopCheckpointProgressSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UnlockedCheckpointSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartCargoMovementSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopCargoMovementSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefendLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RepairLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EscortLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisableLabel;
    
    AMonorailCarriage();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapContestBox(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapContestBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_StopSoundsAtRoundEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_StopReachedLockedCheckpointSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_StartCargoMovementSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayReachedLockedCheckpointSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayCheckpointUnlockedSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayCargoUnlockProgressSound(float Progress);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_DisablePayload(bool Disabled);
    
    UFUNCTION(BlueprintCallable)
    void GiveAmmoToOccupyingTeam();
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetLocalPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StickWorldMarker(bool Stick, APromodCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetMonorailWorldMarkerState(EMonorailWorldMarkerStates NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSetIsDisabled(const bool bInIsDisabled);
    
};

