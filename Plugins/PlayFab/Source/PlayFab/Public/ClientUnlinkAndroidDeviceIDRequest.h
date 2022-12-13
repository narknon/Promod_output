#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkAndroidDeviceIDRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkAndroidDeviceIDRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AndroidDeviceId;
    
    FClientUnlinkAndroidDeviceIDRequest();
};

