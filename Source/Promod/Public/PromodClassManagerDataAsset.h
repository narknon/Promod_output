#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "EClassName.h"
#include "EParentModKit.h"
#include "EWeaponArchetype.h"
#include "PromodClassManagerDataAsset.generated.h"

class UPromodClassDataAsset;
class UPromodAllFireUpsDataAsset;
class ABattalionWeapon;

UCLASS(Blueprintable)
class UPromodClassManagerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPromodClassDataAsset*> ClassDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodAllFireUpsDataAsset* AllFireUps;
    
    UPromodClassManagerDataAsset();
    UFUNCTION(BlueprintCallable)
    FString GetWeaponNameFromArchetypeAndModKit(EWeaponArchetype Archetype, EParentModKit ModKit);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABattalionWeapon> GetWeaponFromName(const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABattalionWeapon> GetWeaponFromArchetypeAndModKit(EWeaponArchetype Archetype, EParentModKit ModKit);
    
    UFUNCTION(BlueprintCallable)
    EWeaponArchetype GetDefaultWeaponArchetypeForClass(EClassName LoadoutClass);
    
    UFUNCTION(BlueprintCallable)
    UPromodClassDataAsset* GetClassDataAsset(EClassName ClassNameToFind);
    
};

