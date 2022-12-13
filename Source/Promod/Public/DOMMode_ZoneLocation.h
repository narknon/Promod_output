#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DOMMode_ZoneProperties.h"
#include "DOMMode_ZoneLocation.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class ADOMMode_ZoneLocation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ZoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDOMMode_ZoneProperties ZoneProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RadiusHelper;
    
    ADOMMode_ZoneLocation();
};

