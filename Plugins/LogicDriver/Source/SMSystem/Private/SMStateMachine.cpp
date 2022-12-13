#include "SMStateMachine.h"

FSMStateMachine::FSMStateMachine() {
    this->bHasAdditionalLogic = false;
    this->bReuseCurrentState = false;
    this->bOnlyReuseIfNotEndState = false;
    this->bAllowIndependentTick = false;
    this->bCallReferenceTickOnManualUpdate = false;
    this->bReuseReference = false;
    this->bWaitForEndState = false;
    this->ReferencedStateMachineClass = NULL;
    this->ReferencedStateMachine = NULL;
    this->IsReferencedByInstance = NULL;
}

