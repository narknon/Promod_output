#include "SMStateInstance_Base.h"

class USMStateInstance_Base;
class USMTransitionInstance;

bool USMStateInstance_Base::SwitchToLinkedState(USMStateInstance_Base* NextStateInstance, bool bRequireTransitionToPass) {
    return false;
}

void USMStateInstance_Base::SetActive(bool bValue) {
}

void USMStateInstance_Base::OnStateUpdate_Implementation(float DeltaSeconds) {
}

void USMStateInstance_Base::OnStateEnd_Implementation() {
}

void USMStateInstance_Base::OnStateBegin_Implementation() {
}

void USMStateInstance_Base::OnRootStateMachineStop_Implementation() {
}

void USMStateInstance_Base::OnRootStateMachineStart_Implementation() {
}

bool USMStateInstance_Base::IsStateMachine() const {
    return false;
}

USMTransitionInstance* USMStateInstance_Base::GetTransitionToTake() const {
    return NULL;
}

USMTransitionInstance* USMStateInstance_Base::GetTransitionByIndex(int32 Index) const {
    return NULL;
}

void USMStateInstance_Base::GetStateInfo(FSMStateInfo& State) const {
}

bool USMStateInstance_Base::GetOutgoingTransitions(TArray<USMTransitionInstance*>& Transitions, bool bExcludeAlwaysFalse) const {
    return false;
}

USMStateInstance_Base* USMStateInstance_Base::GetNextStateByTransitionIndex(int32 Index) const {
    return NULL;
}

bool USMStateInstance_Base::GetIncomingTransitions(TArray<USMTransitionInstance*>& Transitions, bool bExcludeAlwaysFalse) const {
    return false;
}

void USMStateInstance_Base::EvaluateTransitions() {
}

USMStateInstance_Base::USMStateInstance_Base() {
    this->bEvalGraphsOnStart = true;
    this->bEvalGraphsOnUpdate = false;
    this->bEvalGraphsOnEnd = false;
    this->bEvalGraphsOnInitialize = true;
    this->bEvalGraphsOnRootStateMachineStart = false;
    this->bEvalGraphsOnRootStateMachineStop = false;
    this->bAlwaysUpdate = false;
    this->bDisableTickTransitionEvaluation = false;
    this->bDefaultToParallel = false;
    this->bAllowParallelReentry = false;
    this->bStayActiveOnStateChange = false;
    this->bEvalTransitionsOnStart = false;
    this->bExcludeFromAnyState = false;
}

