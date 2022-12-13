#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "BlitzSpatialMarker.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UBlitzSpatialMarker : public UUserWidget {
    GENERATED_BODY()
public:
    UBlitzSpatialMarker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMarker(UTexture2D* Icon, FName Label, const FColor& Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFadeout(float Value);
    
};

