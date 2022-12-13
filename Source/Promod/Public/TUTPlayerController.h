#pragma once
#include "CoreMinimal.h"
#include "ENationType.h"
#include "BattalionPlayerControllerGMBase.h"
#include "EGrenadeType.h"
#include "ESpecialGrenadeType.h"
#include "ESlotType.h"
#include "LoadoutData.h"
#include "TUTPlayerController.generated.h"

class ABattalionWeapon;

UCLASS(Blueprintable)
class ATUTPlayerController : public ABattalionPlayerControllerGMBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* PrimaryKilledWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* SecondaryKilledWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* MeleeKilledWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGrenadeType> GrenadesKilledWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESpecialGrenadeType> SpecialGrenadesKilledWith;
    
public:
    ATUTPlayerController();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleEditMode();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponsKilledWith(const ABattalionWeapon* Primary, const ABattalionWeapon* Secondary, const ABattalionWeapon* Melee, const TArray<EGrenadeType>& LethalGrenades, const TArray<ESpecialGrenadeType>& SpecialGrenades);
    
    UFUNCTION(BlueprintCallable)
    void SetHasDied(const bool bNewHasDied);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LoadDefaultLoadout(const FLoadoutData& defaultLoadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuyWeapon(const FString& WeaponName, const ESlotType DestinationSlot, const ENationType TrenchGunNationType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuySpecialGrenade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BuyGrenade();
    
    UFUNCTION(BlueprintCallable)
    TArray<ESpecialGrenadeType> GetSpecialGrenadesKilledWith() const;
    
    UFUNCTION(BlueprintCallable)
    ABattalionWeapon* GetSecondaryKilledWith() const;
    
    UFUNCTION(BlueprintCallable)
    ABattalionWeapon* GetPrimaryKilledWith() const;
    
    UFUNCTION(BlueprintCallable)
    ABattalionWeapon* GetMeleeKilledWith() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHasDied() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EGrenadeType> GetGrenadesKilledWith() const;
    
};

