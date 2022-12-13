#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "CloudScriptListFunctionsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptListFunctionsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FCloudScriptListFunctionsRequest();
};

