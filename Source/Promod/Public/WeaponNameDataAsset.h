#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponNameEntry.h"
#include "EWeaponType.h"
#include "WeaponNameDataAsset.generated.h"

UCLASS(Blueprintable)
class UWeaponNameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponNameEntry> WeaponNameEntries;
    
    UWeaponNameDataAsset();
    UFUNCTION(BlueprintCallable)
    FText GetWeaponDisplayText(EWeaponType WeaponType);
    
};

