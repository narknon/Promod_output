#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BombPlayerController.h"
#include "WartidePlayerController.generated.h"

class UAkAudioEvent;
class AWartidePlayerState;
class ABattalionWeapon;

UCLASS(Blueprintable)
class AWartidePlayerController : public ABombPlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BuyGrenadeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BuySpecialGrenadeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BuyWeaponSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DonateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RequestDonateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RecievedDonationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowBombActionPlant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowBombActionDefuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlreadyPlayedVoiceInstructions;
    
public:
    AWartidePlayerController();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuyWeaponWithMarketIndex(int32 marketIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuyWeapon(const FString& WeaponName);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayModeSpecificVoiceInstructions();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSwapSides();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerShadowInventoryChanged(AWartidePlayerState* PS, const TArray<TSubclassOf<ABattalionWeapon>>& Inventory, int32 NumGrenades, int32 NumSpecialGrenades);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerBoughtWeapon(AWartidePlayerState* BuyingPlayer, const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerBoughtSpecialGrenade(AWartidePlayerState* BuyingPlayer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerBoughtGrenade(AWartidePlayerState* BuyingPlayer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerBoughtClass(AWartidePlayerState* BuyingPlayer, const FString& ClassTemplateName);
    
};

