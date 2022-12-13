#pragma once
#include "CoreMinimal.h"
#include "StatInfo.generated.h"

USTRUCT(BlueprintType)
struct FStatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    PROMOD_API FStatInfo();
};

