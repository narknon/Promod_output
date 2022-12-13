#include "NUIBombGameOverviewAvatar.h"

class ABombPlayerState;














ABombPlayerState* UNUIBombGameOverviewAvatar::GetPlayerState() {
    return NULL;
}

UNUIBombGameOverviewAvatar::UNUIBombGameOverviewAvatar() {
    this->PlayerState = NULL;
    this->AknowledgePlayerAliveState = false;
    this->BorderVisibility = ESlateVisibility::Visible;
    this->ReadyVisibility = ESlateVisibility::Visible;
}

