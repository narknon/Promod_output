#include "BattalionCommandManager.h"

class APromodPlayerController;

void UBattalionCommandManager::Client_ChangeClassTo_Implementation(APromodPlayerController* PC, const EClassName& ClassName) {
}

UBattalionCommandManager::UBattalionCommandManager() {
    this->GameMode = NULL;
}

