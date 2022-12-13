#include "JumperCourse.h"
#include "Components/SplineComponent.h"

class APromodCharacter;



void AJumperCourse::SetCheckpoint(APromodCharacter* PromodChar, int32 CheckpointIdx) {
}

void AJumperCourse::ResetPlayer(APromodCharacter* CharacterToReset) {
}

void AJumperCourse::RefreshData() {
}

void AJumperCourse::RefreshCourse() {
}


bool AJumperCourse::CanPassCheckpoint(int32 CheckpointIdx) {
    return false;
}


AJumperCourse::AJumperCourse() {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Gate = NULL;
    this->VisibleCheckpoints = 3;
    this->GateIndex = 3;
    this->bShowRotationDebug = false;
    this->RaceCompletedEvent = NULL;
    this->RaceCompletedEvent1 = NULL;
    this->RaceCompletedEvent2 = NULL;
    this->RaceCompletedEvent3 = NULL;
    this->RaceCompletedEventPro = NULL;
    this->AmountOfStopsFromEndTickTock = 3;
}

