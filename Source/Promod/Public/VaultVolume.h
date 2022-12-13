#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VaultVolume.generated.h"

class UBoxComponent;
class UArrowComponent;

UCLASS(Blueprintable)
class AVaultVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    AVaultVolume();
};

