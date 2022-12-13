#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OffensiveUtilItem.h"
#include "EGrenadeType.h"
#include "PromodOffensiveUtilDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodOffensiveUtilDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOffensiveUtilItem> OffensiveUtils;
    
    UPromodOffensiveUtilDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOffensiveUtilItem GetUtilFromTypePure(EGrenadeType Type) const;
    
    UFUNCTION(BlueprintCallable)
    FOffensiveUtilItem GetUtilFromType(EGrenadeType Type);
    
    UFUNCTION(BlueprintCallable)
    FOffensiveUtilItem GetUtilFromName(const FString& Name);
    
};

