#include "NUIMatchResultScreen.h"

void UNUIMatchResultScreen::VoteForMapMode(int32 Index) {
}




FMapModeVoteInfo UNUIMatchResultScreen::GetWinningVote() {
    return FMapModeVoteInfo{};
}

bool UNUIMatchResultScreen::GetVoteIsLockedIn(int32 Index) {
    return false;
}

int32 UNUIMatchResultScreen::GetMatchResult() {
    return 0;
}

int32 UNUIMatchResultScreen::GetCurrentVoteCount(int32 Index) {
    return 0;
}

int32 UNUIMatchResultScreen::GetCurrentGameEndTime() {
    return 0;
}

bool UNUIMatchResultScreen::GetAnyVoteIsLockedIn() {
    return false;
}


UNUIMatchResultScreen::UNUIMatchResultScreen() {
    this->bExperienceAwarded = false;
    this->GameState = NULL;
    this->HasVoted = false;
    this->MatchResult = 0;
}

