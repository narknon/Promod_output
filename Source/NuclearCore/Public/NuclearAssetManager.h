#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "ENuclearAssetResult.h"
#include "UObject/NoExportTypes.h"
#include "NuclearAssetManager.generated.h"

class UObject;
class UNuclearAssetHandle;

UCLASS(Blueprintable)
class NUCLEARCORE_API UNuclearAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, UNuclearAssetHandle*> PendingHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, UNuclearAssetHandle*> LoadedHandles;
    
public:
    UNuclearAssetManager();
    UFUNCTION(BlueprintCallable)
    static ENuclearAssetResult GetSoftObject(const TSoftObjectPtr<UObject>& SoftObjectReference, UClass* ObjectClass, UObject*& Object);
    
};

