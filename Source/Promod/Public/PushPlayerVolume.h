#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPushType.h"
#include "PushPlayerVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class APushPlayerVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushType PushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushStrength;
    
    APushPlayerVolume();
};

