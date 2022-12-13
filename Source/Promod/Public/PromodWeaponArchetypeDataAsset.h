#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "EWeaponArchetype.h"
#include "EParentModKit.h"
#include "PromodWeaponArchetypeDataAsset.generated.h"

class ABattalionWeapon;

UCLASS(Blueprintable)
class UPromodWeaponArchetypeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponArchetype WeaponArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABattalionWeapon>> ModKits;
    
    UPromodWeaponArchetypeDataAsset();
    UFUNCTION(BlueprintCallable)
    FString GetWeaponNameFromParentModKit(EParentModKit ParentModKit);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABattalionWeapon> GetWeaponFromParentModKit(EParentModKit ParentModKit);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABattalionWeapon> GetWeaponByName(const FString& WeaponName);
    
};

