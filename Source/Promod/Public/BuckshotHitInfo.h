#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuckshotHitInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBuckshotHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    PROMOD_API FBuckshotHitInfo();
};

