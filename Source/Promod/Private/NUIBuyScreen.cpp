#include "NUIBuyScreen.h"

void UNUIBuyScreen::SetRequestedFromPauseMenu(bool bFromPauseMenu) {
}







void UNUIBuyScreen::Close() {
}

UNUIBuyScreen::UNUIBuyScreen() {
    this->WeaponBought = false;
    this->RequestedFromPauseMenu = false;
    this->MaxAssaultLoadouts = 0;
    this->MaxSpecOpsLoadouts = 0;
    this->MaxSniperLoadouts = 0;
    this->CurrentAssault = 0;
    this->CurrentSpecOps = 0;
    this->CurrentSnipers = 0;
}

