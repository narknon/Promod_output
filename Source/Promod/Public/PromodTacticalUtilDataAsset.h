#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESpecialGrenadeType.h"
#include "TacticalUtilItem.h"
#include "PromodTacticalUtilDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodTacticalUtilDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTacticalUtilItem> TacticalUtils;
    
    UPromodTacticalUtilDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTacticalUtilItem GetUtilFromTypePure(ESpecialGrenadeType Type) const;
    
    UFUNCTION(BlueprintCallable)
    FTacticalUtilItem GetUtilFromType(ESpecialGrenadeType Type);
    
    UFUNCTION(BlueprintCallable)
    FTacticalUtilItem GetUtilFromName(const FString& Name);
    
};

