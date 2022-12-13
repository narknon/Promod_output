#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShowcaseParameters.generated.h"

USTRUCT(BlueprintType)
struct FShowcaseParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PivotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseFov;
    
    PROMOD_API FShowcaseParameters();
};

