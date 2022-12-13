#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "DeathMessage.h"
#include "NUIKillMessage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIKillMessage : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIKillMessage();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathMessage(FDeathMessage DeathMessage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MessageExpired();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InstantReset();
    
};

