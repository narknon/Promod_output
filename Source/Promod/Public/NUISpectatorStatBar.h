#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "NUISpectatorStatBar.generated.h"

class UNUIPlayerAvatar;
class ABattalionPlayerState;
class ABattalionCharacter;
class UBattalionDamageType;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNUISpectatorStatBar : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ID;
    
    UPROPERTY(EditAnywhere)
    uint8 ActualID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActualHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrenadeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SmokeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionDamageType* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIPlayerAvatar* LargeBarAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIPlayerAvatar* SmallBarAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLowHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentlyViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HealthBarColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NationNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrimaryEquipped;
    
    UNUISpectatorStatBar();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeaponOpacity(bool PrimaryEquipped, bool KnifeEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeaponImage(const UBattalionDamageType* LocalWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSecondaryImage(const UBattalionDamageType* LocalWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePrimaryImage(const UBattalionDamageType* LocalWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKnifeImage(const UBattalionDamageType* LocalWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthBar(float InHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopLowHealthAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRespawnAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLowHealthAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerRespawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerDied();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDeathAnimation();
    
};

