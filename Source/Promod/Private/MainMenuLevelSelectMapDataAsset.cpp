#include "MainMenuLevelSelectMapDataAsset.h"

class UTexture2D;

UTexture2D* UMainMenuLevelSelectMapDataAsset::GetUnHoveredTextureFromName(const FString& Name) {
    return NULL;
}

FString UMainMenuLevelSelectMapDataAsset::GetStatNameFromMapName(const FString& Name) {
    return TEXT("");
}

FString UMainMenuLevelSelectMapDataAsset::GetStatNameFromDisplayName(const FString& Name) {
    return TEXT("");
}

FMapStarTimes UMainMenuLevelSelectMapDataAsset::GetStarTimesFromDisplayName(const FString& Name) {
    return FMapStarTimes{};
}

TArray<FString> UMainMenuLevelSelectMapDataAsset::GetMapNamesInPack() {
    return TArray<FString>();
}

EClassName UMainMenuLevelSelectMapDataAsset::GetLoadoutClassTypeFromDisplayName(const FString& Name) {
    return EClassName::ASSAULT;
}

FLevelSelectMapEntity UMainMenuLevelSelectMapDataAsset::GetLastMapInPack() {
    return FLevelSelectMapEntity{};
}

UTexture2D* UMainMenuLevelSelectMapDataAsset::GetHoveredTextureFromName(const FString& Name) {
    return NULL;
}

FString UMainMenuLevelSelectMapDataAsset::GetDisplayNameFromName(const FString& Name) {
    return TEXT("");
}

bool UMainMenuLevelSelectMapDataAsset::DoesMapExistInPack(const FString& MapName) {
    return false;
}

UMainMenuLevelSelectMapDataAsset::UMainMenuLevelSelectMapDataAsset() {
    this->bIsEnabled = true;
}

