#pragma once
#include "CoreMinimal.h"
#include "DOMMode_ZoneProperties.generated.h"

USTRUCT(BlueprintType)
struct FDOMMode_ZoneProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemySpawnInfluenceWeightingScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllySpawnInfluenceWeightingScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemySpawnInfluenceDistanceScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllySpawnInfluenceDistanceScalar;
    
    PROMOD_API FDOMMode_ZoneProperties();
};

