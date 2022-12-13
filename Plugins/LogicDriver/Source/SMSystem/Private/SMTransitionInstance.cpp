#include "SMTransitionInstance.h"

class USMStateInstance_Base;

void USMTransitionInstance::SetCanEvaluate(bool bValue) {
}

void USMTransitionInstance::OnTransitionShutdown_Implementation() {
}

void USMTransitionInstance::OnTransitionInitialized_Implementation() {
}

void USMTransitionInstance::OnTransitionEntered_Implementation() {
}

void USMTransitionInstance::GetTransitionInfo(FSMTransitionInfo& Transition) const {
}

USMStateInstance_Base* USMTransitionInstance::GetPreviousStateInstance() const {
    return NULL;
}

USMStateInstance_Base* USMTransitionInstance::GetNextStateInstance() const {
    return NULL;
}

bool USMTransitionInstance::GetCanEvaluate() const {
    return false;
}

bool USMTransitionInstance::CanEnterTransition_Implementation() const {
    return false;
}

USMTransitionInstance::USMTransitionInstance() {
    this->PriorityOrder = 0;
    this->bRunParallel = false;
    this->bEvalIfNextStateActive = true;
    this->bCanEvaluate = true;
    this->bCanEvaluateFromEvent = true;
    this->bCanEvalWithStartState = true;
}

