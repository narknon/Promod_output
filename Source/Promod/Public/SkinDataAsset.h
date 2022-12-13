#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SkinEntity.h"
#include "EWeaponType.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponCondition.h"
#include "SkinDataAsset.generated.h"

class UTexture2D;
class UMaterialInstance;
class URarityColourDataAsset;
class UObject;

UCLASS(Blueprintable)
class USkinDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkinEntity> skins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URarityColourDataAsset* RarityColoursDataAsset;
    
    USkinDataAsset();
    UFUNCTION(BlueprintCallable)
    void ReplaceSkinTexture(const FString& SkinId, EWeaponType WeaponType, UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void MarkObjectDirty(UObject* TextureAsset);
    
    UFUNCTION(BlueprintCallable)
    FSkinEntity GetSkinFromIDOnly(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    FSkinEntity GetSkinFromIDAndWeaponType(const FString& ID, EWeaponType WeaponType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSkinEntity> GetSkinEntriesForWeapon(EWeaponType WeaponType, bool IgnoreLevelZeroSkins, bool IncludeKickstarter);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSkinEntity> GetSkinEntriesForUnlockLevel(int32 UnlockLevel);
    
    UFUNCTION(BlueprintCallable)
    FSkinEntity GetSkin(const FString& ID, EWeaponType Type);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSkinEntity> GetNextUnlockEntries(int32 CurrentLevel);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstance* GetMaterialFromPath(FSoftObjectPath skin);
    
    UFUNCTION(BlueprintCallable)
    FText GetConditionDisplayText(EWeaponCondition WeaponCondition);
    
    UFUNCTION(BlueprintCallable)
    void CleanWeaponSkinNames();
    
};

