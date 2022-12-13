#include "JumperMapPackManager.h"

class UTexture2D;
class UMainMenuLevelSelectMapDataAsset;

UTexture2D* UJumperMapPackManager::GetUnHoveredTextureFromName(const FString& Name) {
    return NULL;
}

FString UJumperMapPackManager::GetStatNameFromMapName(const FString& Name) {
    return TEXT("");
}

FString UJumperMapPackManager::GetStatNameFromDisplayName(const FString& Name) {
    return TEXT("");
}

FString UJumperMapPackManager::GetPackNameFromMapName(const FString& MapName) {
    return TEXT("");
}

UMainMenuLevelSelectMapDataAsset* UJumperMapPackManager::GetPackFromName(const FString& PackName) {
    return NULL;
}

FString UJumperMapPackManager::GetMapPackFromMapUniqueID(const FString& UniqueID) {
    return TEXT("");
}

UTexture2D* UJumperMapPackManager::GetHoveredTextureFromName(const FString& Name) {
    return NULL;
}

FString UJumperMapPackManager::GetDisplayNameFromName(const FString& Name) {
    return TEXT("");
}

UJumperMapPackManager::UJumperMapPackManager() {
    this->TutorialMapsDataAsset = NULL;
}

