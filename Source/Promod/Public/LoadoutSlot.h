#pragma once
#include "CoreMinimal.h"
#include "EWeaponArchetype.h"
#include "EParentModKit.h"
#include "LoadoutSlot.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponArchetype SlotArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParentModKit SlotModkit;
    
    PROMOD_API FLoadoutSlot();
};

