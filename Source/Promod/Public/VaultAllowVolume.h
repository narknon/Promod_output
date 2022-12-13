#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VaultAllowVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AVaultAllowVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AVaultAllowVolume();
};

