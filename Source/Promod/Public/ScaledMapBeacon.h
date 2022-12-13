#pragma once
#include "CoreMinimal.h"
#include "Beacon.h"
#include "ScaledMapBeacon.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AScaledMapBeacon : public ABeacon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MapScaleExtents;
    
public:
    AScaledMapBeacon();
};

