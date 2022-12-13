#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DecalData.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FDecalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    PROMOD_API FDecalData();
};

