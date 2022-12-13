#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "NUIEquippedWeapons.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UNUIEquippedWeapons : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousWeaponIndex;
    
public:
    UNUIEquippedWeapons();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SecondaryWeaponSwappedTo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SecondaryWeaponSwappedFrom();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrimaryWeaponSwappedTo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrimaryWeaponSwappedFrom();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecondaryWeaponChanged(ESlateVisibility Visiblity, UMaterialInterface* IconMaterial, FVector2D IconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryWeaponChanged(ESlateVisibility Visiblity, UMaterialInterface* IconMaterial, FVector2D IconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnifeChanged(ESlateVisibility Visiblity, UMaterialInterface* IconMaterial, FVector2D IconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KnifeSwappedTo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KnifeSwappedFrom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreviousWeaponIndex();
    
};

