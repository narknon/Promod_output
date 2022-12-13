#include "SMNodeInstance.h"

class UObject;
class USMInstance;
class UTexture2D;
class USMStateMachineInstance;

bool USMNodeInstance::IsInEndState() const {
    return false;
}

bool USMNodeInstance::IsActive() const {
    return false;
}

bool USMNodeInstance::HasUpdated() const {
    return false;
}

float USMNodeInstance::GetTimeInState() const {
    return 0.0f;
}

USMInstance* USMNodeInstance::GetStateMachineInstance(bool bTopMostInstance) const {
    return NULL;
}

USMStateMachineInstance* USMNodeInstance::GetOwningStateMachineNodeInstance() const {
    return NULL;
}

FString USMNodeInstance::GetNodeName() const {
    return TEXT("");
}

FLinearColor USMNodeInstance::GetNodeIconTintColor_Implementation() const {
    return FLinearColor{};
}

FVector2D USMNodeInstance::GetNodeIconSize_Implementation() const {
    return FVector2D{};
}

UTexture2D* USMNodeInstance::GetNodeIcon_Implementation() const {
    return NULL;
}

FGuid USMNodeInstance::GetGuid() const {
    return FGuid{};
}

UObject* USMNodeInstance::GetContext() const {
    return NULL;
}

void USMNodeInstance::EvaluateGraphProperties() {
}

void USMNodeInstance::ConstructionScript_Implementation() {
}

USMNodeInstance::USMNodeInstance() {
    this->bAutoEvalExposedProperties = true;
    this->NodeIcon = NULL;
}

