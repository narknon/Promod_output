#include "PromodCrosshair.h"

void UPromodCrosshair::SetCrosshairType(const ECrosshairType NewCrosshairType) {
}


UPromodCrosshair::UPromodCrosshair() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentCrosshairType = ECrosshairType::ECT_Standard;
}

