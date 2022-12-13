#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelSelectMapEntity.h"
#include "EClassName.h"
#include "MapPackManager.generated.h"

class UMainMenuLevelSelectMapDataAsset;
class UTexture2D;

UCLASS(Blueprintable)
class UMapPackManager : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMainMenuLevelSelectMapDataAsset*> MapPacks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMainMenuLevelSelectMapDataAsset* TutorialMapsDataAsset;
    
public:
    UMapPackManager();
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetUnHoveredTextureFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetStatNameFromMapName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetStatNameFromDisplayName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetPackNameFromMapName(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    UMainMenuLevelSelectMapDataAsset* GetPackFromName(const FString& PackName);
    
    UFUNCTION(BlueprintCallable)
    FLevelSelectMapEntity GetNextMapFromCurrentMapName(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    FString GetMapPackFromMapUniqueID(const FString& UniqueID);
    
    UFUNCTION(BlueprintCallable)
    FLevelSelectMapEntity GetMapFromMapName(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    EClassName GetLoadoutClassTypeFromDisplayName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetHoveredTextureFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetDisplayNameFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool DoesMapExist(const FString& MapName);
    
};

