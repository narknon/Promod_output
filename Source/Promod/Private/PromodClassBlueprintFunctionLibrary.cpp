#include "PromodClassBlueprintFunctionLibrary.h"

FLoadoutSlot UPromodClassBlueprintFunctionLibrary::GetRandomWeapon(ESlotType Slot) {
    return FLoadoutSlot{};
}

FTacticalUtilItem UPromodClassBlueprintFunctionLibrary::GetRandomTacticalUtil() {
    return FTacticalUtilItem{};
}

FOffensiveUtilItem UPromodClassBlueprintFunctionLibrary::GetRandomOffensiveUtil() {
    return FOffensiveUtilItem{};
}

FLoadoutData UPromodClassBlueprintFunctionLibrary::GetRandomLoadout(const bool bIncludeGrenades, const bool bIncludeFireup, const bool bIncludeCosmetics) {
    return FLoadoutData{};
}

FCosmeticItem UPromodClassBlueprintFunctionLibrary::GetRandomHatCosmetic() {
    return FCosmeticItem{};
}

UPromodClassBlueprintFunctionLibrary::UPromodClassBlueprintFunctionLibrary() {
}

