#include "MonorailPath.h"
#include "Net/UnrealNetwork.h"
#include "Components/SplineComponent.h"

class ACargoCheckpoint;

void AMonorailPath::NetMulti_UpdateSpeedVariables_Implementation(const float InPassivePayloadSpeed, const float InFirstAttackerPayloadSpeed, const int32 InMaxSpeedIncreaseAttackers, const float InExtraAttackerPayloadSpeed) {
}

ACargoCheckpoint* AMonorailPath::GetCheckpointActor(int32 CheckpointIdx) {
    return NULL;
}

void AMonorailPath::CheckSpawnPoints() {
}

void AMonorailPath::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMonorailPath, Monorail);
    DOREPLIFETIME(AMonorailPath, CheckpointActors);
}

AMonorailPath::AMonorailPath() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineMesh = NULL;
    this->Material = NULL;
    this->BaseSectionLength = 500.00f;
    this->ForwardAxis = ESplineMeshAxis::X;
    this->MonorailVerticalOffset = 100.00f;
    this->StationWaitTime = 10.00f;
    this->CarriageCount = 3;
    this->CarriageOffset = 1100.00f;
    this->CarriageRotationSpeed = 5.00f;
    this->bShowDebug = false;
    this->CheckpointClass = NULL;
    this->PassivePayloadSpeed = 0.25f;
    this->FirstAttackerPayloadSpeed = 1.00f;
    this->MaxSpeedIncreaseAttackers = 2;
    this->ExtraAttackerPayloadSpeed = 0.50f;
    this->DisableCargoTime = 5.00f;
    this->EnableCargoTime = 2.50f;
    this->InitializeCargoTime = 2.50f;
    this->ContestingScoreTickTime = 5.00f;
    this->ContestingScoreTick = 1.00f;
    this->bShowPreviewCheckpoints = false;
    this->Monorail = NULL;
    this->CargoFirstTeamProgressPoint = NULL;
    this->CargoEndPointProgressPoint = NULL;
    this->CargoGameMode = NULL;
}

