#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "NUIClassSelect.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UNUIClassSelect : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UNUIClassSelect();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetWeaponOptionVisible(UObject* WorldContextObject, int32 Index);
    
};

