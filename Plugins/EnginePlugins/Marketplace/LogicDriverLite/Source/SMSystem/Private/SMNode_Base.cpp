#include "SMNode_Base.h"

FSMNode_Base::FSMNode_Base() {
    this->TimeInState = 0.00f;
    this->bIsInEndState = false;
    this->bHasUpdated = false;
    this->DuplicateId = 0;
    this->OwningInstance = NULL;
    this->NodeInstance = NULL;
    this->NodeInstanceClass = NULL;
}

