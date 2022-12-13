#include "HardpointGameMode.h"
#include "AkComponent.h"

class APromodPlayerState;
class APlayerController;
class AActor;
class AHardpointZone;

void AHardpointGameMode::ZoneContested(TArray<APromodPlayerState*> ContestingPlayers) {
}

void AHardpointGameMode::ZoneCaptured(TArray<APromodPlayerState*> CapturingPlayers) {
}

void AHardpointGameMode::ResetScoreTick() {
}

void AHardpointGameMode::PlayMatchStartingSound(TArray<APlayerController*> Players) {
}

void AHardpointGameMode::PlayGameStartSoundDelay(TArray<APlayerController*> Players) {
}

void AHardpointGameMode::PlayGameInstructionsSoundDelay(TArray<APlayerController*> Players) {
}

void AHardpointGameMode::PlayerExitedFriendlyZone(APromodPlayerState* ExitingPlayer) {
}

void AHardpointGameMode::PlayerEnteredFriendlyZone(APromodPlayerState* EnteringPlayer) {
}

void AHardpointGameMode::OrderActorsByDistance(AActor* PointOfInterest, TArray<AActor*> inArray, TArray<AActor*>& OutArray) {
}

void AHardpointGameMode::NetMulti_PlayStartGameInstructionsSound_Implementation() {
}

void AHardpointGameMode::NetMulti_PlayPointUnlockedSound_Implementation() {
}

void AHardpointGameMode::NetMulti_PlayPointMovingShortlySound_Implementation() {
}

void AHardpointGameMode::NetMulti_PlayPointContestedSound_Implementation() {
}

void AHardpointGameMode::NetMulti_PlayMatchStartingSound_Implementation() {
}

void AHardpointGameMode::NetMulti_PlayGameStartSound_Implementation() {
}

void AHardpointGameMode::NetMulti_PlayFirstPointSpawnedSound_Implementation() {
}

bool AHardpointGameMode::IsMatchInProgress() {
    return false;
}

AHardpointZone* AHardpointGameMode::GetNextZone() {
    return NULL;
}

AHardpointZone* AHardpointGameMode::GetActiveZone() {
    return NULL;
}

void AHardpointGameMode::ActivateNextZone() {
}

AHardpointGameMode::AHardpointGameMode() {
    this->FirstHardpointWaitTime = 15.00f;
    this->WinOnTeamEmptyShootout = false;
    this->HardpointCycleTime = 60.00f;
    this->PreviewNextHardpointTime = 15.00f;
    this->HardpointScoreInterval = 1.00f;
    this->HardpointScorePerTick = 1.00f;
    this->PreShootoutTime = 5.00f;
    this->bAllowOvertime = false;
    this->HardpointOvertimeRoundTime = 180.00f;
    this->HardpointOvertimeScoreLimit = 50.00f;
    this->HardpointMarkerTime = 180.00f;
    this->bUsingCustomShootout = false;
    this->CurrentZoneIndex = 0;
    this->CurrentActiveZone = NULL;
    this->NextZone = NULL;
    this->LastRoundEndTime = 0.00f;
    this->DefaultAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultkComponent"));
    this->StartRoundEndMusic = NULL;
    this->StopRoundEndMusic = NULL;
    this->OvertimeAnnouncerSound = NULL;
    this->StopSoundTime = 5.00f;
    this->HardpointGameState = NULL;
}

