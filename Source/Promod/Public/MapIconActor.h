#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapIconActor.generated.h"

class UMapIconComponent;

UCLASS(Blueprintable)
class PROMOD_API AMapIconActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIconComponent* MapIconComponent;
    
public:
    AMapIconActor();
};

