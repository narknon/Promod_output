#include "NUIWelcomeScreen.h"

void UNUIWelcomeScreen::StartPlayfabLogin() {
}



void UNUIWelcomeScreen::OnPlayFabLoginCompleted(int32 ControllerId, bool bSuccess) {
}



void UNUIWelcomeScreen::Login(int32 ControllerId) {
}

bool UNUIWelcomeScreen::IsPlayerLogedIn() {
    return false;
}

FString UNUIWelcomeScreen::GetUniquePlayerId() {
    return TEXT("");
}

UNUIWelcomeScreen::UNUIWelcomeScreen() {
    this->PrivacyAccepted = false;
    this->OnPrivacyScreen = false;
    this->PrivacyPrompt = NULL;
    this->PromptContainer = NULL;
}

