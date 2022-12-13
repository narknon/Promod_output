#include "NUISpectatorTeamLoadout.h"







UNUISpectatorTeamLoadout::UNUISpectatorTeamLoadout() {
    this->Team = -1;
    this->Nation = ENationType::Nation_FRIENDLY;
    this->TeamIconWidget = NULL;
    this->ClassStackWidgetClass = NULL;
    this->AccessoryStackWidgetClass = NULL;
    this->PlayerStateLeftWidgetClass = NULL;
    this->PlayerStateRightWidgetClass = NULL;
}

