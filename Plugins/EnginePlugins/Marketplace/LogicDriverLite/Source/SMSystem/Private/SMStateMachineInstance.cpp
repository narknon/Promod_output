#include "SMStateMachineInstance.h"

class USMStateInstance_Base;

void USMStateMachineInstance::OnStateShutdown_Implementation() {
}

void USMStateMachineInstance::OnStateMachineCompleted_Implementation() {
}

void USMStateMachineInstance::OnStateInitialized_Implementation() {
}

void USMStateMachineInstance::OnEndStateReached_Implementation() {
}

void USMStateMachineInstance::GetEntryStates(TArray<USMStateInstance_Base*>& EntryStates) const {
}

void USMStateMachineInstance::GetAllStateInstances(TArray<USMStateInstance_Base*>& StateInstances) const {
}

USMStateMachineInstance::USMStateMachineInstance() {
    this->bWaitForEndState = false;
    this->bReuseCurrentState = false;
    this->bReuseIfNotEndState = false;
}

