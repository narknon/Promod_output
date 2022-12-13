#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CargoSafeZone.generated.h"

class ACargoGameState;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class PROMOD_API ACargoSafeZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 OriginalTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Checkpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoEntryUntilActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACargoGameState* CargoGameState;
    
public:
    ACargoSafeZone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateSafeZone(const FName MatchState, const int32 CurrentCheckpoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_UpdateSafeZone(const FName MatchState, const int32 CurrentCheckpoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_ResetToOriginalTeam(const FName MatchState, const int32 CurrentCheckpoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateColour();
    
};

