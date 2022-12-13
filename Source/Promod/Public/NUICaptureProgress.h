#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUICaptureProgress.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNUICaptureProgress : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUICaptureProgress();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceSetTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceSetProgress(float Progress);
    
};

