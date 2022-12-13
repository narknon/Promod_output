#include "BattalionGameViewport.h"

bool UBattalionGameViewport::IsShowingLoadingScreen() {
    return false;
}

UBattalionGameViewport::UBattalionGameViewport() {
    this->BattInstance = NULL;
    this->CurrentPrompt = NULL;
}

