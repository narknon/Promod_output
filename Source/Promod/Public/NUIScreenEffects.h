#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NUIBaseHUDElement.h"
#include "NUIScreenEffects.generated.h"

class UNUIDamageIndicator;

UCLASS(Blueprintable, EditInlineNew)
class UNUIScreenEffects : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SniperVignette;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIDamageIndicator> DamageIndicatorClass;
    
public:
    UNUIScreenEffects();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBloodMaterial(float BloodRatio, float PulsingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewDamageIndicator(UNUIDamageIndicator* NewDamageIndicator);
    
};

