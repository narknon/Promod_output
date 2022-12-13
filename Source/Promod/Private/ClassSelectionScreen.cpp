#include "ClassSelectionScreen.h"

FLoadoutData UClassSelectionScreen::FindWeaponLoadout(EClassName SelectedClass) {
    return FLoadoutData{};
}

UClassSelectionScreen::UClassSelectionScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsAssaultDisabled = false;
    this->bIsBreacherDisabled = false;
    this->bIsReconDisabled = false;
    this->pOwningPlayercontroller = NULL;
    this->pGameState = NULL;
    this->KitSavedData = NULL;
}

