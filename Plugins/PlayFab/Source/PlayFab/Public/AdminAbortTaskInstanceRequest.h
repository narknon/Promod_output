#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminAbortTaskInstanceRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminAbortTaskInstanceRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TaskInstanceId;
    
    FAdminAbortTaskInstanceRequest();
};

