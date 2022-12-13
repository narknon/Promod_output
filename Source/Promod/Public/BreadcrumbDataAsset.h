#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BreadcrumbDataAsset.generated.h"

UCLASS(Blueprintable)
class UBreadcrumbDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> breadCrumbs;
    
    UBreadcrumbDataAsset();
};

