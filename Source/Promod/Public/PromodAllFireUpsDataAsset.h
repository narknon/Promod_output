#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFireUpType.h"
#include "PromodAllFireUpsDataAsset.generated.h"

class UPromodFireUpDataAsset;

UCLASS(Blueprintable)
class PROMOD_API UPromodAllFireUpsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPromodFireUpDataAsset*> FireUps;
    
    UPromodAllFireUpsDataAsset();
    UFUNCTION(BlueprintCallable)
    UPromodFireUpDataAsset* GetFireUpFromType(EFireUpType Type);
    
};

