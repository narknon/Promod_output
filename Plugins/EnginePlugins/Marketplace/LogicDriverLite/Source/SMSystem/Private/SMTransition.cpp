#include "SMTransition.h"

FSMTransition::FSMTransition() {
    this->Priority = 0;
    this->bCanEnterTransition = false;
    this->bCanEnterTransitionFromEvent = false;
    this->bIsEvaluating = false;
    this->bCanEvaluate = false;
    this->bCanEvaluateFromEvent = false;
    this->bRunParallel = false;
    this->bEvalIfNextStateActive = false;
    this->bCanEvalWithStartState = false;
    this->bAlwaysFalse = false;
    this->ConditionalEvaluationType = ESMConditionalEvaluationType::SM_Graph;
}

