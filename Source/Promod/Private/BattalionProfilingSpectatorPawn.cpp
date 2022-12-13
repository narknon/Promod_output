#include "BattalionProfilingSpectatorPawn.h"
#include "Templates/SubclassOf.h"

class AActor;

void ABattalionProfilingSpectatorPawn::StopProfile() {
}

void ABattalionProfilingSpectatorPawn::StartProfile() {
}

void ABattalionProfilingSpectatorPawn::SpawnProfilingActor(TSubclassOf<AActor> SpawnClass, FTransform SpawnTransform) {
}

void ABattalionProfilingSpectatorPawn::SendProfileMessage(const FString& Message) {
}

void ABattalionProfilingSpectatorPawn::DestroyBots() {
}

void ABattalionProfilingSpectatorPawn::CreateSmokeGrenade(FTransform SpawnTransform) {
}

void ABattalionProfilingSpectatorPawn::CreateGrenade(FTransform SpawnTransform) {
}

void ABattalionProfilingSpectatorPawn::CreateBot(int32 TeamNum, bool IsStationary) {
}

void ABattalionProfilingSpectatorPawn::CleanupActorsOfClass(TSubclassOf<AActor> CleanupClass) {
}

ABattalionProfilingSpectatorPawn::ABattalionProfilingSpectatorPawn() {
    this->AutoProfile = false;
    this->RunningProfile = false;
    this->SplineMoving = false;
    this->CurrentMovementSpline = NULL;
    this->SplineMovementTime = 0.00f;
    this->SplineMovementSpeed = 0.00f;
    this->SplineLerpSpeed = 0.00f;
    this->GrenadeClass = NULL;
    this->SmokeGrenadeClass = NULL;
    this->GrenadeSpawning = false;
    this->GrenadeSpawnTimer = 0.00f;
    this->SmokeGrenadeSpawnTimer = 0.00f;
}

