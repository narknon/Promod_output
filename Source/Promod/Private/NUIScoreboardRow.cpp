#include "NUIScoreboardRow.h"

class ABattalionPlayerState;

void UNUIScoreboardRow::Unhighlight() {
}

void UNUIScoreboardRow::Unfocus() {
}

void UNUIScoreboardRow::SetPlayerState(ABattalionPlayerState* NewPlayerState) {
}

void UNUIScoreboardRow::SetBackgroundColor(FLinearColor NewColor) {
}

void UNUIScoreboardRow::Select() {
}







bool UNUIScoreboardRow::IsPlayerTalking() {
    return false;
}

bool UNUIScoreboardRow::IsPlayerOnSameTeam() {
    return false;
}

bool UNUIScoreboardRow::IsPlayerMuted() {
    return false;
}

bool UNUIScoreboardRow::IsPlayerABot() {
    return false;
}

void UNUIScoreboardRow::Highlight() {
}

void UNUIScoreboardRow::Focus() {
}

UNUIScoreboardRow::UNUIScoreboardRow() {
    this->ParentWidget = NULL;
    this->PlayerState = NULL;
    this->PlayerLatencyValue = 0;
    this->PlayerId = 0;
    this->bHighlighted = false;
    this->bFocused = false;
    this->bDev = false;
    this->LevelIcon = NULL;
}

