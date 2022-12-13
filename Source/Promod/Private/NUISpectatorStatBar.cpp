#include "NUISpectatorStatBar.h"













UNUISpectatorStatBar::UNUISpectatorStatBar() {
    this->PlayerState = NULL;
    this->Character = NULL;
    this->ActualID = 0;
    this->ActualHealth = 0.00f;
    this->GrenadeCount = 0;
    this->SmokeCount = 0;
    this->Weapon = NULL;
    this->Switcher = NULL;
    this->LargeBarAvatar = NULL;
    this->SmallBarAvatar = NULL;
    this->bDead = false;
    this->bLowHealth = false;
    this->bCurrentlyViewed = false;
    this->NationNum = 0;
    this->bPrimaryEquipped = false;
}

