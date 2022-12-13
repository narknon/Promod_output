#pragma once
#include "CoreMinimal.h"
#include "PhysMatModifier.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FPhysMatModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    PROMOD_API FPhysMatModifier();
};

