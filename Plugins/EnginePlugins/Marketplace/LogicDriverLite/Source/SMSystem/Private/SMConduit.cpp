#include "SMConduit.h"

FSMConduit::FSMConduit() {
    this->bCanEnterTransition = false;
    this->bCanEvaluate = false;
    this->bEvalWithTransitions = false;
}

