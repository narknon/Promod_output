#include "SMState_Base.h"

FSMState_Base::FSMState_Base() {
    this->bIsRootNode = false;
    this->bAlwaysUpdate = false;
    this->bEvalTransitionsOnStart = false;
    this->bDisableTickTransitionEvaluation = false;
    this->bStayActiveOnStateChange = false;
    this->bAllowParallelReentry = false;
}

