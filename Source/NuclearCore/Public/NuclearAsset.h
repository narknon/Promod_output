#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "NuclearAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class NUCLEARCORE_API UNuclearAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UUID;
    
    UNuclearAsset();
};

