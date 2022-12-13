#pragma once
#include "CoreMinimal.h"
#include "EFireUpType.h"
#include "PromodSaveData.h"
#include "EParentModKit.h"
#include "EClassName.h"
#include "LoadoutData.h"
#include "EWeaponArchetype.h"
#include "SelectedKitSaveData.generated.h"

UCLASS(Blueprintable)
class PROMOD_API USelectedKitSaveData : public UPromodSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EClassName, FLoadoutData> ClassLoadouts;
    
    USelectedKitSaveData();
    UFUNCTION(BlueprintCallable)
    void SaveLoadoutChosenGunKitMap(EClassName InClassName, FLoadoutData InLoadoutData);
    
    UFUNCTION(BlueprintCallable)
    void SaveFireupForClass(EClassName InClassName, EFireUpType Fireup);
    
    UFUNCTION(BlueprintCallable)
    EParentModKit GetSavedModkitForArchetype(EWeaponArchetype Archetype);
    
    UFUNCTION(BlueprintCallable)
    FLoadoutData GetSavedLoadoutChosenGunKitMap(EClassName InClassName, EWeaponArchetype DefaultPrimaryArchetype);
    
    UFUNCTION(BlueprintCallable)
    EFireUpType GetFireUpForClass(EClassName InClassName);
    
};

