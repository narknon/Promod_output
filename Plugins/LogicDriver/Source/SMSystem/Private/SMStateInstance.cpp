#include "SMStateInstance.h"
#include "Templates/SubclassOf.h"

class USMStateInstance;
class USMStateInstance_Base;

void USMStateInstance::OnStateShutdown_Implementation() {
}

void USMStateInstance::OnStateInitialized_Implementation() {
}

int32 USMStateInstance::GetStateStackCount() const {
    return 0;
}

USMStateInstance_Base* USMStateInstance::GetStateInStackByClass(TSubclassOf<USMStateInstance> StateClass, bool bIncludeChildren) const {
    return NULL;
}

USMStateInstance_Base* USMStateInstance::GetStateInStack(int32 Index) const {
    return NULL;
}

USMStateInstance_Base* USMStateInstance::GetStackOwnerInstance() const {
    return NULL;
}

void USMStateInstance::GetAllStateStackInstances(TArray<USMStateInstance_Base*>& StateStackInstances) const {
}

void USMStateInstance::GetAllStatesInStackOfClass(TSubclassOf<USMStateInstance> StateClass, TArray<USMStateInstance_Base*>& StateStackInstances, bool bIncludeChildren) const {
}

USMStateInstance::USMStateInstance() {
}

