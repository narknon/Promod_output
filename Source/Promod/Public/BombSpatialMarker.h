#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BombSpatialMarker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UBombSpatialMarker : public UUserWidget {
    GENERATED_BODY()
public:
    UBombSpatialMarker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartTimer(float Time);
    
};

