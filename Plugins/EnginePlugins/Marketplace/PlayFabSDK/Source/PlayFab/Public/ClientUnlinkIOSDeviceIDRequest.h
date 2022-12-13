#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkIOSDeviceIDRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkIOSDeviceIDRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    FClientUnlinkIOSDeviceIDRequest();
};

