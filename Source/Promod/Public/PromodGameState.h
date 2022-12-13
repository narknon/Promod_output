#pragma once
#include "CoreMinimal.h"
#include "WartideGameState.h"
#include "SpawnVFXAtLocationDelegate.h"
#include "BombMulticastDelegateDelegate.h"
#include "DespawnAllVFXDelegate.h"
#include "UObject/NoExportTypes.h"
#include "PromodGameState.generated.h"

class APromodPlayerState;
class APromodClassSettings;
class AActor;
class ABombMode_Bomb;
class UPromodTeam;

UCLASS(Blueprintable)
class APromodGameState : public AWartideGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APromodClassSettings* CleanClassSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float FuseTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnVFXAtLocation Delegate_SpawnVFXManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDespawnAllVFX Delegate_DespawnAllVFX;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBombMulticastDelegate OnBombPlanted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBombMulticastDelegate OnBombDefused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLives_Team0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLives_Team1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<APromodPlayerState*> ShootoutOrderedPlayerList_Team0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<APromodPlayerState*> ShootoutOrderedPlayerList_Team1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APromodPlayerState* NextShootoutPlayer_Team0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APromodPlayerState* NextShootoutPlayer_Team1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SmokeVFXOverridden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SmokeVFXName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldFlashGrenadeBeBlockedBySmoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftScorePreShootout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveInteractableActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 AssaultLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 BreacherLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ReconLimit;
    
public:
    APromodGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpawnVFXAtLocationOnAllClients(FName VFXName, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SortPlayerListsForShootout();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnVFXAtLocation(FName VFXName, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DespawnAllVFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BroadcastBombPlanted(APromodPlayerState* PlanterPS, ABombMode_Bomb* Bomb);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BroadcastBombDefused(APromodPlayerState* DefuserPS, ABombMode_Bomb* Bomb);
    
    UFUNCTION(BlueprintCallable)
    bool IsMatchPoint();
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentlyInShootout();
    
    UFUNCTION(BlueprintCallable)
    UPromodTeam* GetPromodTeam(int32 TeamIndex);
    
    UFUNCTION(BlueprintCallable)
    APromodClassSettings* GetClassSettings();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetActiveInteractableActors();
    
    UFUNCTION(BlueprintCallable)
    void DespawnAllVFX();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ForceUpdateTeamScores(int32 Team0Score, int32 Team1Score);
    
    UFUNCTION(BlueprintCallable)
    void ChooseNextTeam1Player();
    
    UFUNCTION(BlueprintCallable)
    void ChooseNextTeam0Player();
    
    UFUNCTION(BlueprintCallable)
    void ChooseNext1v1();
    
};

