#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ENuclearAssetResult.h"
#include "GuardiansAssetTagPredicateDelegate.h"
#include "GuardiansAssetCatalog.generated.h"

class UGuardiansAsset;
class UGuardiansMapAsset;

UCLASS(Blueprintable)
class PROMOD_API UGuardiansAssetCatalog : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGuardiansAssetCatalog();
    UFUNCTION(BlueprintCallable)
    static void ReleaseAsset(UGuardiansAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    static ENuclearAssetResult AcquireMapAsset(const FString& Map, UGuardiansMapAsset*& Asset);
    
    UFUNCTION(BlueprintCallable)
    static ENuclearAssetResult AcquireAssetByTag(const TSubclassOf<UGuardiansAsset> AssetClass, const FName& TagName, const FGuardiansAssetTagPredicate& Predicate, UGuardiansAsset*& Asset);
    
};

