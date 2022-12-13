#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VaultAntiVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AVaultAntiVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AVaultAntiVolume();
};

