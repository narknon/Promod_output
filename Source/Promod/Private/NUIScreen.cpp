#include "NUIScreen.h"

class UWidget;
class UBattalionOnline;
class UNUIHeader;

void UNUIScreen::StartExit(bool Forward) {
}

void UNUIScreen::StartEnter(bool Forward) {
}

void UNUIScreen::Reset_Implementation() {
}


void UNUIScreen::OnExited() {
}

void UNUIScreen::OnEntered() {
}

bool UNUIScreen::IsInputEnabled() const {
    return false;
}

bool UNUIScreen::IsCurrentScreen() const {
    return false;
}

bool UNUIScreen::HasLostControllerFocus_Implementation() const {
    return false;
}

void UNUIScreen::GoTo(ENUIScreen screen, bool Forward) {
}

void UNUIScreen::GoBack_Implementation() {
}

int32 UNUIScreen::GetZOrder_Implementation() {
    return 0;
}

UWidget* UNUIScreen::GetScreenDefaultWidget_Implementation() const {
    return NULL;
}

UBattalionOnline* UNUIScreen::GetOnline() {
    return NULL;
}

UNUIHeader* UNUIScreen::GetHeader() {
    return NULL;
}

void UNUIScreen::ExitFinished() {
}

void UNUIScreen::EnterFinished() {
}

void UNUIScreen::CreateConfirmExitPrompt() {
}

bool UNUIScreen::CanBeRemovedFromViewport_Implementation() {
    return false;
}






UNUIScreen::UNUIScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->IsEntering = false;
    this->CurrentAnalogValue = 0.00f;
    this->bAllowedToNavigate = true;
    this->IsExiting = false;
    this->ShouldBeRemovedFromViewport = false;
    this->PreviousScreen = NULL;
    this->BattInstance = NULL;
    this->BattSettings = NULL;
}

