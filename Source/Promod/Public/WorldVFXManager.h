#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldVFXManager.generated.h"

class ASmokeGrenadeVolume;

UCLASS(Blueprintable)
class PROMOD_API AWorldVFXManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASmokeGrenadeVolume*> SmokeVolumes;
    
    AWorldVFXManager();
};

