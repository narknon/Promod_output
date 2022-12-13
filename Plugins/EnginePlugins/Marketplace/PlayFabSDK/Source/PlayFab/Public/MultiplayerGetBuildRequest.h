#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerGetBuildRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetBuildRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildId;
    
    FMultiplayerGetBuildRequest();
};

