#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EWeaponType.h"
#include "EWeaponArchetype.h"
#include "Styling/SlateBrush.h"
#include "PromodWeaponInfo.generated.h"

class ABattalionWeapon;

USTRUCT(BlueprintType)
struct FPromodWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionWeapon> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponArchetype Category;
    
    PROMOD_API FPromodWeaponInfo();
};

