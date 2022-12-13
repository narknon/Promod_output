#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENUILayerBP.h"
#include "NUIHelpers.generated.h"

UCLASS(Blueprintable)
class UNUIHelpers : public UObject {
    GENERATED_BODY()
public:
    UNUIHelpers();
    UFUNCTION(BlueprintCallable)
    static void SetSmokeOverlayPlaying(bool bPlaying);
    
    UFUNCTION(BlueprintCallable)
    static void SetSmokeBackdropPlaying(bool bPlaying);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetZFromLayer(UObject* WorldContextObject, ENUILayerBP Layer);
    
};

