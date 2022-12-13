#include "SaveDataManager.h"

class USaveGame;

void USaveDataManager::SaveSync(USaveGame* SaveData, TEnumAsByte<SaveSlots> Slot) {
}

USaveGame* USaveDataManager::LoadSync(TEnumAsByte<SaveSlots> Slot) {
    return NULL;
}

USaveGame* USaveDataManager::GetSaveGameData(TEnumAsByte<SaveSlots> Slot) {
    return NULL;
}

FSaveDataInfo USaveDataManager::GetSaveDataInfo(TEnumAsByte<SaveSlots> Slot) {
    return FSaveDataInfo{};
}

USaveGame* USaveDataManager::CreateSaveDataFile(TEnumAsByte<SaveSlots> Slot) {
    return NULL;
}

USaveDataManager::USaveDataManager() {
}

