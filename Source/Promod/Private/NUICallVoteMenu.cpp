#include "NUICallVoteMenu.h"

class ABattalionPlayerState;

void UNUICallVoteMenu::VoteToSurrender() {
}

void UNUICallVoteMenu::VoteToKickPlayer(ABattalionPlayerState* Player) {
}

void UNUICallVoteMenu::VoteForTimeout(bool bIsTactical) {
}

void UNUICallVoteMenu::ViewProfile(ABattalionPlayerState* Player) {
}

void UNUICallVoteMenu::UnmuteChatAllPlayers(TArray<ABattalionPlayerState*> Players) {
}

void UNUICallVoteMenu::UnmuteAllPlayers(TArray<ABattalionPlayerState*> Players) {
}

void UNUICallVoteMenu::ToggleMutePlayer(ABattalionPlayerState* Player) {
}

void UNUICallVoteMenu::ToggleMuteChatPlayer(ABattalionPlayerState* Player) {
}








void UNUICallVoteMenu::OfferSurrender() {
}

void UNUICallVoteMenu::MuteChatAllPlayers(TArray<ABattalionPlayerState*> Players) {
}

void UNUICallVoteMenu::MuteAllPlayers(TArray<ABattalionPlayerState*> Players) {
}

void UNUICallVoteMenu::GetTimeoutOptions() {
}

void UNUICallVoteMenu::GetPlayersToView() {
}

void UNUICallVoteMenu::GetPlayersToReport() {
}

void UNUICallVoteMenu::GetPlayersToMuteChat() {
}

void UNUICallVoteMenu::GetPlayersToMute() {
}

void UNUICallVoteMenu::GetPlayersToKick() {
}

void UNUICallVoteMenu::BackToPauseMenu() {
}

UNUICallVoteMenu::UNUICallVoteMenu() {
    this->TimeoutTypes.AddDefaulted(2);
    this->Title = NULL;
}

