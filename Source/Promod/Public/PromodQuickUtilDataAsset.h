#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "QuickUtilItem.h"
#include "EQuickUtilType.h"
#include "PromodQuickUtilDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodQuickUtilDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuickUtilItem> QuickUtils;
    
    UPromodQuickUtilDataAsset();
    UFUNCTION(BlueprintCallable)
    FQuickUtilItem GetUtilFromType(EQuickUtilType Type);
    
    UFUNCTION(BlueprintCallable)
    FQuickUtilItem GetUtilFromName(const FString& Name);
    
};

