#pragma once
#include "CoreMinimal.h"
#include "EGrenadeType.h"
#include "ESpecialGrenadeType.h"
#include "ESlotType.h"
#include "LoadoutInitializer.generated.h"

class ABattalionWeapon;

USTRUCT(BlueprintType)
struct FLoadoutInitializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* MeleeWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGrenadeType> OffensiveGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESpecialGrenadeType> TacticalGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlotType SlotToEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMulticast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseQuickEquip;
    
    PROMOD_API FLoadoutInitializer();
};

