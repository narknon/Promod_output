#pragma once
#include "CoreMinimal.h"
#include "MapStatList.h"
#include "MapPackStatsEntity.generated.h"

USTRUCT(BlueprintType)
struct FMapPackStatsEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapStatList> MapStats;
    
    PROMOD_API FMapPackStatsEntity();
};

