#include "SMConduitInstance.h"

void USMConduitInstance::SetCanEvaluate(bool bValue) {
}

void USMConduitInstance::OnConduitShutdown_Implementation() {
}

void USMConduitInstance::OnConduitInitialized_Implementation() {
}

void USMConduitInstance::OnConduitEntered_Implementation() {
}

bool USMConduitInstance::GetCanEvaluate() const {
    return false;
}

bool USMConduitInstance::CanEnterTransition_Implementation() const {
    return false;
}

USMConduitInstance::USMConduitInstance() {
    this->bEvalWithTransitions = false;
    this->bCanEvaluate = true;
}

