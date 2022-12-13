#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PromodGameState.h"
#include "ETeamRole.h"
#include "BlitzGameState.generated.h"

class ABombCarrierTracker;
class APromodCharacter;
class ABombPlayerController;
class ABombMode_Bomb;

UCLASS(Blueprintable)
class ABlitzGameState : public APromodGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABombCarrierTracker> TrackerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodCharacter* BombCarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABombPlayerController* BombCarrierController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABombCarrierTracker* BombCarrierTracker;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RemainingFuseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TeamWithBombPossesion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETeamRole CurrentTeamRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentBombCarrierName;
    
    ABlitzGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateRound(int32 InCurrentStageID);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBombStatus();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateBombPossession(ABombPlayerController* Player, APromodCharacter* Character, int32 TeamNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBombPlantedBy(bool bIsPlanted, int32 TeamThatPlanted);
    
    UFUNCTION(BlueprintCallable)
    void SetBombPickedUpBy(ABombPlayerController* Player, int32 TeamThatPickedUp);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyBombExploded(ABombMode_Bomb* Bomb);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void InitializeGameRoles();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClearGameRoles();
    
};

