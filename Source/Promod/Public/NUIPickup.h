#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIPickup.generated.h"

class UBattalionDamageType;

UCLASS(Blueprintable, EditInlineNew)
class UNUIPickup : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText BindName;
    
public:
    UNUIPickup();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeaponDisplay(const UBattalionDamageType* WeaponPickup);
    
};

