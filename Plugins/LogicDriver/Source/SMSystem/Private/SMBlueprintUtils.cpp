#include "SMBlueprintUtils.h"
#include "Templates/SubclassOf.h"

class UObject;
class USMInstance;

USMInstance* USMBlueprintUtils::CreateStateMachineInstanceFromTemplate(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, USMInstance* Template) {
    return NULL;
}

USMInstance* USMBlueprintUtils::CreateStateMachineInstance(TSubclassOf<USMInstance> StateMachineClass, UObject* Context) {
    return NULL;
}

USMBlueprintUtils::USMBlueprintUtils() {
}

