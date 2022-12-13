#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIRespawnTimer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIRespawnTimer : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIRespawnTimer();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimer(float NewTime);
    
};

