#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PromodWeaponInfo.h"
#include "EWeaponType.h"
#include "PromodWeaponDataAsset.generated.h"

UCLASS(Blueprintable)
class UPromodWeaponDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPromodWeaponInfo> PromodWeapons;
    
    UPromodWeaponDataAsset();
    UFUNCTION(BlueprintCallable)
    FPromodWeaponInfo GetWeaponInfoByName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FPromodWeaponInfo GetWeaponInfoByEnum(EWeaponType Type);
    
};

