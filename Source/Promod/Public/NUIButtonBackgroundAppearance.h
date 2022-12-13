#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateBrush.h"
#include "NUIButtonBackgroundAppearance.generated.h"

USTRUCT(BlueprintType)
struct FNUIButtonBackgroundAppearance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    PROMOD_API FNUIButtonBackgroundAppearance();
};

