#pragma once
#include "CoreMinimal.h"
#include "LoadoutStat.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    PROMOD_API FLoadoutStat();
};

