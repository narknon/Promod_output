#include "BattalionLoadoutSystem.h"
#include "Net/UnrealNetwork.h"

void ABattalionLoadoutSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionLoadoutSystem, DeckTemplates);
    DOREPLIFETIME(ABattalionLoadoutSystem, CardTemplates);
}

ABattalionLoadoutSystem::ABattalionLoadoutSystem() {
}

