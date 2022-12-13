#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CTFMode_FlagZoneLocation.generated.h"

UCLASS(Blueprintable)
class ACTFMode_FlagZoneLocation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 TeamAllegiance;
    
    ACTFMode_FlagZoneLocation();
};

