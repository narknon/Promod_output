#include "WorldCollapse.h"

class APromodPlayerState;
class ABombMode_Bomb;

void AWorldCollapse::NetMulti_OnMatchStateStarted_Implementation(const FName& NewState, bool IsJoinInProgress) {
}

void AWorldCollapse::NetMulti_OnBombPlanted_Implementation(APromodPlayerState* InstigatorPS, ABombMode_Bomb* Bomb) {
}

void AWorldCollapse::NetMulti_OnBombDefused_Implementation(APromodPlayerState* InstigatorPS, ABombMode_Bomb* Bomb) {
}

void AWorldCollapse::Client_StartAtRadius_Implementation(float Radius) {
}





AWorldCollapse::AWorldCollapse() {
    this->WorldCollapseType = EWorldCollapseType::Bomb;
}

