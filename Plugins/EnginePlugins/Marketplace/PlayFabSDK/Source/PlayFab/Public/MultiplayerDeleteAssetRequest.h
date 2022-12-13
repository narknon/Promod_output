#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerDeleteAssetRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerDeleteAssetRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FMultiplayerDeleteAssetRequest();
};

