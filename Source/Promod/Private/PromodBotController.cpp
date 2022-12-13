#include "PromodBotController.h"

class UPromodBotSMInstance;

void APromodBotController::StopBehaviour() {
}

void APromodBotController::StartBehaviour() {
}

UPromodBotSMInstance* APromodBotController::GetStateMachineInstance() {
    return NULL;
}

APromodBotController::APromodBotController() {
    this->StateMachineInstance = NULL;
}

