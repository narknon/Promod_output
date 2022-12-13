#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "JumperMapPackManager.generated.h"

class UTexture2D;
class UMainMenuLevelSelectMapDataAsset;

UCLASS(Blueprintable)
class UJumperMapPackManager : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMainMenuLevelSelectMapDataAsset*> MapPacks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMainMenuLevelSelectMapDataAsset* TutorialMapsDataAsset;
    
public:
    UJumperMapPackManager();
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
    FString GetMapPackFromMapUniqueID(const FString& UniqueID);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetHoveredTextureFromName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetDisplayNameFromName(const FString& Name);
    
};

