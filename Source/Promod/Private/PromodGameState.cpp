#include "PromodGameState.h"
#include "Net/UnrealNetwork.h"

class APromodClassSettings;
class APromodPlayerState;
class ABombMode_Bomb;
class UPromodTeam;
class AActor;

void APromodGameState::SpawnVFXAtLocationOnAllClients(FName VFXName, FVector Location) {
}

void APromodGameState::SortPlayerListsForShootout() {
}

void APromodGameState::Multicast_SpawnVFXAtLocation_Implementation(FName VFXName, FVector Location) {
}

void APromodGameState::Multicast_DespawnAllVFX_Implementation() {
}

void APromodGameState::Multicast_BroadcastBombPlanted_Implementation(APromodPlayerState* PlanterPS, ABombMode_Bomb* Bomb) {
}

void APromodGameState::Multicast_BroadcastBombDefused_Implementation(APromodPlayerState* DefuserPS, ABombMode_Bomb* Bomb) {
}

bool APromodGameState::IsMatchPoint() {
    return false;
}

bool APromodGameState::IsCurrentlyInShootout() {
    return false;
}

UPromodTeam* APromodGameState::GetPromodTeam(int32 TeamIndex) {
    return NULL;
}

APromodClassSettings* APromodGameState::GetClassSettings() {
    return NULL;
}

TArray<AActor*> APromodGameState::GetActiveInteractableActors() {
    return TArray<AActor*>();
}

void APromodGameState::DespawnAllVFX() {
}

void APromodGameState::Client_ForceUpdateTeamScores_Implementation(int32 Team0Score, int32 Team1Score) {
}

void APromodGameState::ChooseNextTeam1Player() {
}

void APromodGameState::ChooseNextTeam0Player() {
}

void APromodGameState::ChooseNext1v1() {
}

void APromodGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APromodGameState, CleanClassSettings);
    DOREPLIFETIME(APromodGameState, FuseTime);
    DOREPLIFETIME(APromodGameState, ShootoutOrderedPlayerList_Team0);
    DOREPLIFETIME(APromodGameState, ShootoutOrderedPlayerList_Team1);
    DOREPLIFETIME(APromodGameState, NextShootoutPlayer_Team0);
    DOREPLIFETIME(APromodGameState, NextShootoutPlayer_Team1);
    DOREPLIFETIME(APromodGameState, bShouldFlashGrenadeBeBlockedBySmoke);
    DOREPLIFETIME(APromodGameState, NumRounds);
    DOREPLIFETIME(APromodGameState, ActiveInteractableActors);
    DOREPLIFETIME(APromodGameState, AssaultLimit);
    DOREPLIFETIME(APromodGameState, BreacherLimit);
    DOREPLIFETIME(APromodGameState, ReconLimit);
}

APromodGameState::APromodGameState() {
    this->CleanClassSettings = NULL;
    this->FuseTime = 0.00f;
    this->NumLives_Team0 = 0;
    this->NumLives_Team1 = 0;
    this->NextShootoutPlayer_Team0 = NULL;
    this->NextShootoutPlayer_Team1 = NULL;
    this->SmokeVFXOverridden = false;
    this->SmokeVFXName = TEXT("Smoke");
    this->bShouldFlashGrenadeBeBlockedBySmoke = false;
    this->NumRounds = 0;
    this->LeftScorePreShootout = 0;
    this->AssaultLimit = 99;
    this->BreacherLimit = 99;
    this->ReconLimit = 99;
}

