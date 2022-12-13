#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientReportPlayerClientRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientReportPlayerClientRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReporteeId;
    
    FClientReportPlayerClientRequest();
};

