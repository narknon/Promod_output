#include "TUTGameMode.h"

class APlayerController;

APlayerController* ATUTGameMode::GetActivePlayerController() const {
    return NULL;
}

ATUTGameMode::ATUTGameMode() {
    this->MapEditorControllerClass = NULL;
    this->MapEditorControllerRef = NULL;
    this->ActivePlayerController = NULL;
}

