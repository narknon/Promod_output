#pragma once
#include "CoreMinimal.h"
#include "MapData.h"
#include "MapDataCollection.generated.h"

USTRUCT(BlueprintType)
struct FMapDataCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapData> MapData;
    
    PROMOD_API FMapDataCollection();
};

