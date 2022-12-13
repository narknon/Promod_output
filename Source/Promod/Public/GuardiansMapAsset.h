#pragma once
#include "CoreMinimal.h"
#include "GuardiansAsset.h"
#include "GuardiansMapAsset.generated.h"

class UWorld;
class UTexture2D;

UCLASS(Blueprintable)
class PROMOD_API UGuardiansMapAsset : public UGuardiansAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Map;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Splash;
    
    UGuardiansMapAsset();
};

