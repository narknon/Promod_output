#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerControllerGMBase.h"
#include "BombPlayerController.generated.h"

class ABombMode_Bomb;
class ABattalionCharacter;
class ABombMode_Zone;
class ABombPlayerState;
class APawn;

UCLASS(Blueprintable)
class ABombPlayerController : public ABattalionPlayerControllerGMBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABombMode_Zone* NearZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABombMode_Bomb* NearBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowActionTakeBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowActionPossessBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackingTeam;
    
    ABombPlayerController();
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDCarryingBomb(uint8 SpectatingID, bool ViewTargetHasBomb);
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDBombInteraction(uint8 SpectatingID, bool Started, bool IsDefusing);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateHUDBombInteraction(bool Started, bool IsDefusing);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateBombZoneMarkers(const FName CurrentMatchState);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerViewBombSite(ABattalionPlayerControllerGMBase* PC, ABombMode_Zone* Zone);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TakeBombFromBot(APawn* PotentionBot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStopUseBomb();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStopQuickUseBomb();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStartUseBomb();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStartQuickUseBomb();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnFallenOutOfMap();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnDropBomb();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeamStoppedPlantingBomb(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeamStoppedDefusingBomb(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeamStartedPlantingBomb(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeamStartedDefusingBomb(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeamPlantedBomb(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeamPickedUpBomb(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeamDroppedBomb(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeamDefusedBomb(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSwitchSidesUIDelay(float InDelay);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetQuickPlanting(bool InPlanting);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetPlanting(bool InPlanting);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetDefusing(bool InDefusing);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetDefuseDistance(float InDefuseDistance);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetAttackingNation(float InAttackingNation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetOverviewHUD();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerSpawned(ABombPlayerState* SubjectPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PickedUpBomb();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_InitTimers(float InPlantTime, float InDefuseTime, float InQuickPlantTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FlashOverviewHUD();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DroppedBomb(ABattalionCharacter* Char);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DestroyAllBattCharacters();
    
};

