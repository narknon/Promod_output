#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelSelectMapEntity.h"
#include "MapStarTimes.h"
#include "EClassName.h"
#include "MainMenuLevelSelectMapDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMainMenuLevelSelectMapDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapPackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelSelectMapEntity> Maps;
    
    UMainMenuLevelSelectMapDataAsset();
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetUnHoveredTextureFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetStatNameFromMapName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetStatNameFromDisplayName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FMapStarTimes GetStarTimesFromDisplayName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetMapNamesInPack();
    
    UFUNCTION(BlueprintCallable)
    EClassName GetLoadoutClassTypeFromDisplayName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FLevelSelectMapEntity GetLastMapInPack();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetHoveredTextureFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetDisplayNameFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool DoesMapExistInPack(const FString& MapName);
    
};

