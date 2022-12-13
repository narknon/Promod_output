#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "UObject/NoExportTypes.h"
#include "ButtonAppearance.generated.h"

USTRUCT(BlueprintType)
struct FButtonAppearance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    PROMOD_API FButtonAppearance();
};

