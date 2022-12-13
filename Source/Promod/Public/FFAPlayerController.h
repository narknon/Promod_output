#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerControllerGMBase.h"
#include "NationSound.h"
#include "ENationType.h"
#include "FFAPlayerController.generated.h"

class AFFAPlayerState;

UCLASS(Blueprintable)
class AFFAPlayerController : public ABattalionPlayerControllerGMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNationSound FFAStartInstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNationSound EventCloseToWin;
    
public:
    AFFAPlayerController();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetWeaponPrompt();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuyWeapon(const FString& WeaponName, const ENationType TrenchGunNationType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuySpecialGrenade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuyGrenade();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayModeSpecificVoiceInstructions();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WinningAndNearlyEndedEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerBoughtWeapon(AFFAPlayerState* BuyingPlayer, const FString& WeaponName);
    
};

