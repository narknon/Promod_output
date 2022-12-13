#pragma once
#include "CoreMinimal.h"
#include "MatchReport.h"
#include "MatchReportPayload.generated.h"

USTRUCT(BlueprintType)
struct FMatchReportPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchReport Report;
    
    PROMOD_API FMatchReportPayload();
};

