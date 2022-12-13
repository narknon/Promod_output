#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecalData.h"
#include "Engine/EngineTypes.h"
#include "BattalionBloodEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class ABattalionBloodEffect : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDecalData> DefaultDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalDepth;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult SurfaceHit;
    
    ABattalionBloodEffect();
};

