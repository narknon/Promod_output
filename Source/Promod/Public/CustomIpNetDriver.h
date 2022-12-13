#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "CustomIpNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCustomIpNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Counter;
    
public:
    UCustomIpNetDriver();
};

