#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "UObject/NoExportTypes.h"
#include "NUIButtonAppearance.generated.h"

USTRUCT(BlueprintType)
struct FNUIButtonAppearance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    PROMOD_API FNUIButtonAppearance();
};

