#include "NUIPrompt.h"


void UNUIPrompt::CancelClickedHandler() {
}

void UNUIPrompt::AcceptClickedHandler() {
}

UNUIPrompt::UNUIPrompt() {
    this->bAccepted = false;
    this->TitleText = NULL;
    this->MessageContainer = NULL;
    this->MessageText = NULL;
    this->AcceptButton = NULL;
    this->CancelButton = NULL;
    this->CancelContainer = NULL;
    this->SmokeBackdrop = NULL;
}

