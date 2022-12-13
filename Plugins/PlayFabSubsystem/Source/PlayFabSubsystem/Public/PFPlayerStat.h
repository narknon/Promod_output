#pragma once
#include "CoreMinimal.h"
#include "PFPlayerStat.generated.h"

USTRUCT(BlueprintType)
struct FPFPlayerStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    PLAYFABSUBSYSTEM_API FPFPlayerStat();
};

