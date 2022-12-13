#pragma once
#include "CoreMinimal.h"
#include "HQMode_ZoneProperties.generated.h"

USTRUCT(BlueprintType)
struct FHQMode_ZoneProperties {
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
    
    PROMOD_API FHQMode_ZoneProperties();
};

