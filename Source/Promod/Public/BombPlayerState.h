#pragma once
#include "CoreMinimal.h"
#include "BombDefusingUpdateDelegate.h"
#include "BattalionPlayerState.h"
#include "BombPlantingUpdateDelegate.h"
#include "BombPlayerState.generated.h"

class ABattalionCharacter;

UCLASS(Blueprintable)
class ABombPlayerState : public ABattalionPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bKeepClassOnLoadoutReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool Planting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool QuickPlanting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool Planted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool Defusing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Plants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Defuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString LastPurchasedWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBombPlantingUpdate BombPlantingUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBombDefusingUpdate BombDefusingUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasBomb;
    
public:
    ABombPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetQuickPlanting(bool NewPlanting);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetPlanting(bool NewPlanting);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetPlanted(bool NewPlanted);
    
    UFUNCTION(BlueprintCallable)
    void SetHasBomb(bool bHasBomb);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetDefusing(bool NewDefusing);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetBotPossessedPS(ABattalionCharacter* BattChar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasBomb();
    
};

