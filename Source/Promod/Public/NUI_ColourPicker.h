#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "NUI_ColourPicker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUI_ColourPicker : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipAnimationOnConstruction;
    
    UNUI_ColourPicker();
    UFUNCTION(BlueprintCallable)
    void SetColour(FLinearColor NewColour, bool SkipAnimation);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetColour();
    
};

