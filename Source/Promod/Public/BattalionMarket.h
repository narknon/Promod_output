#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Info.h"
#include "Market.h"
#include "MarketWeaponInfo.h"
#include "Styling/SlateBrush.h"
#include "MarketAvailableWeapon.h"
#include "ENationType.h"
#include "BattalionMarket.generated.h"

class ABattalionWeapon;
class AWartidePlayerState;

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class ABattalionMarket : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FMarket Market;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMarketWeaponInfo> Arsenal;
    
    ABattalionMarket();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    FString GetWeaponNameFromClass(UClass* Weapon);
    
    UFUNCTION(BlueprintCallable)
    FSlateBrush GetWeaponImageFromName(const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable)
    FSlateBrush GetWeaponImageFromClass(TSubclassOf<ABattalionWeapon> WeaponClass);
    
    UFUNCTION(BlueprintCallable)
    UClass* GetWeaponClassFromName(const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable)
    FMarketAvailableWeapon GetMarketWeaponFromName(const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDefaultSecondaryIndexForNation(ENationType Nation);
    
    UFUNCTION(BlueprintCallable)
    FString GetDefaultSecondaryForNation(ENationType Nation);
    
    UFUNCTION(BlueprintCallable)
    FString GetDefaultPrimaryForNation(ENationType Nation);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCost(const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMarketAvailableWeapon> GetAvailableWeaponsForNation(ENationType Nation);
    
    UFUNCTION(BlueprintCallable)
    FString GeRandomWeaponNameForNation(ENationType Nation);
    
    UFUNCTION(BlueprintCallable)
    bool CanAfford(const FString& WeaponName, int32 Tokens);
    
    UFUNCTION(BlueprintCallable)
    bool AllowedToBuy(const FString& WeaponName, AWartidePlayerState* PS);
    
};

