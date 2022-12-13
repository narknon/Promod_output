#include "BattalionCharacterMovementBase.h"

void UBattalionCharacterMovementBase::GetSimpleFloorInfo(FVector& ImpactPoint, FVector& Normal) const {
}

UBattalionCharacterMovementBase::UBattalionCharacterMovementBase() {
    this->WantedStance = EStanceType::ST_Standing;
    this->LadderClimbing = NULL;
    this->ProneBlocked = false;
    this->LeftProneBlocked = false;
    this->RightProneBlocked = false;
    this->MaxSprintEnergy = 0.00f;
    this->SprintEnergyRequiredForRun = 0.00f;
    this->InfectionSpeedModfier = 1.50f;
}

