#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NuclearAssetHandle.generated.h"

class UNuclearAsset;

UCLASS(Blueprintable, Within=NuclearAssetManager)
class NUCLEARCORE_API UNuclearAssetHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNuclearAsset* Asset;
    
public:
    UNuclearAssetHandle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNuclearAsset* GetAsset() const;
    
};

