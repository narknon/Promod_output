#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BIPF_PlatformHelper.generated.h"

class UPlayFabSubsystem;

UCLASS(Abstract, Blueprintable, Within=PlayFabSubsystem)
class UBIPF_PlatformHelper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PlayFabSubsystem;
    
public:
    UBIPF_PlatformHelper();
};

