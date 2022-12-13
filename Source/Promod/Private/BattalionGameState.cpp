#include "BattalionGameState.h"
#include "Net/UnrealNetwork.h"

class UBattalionTeam;
class ABattalionPlayerState;

void ABattalionGameState::OnRep_TeamDeckChanged() {
}

void ABattalionGameState::OnRep_MatchState(FName OldMatchState) {
}

void ABattalionGameState::OnRep_MatchIdChanged() {
}

void ABattalionGameState::OnRep_LastThrownStun() {
}

void ABattalionGameState::OnRep_LastThrownSmoke() {
}

void ABattalionGameState::OnRep_LastThrownGrenade() {
}

void ABattalionGameState::OnRep_LastThrownFlash() {
}

void ABattalionGameState::NotifyPlayersOfForcedMapVote(const FString& CurrentMapName, const FString& CurrentMapMode, const FString& SubMode) {
}

void ABattalionGameState::Multicast_SetMapModeVoteOptions_Implementation(const TArray<FMapModeVoteInfo>& Options) {
}

bool ABattalionGameState::IsLocalMatch() {
    return false;
}

bool ABattalionGameState::IsInPreGame() {
    return false;
}

TArray<int32> ABattalionGameState::GetWinningTeamNum() {
    return TArray<int32>();
}

int32 ABattalionGameState::GetTeamScore(UBattalionTeam* Team) {
    return 0;
}

UBattalionTeam* ABattalionGameState::GetTeam(int32 TeamIndex) {
    return NULL;
}

int32 ABattalionGameState::GetScoreToWinRound() {
    return 0;
}

FLoadoutCard ABattalionGameState::GetPlayerClassCard(ABattalionPlayerState* PlayerState) {
    return FLoadoutCard{};
}

FTimespan ABattalionGameState::GetElapsedMatchTime() {
    return FTimespan{};
}

TArray<FLoadoutCard> ABattalionGameState::GetAvailableCards(int32 Team) {
    return TArray<FLoadoutCard>();
}

FLoadoutCard ABattalionGameState::FindLoadoutCard(const FString& CardName, ENationType Nation) {
    return FLoadoutCard{};
}

void ABattalionGameState::Client_SetTopPlayers_Implementation(const TArray<ABattalionPlayerState*>& PlayerStates) {
}

bool ABattalionGameState::CanReportPlayer() {
    return false;
}

void ABattalionGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionGameState, Market);
    DOREPLIFETIME(ABattalionGameState, ShortModeName);
    DOREPLIFETIME(ABattalionGameState, LongModeName);
    DOREPLIFETIME(ABattalionGameState, SubModeName);
    DOREPLIFETIME(ABattalionGameState, MapName);
    DOREPLIFETIME(ABattalionGameState, MatchState);
    DOREPLIFETIME(ABattalionGameState, ServerMode);
    DOREPLIFETIME(ABattalionGameState, ElapsedTimeInState);
    DOREPLIFETIME(ABattalionGameState, WaitingToStartTimer);
    DOREPLIFETIME(ABattalionGameState, MatchStartTime);
    DOREPLIFETIME(ABattalionGameState, MatchEndTime);
    DOREPLIFETIME(ABattalionGameState, StartType);
    DOREPLIFETIME(ABattalionGameState, Round);
    DOREPLIFETIME(ABattalionGameState, StratTime);
    DOREPLIFETIME(ABattalionGameState, CinematicSetupRoundTime);
    DOREPLIFETIME(ABattalionGameState, SetupRoundTime);
    DOREPLIFETIME(ABattalionGameState, PostRoundTime);
    DOREPLIFETIME(ABattalionGameState, PostMatchTime);
    DOREPLIFETIME(ABattalionGameState, FriendlyFire);
    DOREPLIFETIME(ABattalionGameState, CountdownToStart);
    DOREPLIFETIME(ABattalionGameState, SetupCountdown);
    DOREPLIFETIME(ABattalionGameState, StratCountdown);
    DOREPLIFETIME(ABattalionGameState, NumNations);
    DOREPLIFETIME(ABattalionGameState, LastThrownGrenade);
    DOREPLIFETIME(ABattalionGameState, LastThrownSmoke);
    DOREPLIFETIME(ABattalionGameState, LastThrownFlash);
    DOREPLIFETIME(ABattalionGameState, LastThrownStun);
    DOREPLIFETIME(ABattalionGameState, InPlayGrenades);
    DOREPLIFETIME(ABattalionGameState, InPlaySmokes);
    DOREPLIFETIME(ABattalionGameState, InPlaySmokeVolumes);
    DOREPLIFETIME(ABattalionGameState, InPlayFlashes);
    DOREPLIFETIME(ABattalionGameState, InPlayStuns);
    DOREPLIFETIME(ABattalionGameState, InPlayTrophySystems);
    DOREPLIFETIME(ABattalionGameState, InPlayDeployableCovers);
    DOREPLIFETIME(ABattalionGameState, InPlayAmmoBoxes);
    DOREPLIFETIME(ABattalionGameState, Teams);
    DOREPLIFETIME(ABattalionGameState, NumTeams);
    DOREPLIFETIME(ABattalionGameState, bCheatAdminCmdsEnabled);
    DOREPLIFETIME(ABattalionGameState, RoundEndReason);
    DOREPLIFETIME(ABattalionGameState, TeamDecks);
    DOREPLIFETIME(ABattalionGameState, LoadoutSystem);
    DOREPLIFETIME(ABattalionGameState, NumPlayersToFillServer);
    DOREPLIFETIME(ABattalionGameState, SpectatorTeamEnabled);
    DOREPLIFETIME(ABattalionGameState, ServerAverageFPS);
    DOREPLIFETIME(ABattalionGameState, CheatsDetected);
    DOREPLIFETIME(ABattalionGameState, PrevRoundWinConditions);
    DOREPLIFETIME(ABattalionGameState, StratMode);
    DOREPLIFETIME(ABattalionGameState, ScoreToWinRound);
    DOREPLIFETIME(ABattalionGameState, MaxPlayersPerTeam);
    DOREPLIFETIME(ABattalionGameState, AdminRevealAll);
    DOREPLIFETIME(ABattalionGameState, AdminFreeze);
    DOREPLIFETIME(ABattalionGameState, AdminPaused);
    DOREPLIFETIME(ABattalionGameState, EnableEnemyPlayerNames);
    DOREPLIFETIME(ABattalionGameState, bBackfillEnabled);
    DOREPLIFETIME(ABattalionGameState, MatchMVPList);
    DOREPLIFETIME(ABattalionGameState, ProScoreDraw);
    DOREPLIFETIME(ABattalionGameState, ProScoreWin);
    DOREPLIFETIME(ABattalionGameState, ProScoreLoss);
    DOREPLIFETIME(ABattalionGameState, MatchID);
    DOREPLIFETIME(ABattalionGameState, RoundTime);
    DOREPLIFETIME(ABattalionGameState, AdditionalRoundTime);
}

ABattalionGameState::ABattalionGameState() {
    this->TeamDeckDirty = false;
    this->ClientMarket = NULL;
    this->ClientMarketClass = NULL;
    this->Market = NULL;
    this->ElapsedTimeInState = 0.00f;
    this->WaitingToStartTimer = 0;
    this->MatchStartTime = 0;
    this->MatchEndTime = 0;
    this->Round = 0;
    this->StratTime = 0;
    this->CinematicSetupRoundTime = 0;
    this->SetupRoundTime = 0;
    this->PostRoundTime = 0;
    this->PostMatchTime = 0;
    this->FriendlyFire = false;
    this->CountdownToStart = 0.00f;
    this->SetupCountdown = 0.00f;
    this->StratCountdown = 0.00f;
    this->NumNations = 0;
    this->LastThrownGrenade = NULL;
    this->LastThrownSmoke = NULL;
    this->LastThrownFlash = NULL;
    this->LastThrownStun = NULL;
    this->NumTeams = 0;
    this->bCheatAdminCmdsEnabled = false;
    this->LoadoutSystem = NULL;
    this->NumPlayersToFillServer = 0;
    this->SpectatorTeamEnabled = false;
    this->ServerAverageFPS = 200.00f;
    this->CheatsDetected = false;
    this->StratMode = false;
    this->ScoreToWinRound = 0;
    this->MaxPlayersPerTeam = 0;
    this->AdminRevealAll = false;
    this->AdminFreeze = false;
    this->AdminPaused = false;
    this->EnableEnemyPlayerNames = false;
    this->bBackfillEnabled = true;
    this->ProScoreDraw = 0;
    this->ProScoreWin = 0;
    this->ProScoreLoss = 0;
    this->RoundTime = 0;
    this->AdditionalRoundTime = 0;
}

