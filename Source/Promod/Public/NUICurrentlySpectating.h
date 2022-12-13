#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "GameFramework/PlayerInput.h"
#include "NUICurrentlySpectating.generated.h"

class UBattalionDamageType;
class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUICurrentlySpectating : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUICurrentlySpectating();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeapons(const UBattalionDamageType* PrimaryWeapon, const UBattalionDamageType* SecondaryWeapon, const UBattalionDamageType* Knife, bool bPrimaryEquipped, bool bKnifeEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealth(float Health);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGrenadeCount(bool IsSmoke, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentlySpectating(ABattalionPlayerState* PS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentlySpectatedCharacter(const UBattalionDamageType* Prim, const UBattalionDamageType* Sec, const UBattalionDamageType* Knife, bool PrimaryEquipped, bool bKnifeEquipped, float Health);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartHealthRegen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeysForAction(FName ActionName, TArray<FInputActionKeyMapping>& Bindings);
    
};

