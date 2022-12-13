#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "DeathMessage.h"
#include "NUIKillFeed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIKillFeed : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIKillFeed();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WipeDeathRows();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOpacity(float NewAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAppearance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathMessage(FDeathMessage DeathMessage);
    
};

