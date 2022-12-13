#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerControllerGMBase.h"
#include "TDMPlayerController.generated.h"

class ATDMPlayerState;

UCLASS(Blueprintable)
class ATDMPlayerController : public ABattalionPlayerControllerGMBase {
    GENERATED_BODY()
public:
    ATDMPlayerController();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetWeaponPrompt();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuyWeapon(const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuySpecialGrenade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuyGrenade();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayModeSpecificVoiceInstructions();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerBoughtWeapon(ATDMPlayerState* BuyingPlayer, const FString& WeaponName);
    
};

