#include "MapPackManager.h"

class UTexture2D;
class UMainMenuLevelSelectMapDataAsset;

UTexture2D* UMapPackManager::GetUnHoveredTextureFromName(const FString& Name) {
    return NULL;
}

FString UMapPackManager::GetStatNameFromMapName(const FString& Name) {
    return TEXT("");
}

FString UMapPackManager::GetStatNameFromDisplayName(const FString& Name) {
    return TEXT("");
}

FString UMapPackManager::GetPackNameFromMapName(const FString& MapName) {
    return TEXT("");
}

UMainMenuLevelSelectMapDataAsset* UMapPackManager::GetPackFromName(const FString& PackName) {
    return NULL;
}

FLevelSelectMapEntity UMapPackManager::GetNextMapFromCurrentMapName(const FString& MapName) {
    return FLevelSelectMapEntity{};
}

FString UMapPackManager::GetMapPackFromMapUniqueID(const FString& UniqueID) {
    return TEXT("");
}

FLevelSelectMapEntity UMapPackManager::GetMapFromMapName(const FString& MapName) {
    return FLevelSelectMapEntity{};
}

EClassName UMapPackManager::GetLoadoutClassTypeFromDisplayName(const FString& Name) {
    return EClassName::ASSAULT;
}

UTexture2D* UMapPackManager::GetHoveredTextureFromName(const FString& Name) {
    return NULL;
}

FString UMapPackManager::GetDisplayNameFromName(const FString& Name) {
    return TEXT("");
}

bool UMapPackManager::DoesMapExist(const FString& MapName) {
    return false;
}

UMapPackManager::UMapPackManager() {
    this->TutorialMapsDataAsset = NULL;
}

