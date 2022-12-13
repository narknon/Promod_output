#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIDamageIndicator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIDamageIndicator : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectMultiplier;
    
    UNUIDamageIndicator();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEffect(float DamageAngle, float TimePassed, bool DamagedSelf);
    
};

