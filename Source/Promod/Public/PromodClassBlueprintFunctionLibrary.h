#pragma once
#include "CoreMinimal.h"
#include "TacticalUtilItem.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoadoutSlot.h"
#include "LoadoutData.h"
#include "ESlotType.h"
#include "OffensiveUtilItem.h"
#include "CosmeticItem.h"
#include "PromodClassBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UPromodClassBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPromodClassBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLoadoutSlot GetRandomWeapon(ESlotType Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTacticalUtilItem GetRandomTacticalUtil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOffensiveUtilItem GetRandomOffensiveUtil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLoadoutData GetRandomLoadout(const bool bIncludeGrenades, const bool bIncludeFireup, const bool bIncludeCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCosmeticItem GetRandomHatCosmetic();
    
};

