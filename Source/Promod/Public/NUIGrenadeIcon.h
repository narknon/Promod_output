#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIGrenadeIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIGrenadeIcon : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIGrenadeIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIcon(float GrenadeDirection, float GrenadeDamage);
    
};

