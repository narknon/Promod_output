#pragma once
#include "CoreMinimal.h"
#include "NuclearAsset.h"
#include "GuardiansAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class PROMOD_API UGuardiansAsset : public UNuclearAsset {
    GENERATED_BODY()
public:
    UGuardiansAsset();
};

