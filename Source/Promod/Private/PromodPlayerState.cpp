#include "PromodPlayerState.h"
#include "Net/UnrealNetwork.h"

class APromodPlayerController;

void APromodPlayerState::Timer_FireUpComboEnded() {
}

void APromodPlayerState::Server_SetCurrentKillConfirmPoints_Implementation(const int32 Val) {
}

void APromodPlayerState::Server_RegisterPlayerMatchScore_Implementation(int32 MatchScore) {
}

void APromodPlayerState::OnRep_LastChosenClass() {
}

void APromodPlayerState::OnRep_FireupState_Ultimate(FFireupState PreviousState) {
}

void APromodPlayerState::OnRep_FireupState_Quick(FFireupState PreviousState) {
}

void APromodPlayerState::OnRep_CurrentActionPrompt(EPromodActionPrompt LastActionPrompt) {
}

void APromodPlayerState::NetMulti_PlayerActivatedFireup_Implementation() {
}

void APromodPlayerState::NetMulti_PlayerAbortedFireup_Implementation(APromodPlayerController* PC) {
}

void APromodPlayerState::NetMulti_FireUpEnded_Implementation() {
}

void APromodPlayerState::NetMulti_FireupDurationRefreshed_Implementation() {
}

void APromodPlayerState::NetMulti_FireUpChanged_Implementation(EFireUpType NewFireUp, EFireUpSlotType FireUpSlot) {
}

FString APromodPlayerState::GetPlayerNameTrimmed(const int32 TrimAt) const {
    return TEXT("");
}

APromodPlayerController* APromodPlayerState::GetOwningController() {
    return NULL;
}

APromodPlayerController* APromodPlayerState::GetLocalController() {
    return NULL;
}

bool APromodPlayerState::GetCanSeeHealthbars() {
    return false;
}

void APromodPlayerState::Client_UpdateFireUpPercentage_Implementation(float NewPercentage, bool bAvailable, EFireUpSlotType FireUpSlotType) {
}

void APromodPlayerState::AwardQuickUtil() {
}

void APromodPlayerState::ApplyClass() {
}

void APromodPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APromodPlayerState, LastChosenClass);
    DOREPLIFETIME(APromodPlayerState, PendingClassChange);
    DOREPLIFETIME(APromodPlayerState, bShootoutEliminated);
    DOREPLIFETIME(APromodPlayerState, KillsThisRound);
    DOREPLIFETIME(APromodPlayerState, FireupState_Ultimate);
    DOREPLIFETIME(APromodPlayerState, FireupState_Quick);
    DOREPLIFETIME(APromodPlayerState, TimeUntilQuickUtilAward);
    DOREPLIFETIME(APromodPlayerState, CurrentActionPrompt);
    DOREPLIFETIME(APromodPlayerState, CurrentKillConfirmPoints);
}

APromodPlayerState::APromodPlayerState() {
    this->FireUpScoreProgress = 0.00f;
    this->bShootoutEliminated = false;
    this->KillsThisRound = 0;
    this->bHasSpawnedWithClass = false;
    this->TimeUntilQuickUtilAward = -1.00f;
    this->CurrentActionPrompt = EPromodActionPrompt::AP_None;
    this->CurrentKillConfirmPoints = 0;
}

