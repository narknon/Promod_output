#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "EParentModKit.h"
#include "EClassName.h"
#include "EWeaponArchetype.h"
#include "EFireUpType.h"
#include "PromodClassDataAsset.generated.h"

class UPromodWeaponArchetypeDataAsset;
class UPromodFireUpDataAsset;
class USkeletalMesh;
class ABattalionWeapon;

UCLASS(Blueprintable)
class UPromodClassDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClassName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPromodWeaponArchetypeDataAsset*> PrimaryWeaponClassData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPromodWeaponArchetypeDataAsset*> SidearmWeaponClassData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPromodWeaponArchetypeDataAsset*> MeleeWeaponClassData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BodyMesh3P_Friendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BodyMesh3P_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* HeadMesh3P_Friendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* HeadMesh3P_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPromodFireUpDataAsset*> FireUps;
    
    UPromodClassDataAsset();
    UFUNCTION(BlueprintCallable)
    FString GetWeaponNameFromArchetypeAndModKit(EWeaponArchetype Archetype, EParentModKit ModKit);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABattalionWeapon> GetWeaponFromName(const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABattalionWeapon> GetWeaponFromArchetypeAndModKit(EWeaponArchetype Archetype, EParentModKit ModKit);
    
    UFUNCTION(BlueprintCallable)
    UPromodFireUpDataAsset* GetFireUpDataAsset(EFireUpType FireUpType);
    
};

