#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuckshotMissInfo.generated.h"

USTRUCT(BlueprintType)
struct FBuckshotMissInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactLocation;
    
    PROMOD_API FBuckshotMissInfo();
};

