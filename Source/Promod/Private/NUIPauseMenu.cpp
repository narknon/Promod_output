#include "NUIPauseMenu.h"


void UNUIPauseMenu::SetChangeTeamCooldown(const float Cooldown) {
}

void UNUIPauseMenu::ResumeGame() {
}






void UNUIPauseMenu::ExitGame() {
}


void UNUIPauseMenu::ChooseLoadout() {
}

bool UNUIPauseMenu::CanChooseLoadout() {
    return false;
}






UNUIPauseMenu::UNUIPauseMenu() {
    this->GameModeType = EMapPackGamemode::Jumper;
    this->JumperGameMode = NULL;
    this->KillRunGameMode = NULL;
    this->SettingsVisible = false;
    this->ReportPlayerVisible = false;
    this->SavedLocationsVisible = false;
    this->LevelSelectVisible = false;
    this->CurrentChangeTeamCooldown = 0.00f;
}

