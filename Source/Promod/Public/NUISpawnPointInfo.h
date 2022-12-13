#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "NUISpawnPointInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUISpawnPointInfo : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UNUISpawnPointInfo();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPointInfo(float Score, bool Selected);
    
};

