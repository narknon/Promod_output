#include "BattalionTeam.h"
#include "Net/UnrealNetwork.h"

class ABattalionPlayerState;

FText UBattalionTeam::GetTeamName() {
    return FText::GetEmpty();
}

FLinearColor UBattalionTeam::GetTeamColor(ABattalionPlayerState* PerspectivePlayerState) {
    return FLinearColor{};
}

TArray<ABattalionPlayerState*> UBattalionTeam::GetPlayers() {
    return TArray<ABattalionPlayerState*>();
}

TArray<ABattalionPlayerState*> UBattalionTeam::GetMembers() {
    return TArray<ABattalionPlayerState*>();
}

TArray<ABattalionPlayerState*> UBattalionTeam::GetAlivePlayers() {
    return TArray<ABattalionPlayerState*>();
}

TArray<ABattalionPlayerState*> UBattalionTeam::GetAliveMembers() {
    return TArray<ABattalionPlayerState*>();
}

void UBattalionTeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBattalionTeam, TeamIndex);
    DOREPLIFETIME(UBattalionTeam, Nation);
    DOREPLIFETIME(UBattalionTeam, Score);
    DOREPLIFETIME(UBattalionTeam, RoundsWon);
    DOREPLIFETIME(UBattalionTeam, WinStreak);
    DOREPLIFETIME(UBattalionTeam, LooseStreak);
    DOREPLIFETIME(UBattalionTeam, Kills);
    DOREPLIFETIME(UBattalionTeam, Deaths);
    DOREPLIFETIME(UBattalionTeam, Name);
    DOREPLIFETIME(UBattalionTeam, Players);
    DOREPLIFETIME(UBattalionTeam, Bots);
    DOREPLIFETIME(UBattalionTeam, TokensEarnedThisRound);
    DOREPLIFETIME(UBattalionTeam, ScoreThisRound);
    DOREPLIFETIME(UBattalionTeam, Color);
}

UBattalionTeam::UBattalionTeam() {
    this->TeamIndex = 0.00f;
    this->Nation = ENationType::Nation_FRIENDLY;
    this->Score = 0.00f;
    this->RoundsWon = 0;
    this->WinStreak = 0;
    this->LooseStreak = 0;
    this->Kills = 0.00f;
    this->Deaths = 0.00f;
    this->TokensEarnedThisRound = 0;
    this->PendingRoundWin = false;
    this->WonPreviousRound = false;
    this->Surrendered = false;
    this->ScoreThisRound = 0;
}

