#pragma once
#include "CoreMinimal.h"
#include "StatData.generated.h"

USTRUCT(BlueprintType)
struct FStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    PROMOD_API FStatData();
};

