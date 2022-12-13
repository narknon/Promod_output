#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECosmeticType.h"
#include "CosmeticItem.h"
#include "PromodCosmeticsDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodCosmeticsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmeticItem> Cosmetics;
    
    UPromodCosmeticsDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCosmeticItem GetCosmeticFromTypePure(ECosmeticType Type) const;
    
    UFUNCTION(BlueprintCallable)
    FCosmeticItem GetCosmeticFromType(ECosmeticType Type);
    
    UFUNCTION(BlueprintCallable)
    FCosmeticItem GetCosmeticFromName(const FString& Name);
    
};

