#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUICrosshair.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUICrosshair : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUICrosshair();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCrosshairParams(float CrosshairSpread, float CrosshairAlpha, bool LookingAtFriendly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHitMarker(bool KillingBlow, bool FriendlyFire);
    
};

