#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HQMode_ZoneProperties.h"
#include "Headquarters_ZoneLocation.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class AHeadquarters_ZoneLocation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ZoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHQMode_ZoneProperties ZoneProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RadiusHelper;
    
    AHeadquarters_ZoneLocation();
};

