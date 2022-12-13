#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.h"
#include "WeaponNameEntry.generated.h"

USTRUCT(BlueprintType)
struct FWeaponNameEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WeaponName;
    
    PROMOD_API FWeaponNameEntry();
};

