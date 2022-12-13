#include "BattalionPlayerState.h"
#include "Net/UnrealNetwork.h"

class ABattalionPlayerState;
class UDamageType;

void ABattalionPlayerState::SetIsPossessingABot_Implementation(bool IsPoss) {
}

void ABattalionPlayerState::SetIsAlive(bool InAlive) {
}

void ABattalionPlayerState::SetHasInfiniteAmmo(const bool bNewHasInfiniteAmmo) {
}

void ABattalionPlayerState::SetCallOutNameOnServer_Implementation(const FName NewName, const int32 NewUniqueId) {
}
bool ABattalionPlayerState::SetCallOutNameOnServer_Validate(const FName NewName, const int32 NewUniqueId) {
    return true;
}

void ABattalionPlayerState::SetCallOutNameOnClient_Implementation(const FName NewName, const int32 NewUniqueId) {
}

void ABattalionPlayerState::Server_UpdatePartyInfo_Implementation(const TArray<FString>& PartyMembers) {
}
bool ABattalionPlayerState::Server_UpdatePartyInfo_Validate(const TArray<FString>& PartyMembers) {
    return true;
}

void ABattalionPlayerState::Server_UnlockedSeasonalReward_Implementation(const FString& RewardId) {
}
bool ABattalionPlayerState::Server_UnlockedSeasonalReward_Validate(const FString& RewardId) {
    return true;
}

void ABattalionPlayerState::Server_SetScoreboardXP_Implementation(int32 XP) {
}
bool ABattalionPlayerState::Server_SetScoreboardXP_Validate(int32 XP) {
    return true;
}

void ABattalionPlayerState::Server_SetIsAlive_Implementation(bool InAlive) {
}
bool ABattalionPlayerState::Server_SetIsAlive_Validate(bool InAlive) {
    return true;
}

void ABattalionPlayerState::RemoveIDToMutedRemotePlayersIDList(ABattalionPlayerState* BattPSToRemove) {
}

void ABattalionPlayerState::OnRep_LoadoutConfirmedChanged() {
}

void ABattalionPlayerState::OnRep_LoadoutChanged() {
}

void ABattalionPlayerState::OnRep_HasInfiniteAmmo() {
}

void ABattalionPlayerState::NetMulti_SetIsAlive_Implementation(bool InAlive) {
}

bool ABattalionPlayerState::MutedRemotePlayersIDListContains(ABattalionPlayerState* BattPSToCheck) {
    return false;
}

bool ABattalionPlayerState::HasInfiniteAmmo() {
    return false;
}

void ABattalionPlayerState::GiveInfiniteAmmoForTime(float Time) {
}

FUniqueNetIdRepl ABattalionPlayerState::GetUniqueNetIDRepl() {
    return FUniqueNetIdRepl{};
}

int32 ABattalionPlayerState::GetTeamNum() const {
    return 0;
}

FRoundStats ABattalionPlayerState::GetStatsForRound(int32 Round) {
    return FRoundStats{};
}

FString ABattalionPlayerState::GetShortPlayerName() {
    return TEXT("");
}

FString ABattalionPlayerState::GetNetID() {
    return TEXT("");
}

int32 ABattalionPlayerState::GetKillsThisRound() {
    return 0;
}

bool ABattalionPlayerState::GetIsAlive() const {
    return false;
}

TArray<FRoundStats> ABattalionPlayerState::GetAllRoundStats() {
    return TArray<FRoundStats>();
}

void ABattalionPlayerState::ClientSetMatchResultScore_Implementation(int32 MatchBonus) {
}

void ABattalionPlayerState::Client_SetScore_Implementation(const int32& NewScore) {
}

void ABattalionPlayerState::Client_SetKills_Implementation(const int32& NewNumKills) {
}

void ABattalionPlayerState::Client_DisplayMapVoteNotification_Implementation(const FString& CurrentMapName, const FString& CurrentMapMode, const FString& SubMode) {
}

void ABattalionPlayerState::ClearInfiniteAmmoForTime() {
}

void ABattalionPlayerState::BroadcastDeath_Implementation(ABattalionPlayerState* KillerPlayerState, ABattalionPlayerState* AssisterPlayerState, const UDamageType* KillerDamageType, ABattalionPlayerState* KilledPlayerState, FKillMetaData KillMetaData) {
}

void ABattalionPlayerState::AddIDToMutedRemotePlayersIDList(ABattalionPlayerState* BattPSToAdd) {
}

void ABattalionPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionPlayerState, PlatformId);
    DOREPLIFETIME(ABattalionPlayerState, StartingXP);
    DOREPLIFETIME(ABattalionPlayerState, StartingProScore);
    DOREPLIFETIME(ABattalionPlayerState, CurrentLoadout);
    DOREPLIFETIME(ABattalionPlayerState, bLoadoutConfirmed);
    DOREPLIFETIME(ABattalionPlayerState, ShadowInventory);
    DOREPLIFETIME(ABattalionPlayerState, CurrentlySelectedWeapon);
    DOREPLIFETIME(ABattalionPlayerState, CurrentlySelectedWeaponNation);
    DOREPLIFETIME(ABattalionPlayerState, ShadowNumGrenades);
    DOREPLIFETIME(ABattalionPlayerState, ShadowNumSpecialGrenades);
    DOREPLIFETIME(ABattalionPlayerState, IsInteractVisible);
    DOREPLIFETIME(ABattalionPlayerState, CardHeld);
    DOREPLIFETIME(ABattalionPlayerState, IsAdmin);
    DOREPLIFETIME(ABattalionPlayerState, MiniMapColor);
    DOREPLIFETIME(ABattalionPlayerState, ScoreFromMatchResult);
    DOREPLIFETIME(ABattalionPlayerState, CurrentCallOutName);
    DOREPLIFETIME(ABattalionPlayerState, CurrentCallOutUniqueId);
    DOREPLIFETIME(ABattalionPlayerState, NationType);
    DOREPLIFETIME(ABattalionPlayerState, ClassNumber);
    DOREPLIFETIME(ABattalionPlayerState, NumKills);
    DOREPLIFETIME(ABattalionPlayerState, NumAssists);
    DOREPLIFETIME(ABattalionPlayerState, NumDeaths);
    DOREPLIFETIME(ABattalionPlayerState, NumHeadshotKills);
    DOREPLIFETIME(ABattalionPlayerState, CardsCollected);
    DOREPLIFETIME(ABattalionPlayerState, NumKillsThisRound);
    DOREPLIFETIME(ABattalionPlayerState, IsReady);
    DOREPLIFETIME(ABattalionPlayerState, RespawnNationType);
    DOREPLIFETIME(ABattalionPlayerState, RespawnClassNumber);
    DOREPLIFETIME(ABattalionPlayerState, IsAlive);
    DOREPLIFETIME(ABattalionPlayerState, TeamNumber);
    DOREPLIFETIME(ABattalionPlayerState, PreviousTeamNumber);
    DOREPLIFETIME(ABattalionPlayerState, LastTeamChangeTimeStamp);
    DOREPLIFETIME(ABattalionPlayerState, CanBeVotedToKick);
    DOREPLIFETIME(ABattalionPlayerState, ScoreboardXP);
    DOREPLIFETIME(ABattalionPlayerState, IsDev);
    DOREPLIFETIME(ABattalionPlayerState, RoundStats);
    DOREPLIFETIME(ABattalionPlayerState, IsBeingABot);
    DOREPLIFETIME(ABattalionPlayerState, IsPossessingABot);
    DOREPLIFETIME(ABattalionPlayerState, PossessedBotInPrevRound);
    DOREPLIFETIME(ABattalionPlayerState, IsBotPossessedByPlayer);
    DOREPLIFETIME(ABattalionPlayerState, PossessedBotPS);
    DOREPLIFETIME(ABattalionPlayerState, DeathStreak);
    DOREPLIFETIME(ABattalionPlayerState, KillStreak);
    DOREPLIFETIME(ABattalionPlayerState, Clutching);
    DOREPLIFETIME(ABattalionPlayerState, ClutchingAgainst);
    DOREPLIFETIME(ABattalionPlayerState, OnlySpectating);
    DOREPLIFETIME(ABattalionPlayerState, SpectatingID);
    DOREPLIFETIME(ABattalionPlayerState, SpectatingIDTeam);
    DOREPLIFETIME(ABattalionPlayerState, bIsCaster);
    DOREPLIFETIME(ABattalionPlayerState, IsOutlineEnabled);
    DOREPLIFETIME(ABattalionPlayerState, UseProgressTimeStamp);
    DOREPLIFETIME(ABattalionPlayerState, UnlockedSeasonalRewards);
    DOREPLIFETIME(ABattalionPlayerState, LastKillTimeStamp);
    DOREPLIFETIME(ABattalionPlayerState, CurrentMultikill);
    DOREPLIFETIME(ABattalionPlayerState, bHasInfiniteAmmo);
}

ABattalionPlayerState::ABattalionPlayerState() {
    this->StartingXP = 0;
    this->StartingProScore = 0;
    this->bLoadoutConfirmed = false;
    this->CurrentlySelectedWeapon = NULL;
    this->CurrentlySelectedWeaponNation = ENationType::Nation_FRIENDLY;
    this->ShadowNumGrenades = 0;
    this->ShadowNumSpecialGrenades = 0;
    this->IsInteractVisible = false;
    this->IsAdmin = false;
    this->ExperienceGainedFromMedals = 0;
    this->ExperienceGainedFromChallenges = 0;
    this->ExperienceGainedFromMatchResult = 0;
    this->SpawnPoint = NULL;
    this->FirstSpawnPoint = NULL;
    this->Invulnerable = false;
    this->IsInParty = false;
    this->IsPartyLeader = false;
    this->ScoreFromMatchResult = 0.00f;
    this->CurrentCallOutUniqueId = 0;
    this->NationType = ENationType::Nation_FRIENDLY;
    this->ClassNumber = 0;
    this->NumKills = 0;
    this->NumAssists = 0;
    this->NumDeaths = 0;
    this->NumHeadshotKills = 0;
    this->CardsCollected = 0;
    this->NumKillsThisRound = 0;
    this->IsReady = false;
    this->Quitter = false;
    this->NumBulletsFired = 0;
    this->NumBulletHits = 0;
    this->RespawnNationType = ENationType::Nation_FRIENDLY;
    this->RespawnClassNumber = 0;
    this->IsAlive = false;
    this->TeamNumber = -1;
    this->PreviousTeamNumber = -1;
    this->CanBeVotedToKick = true;
    this->ScoreboardXP = 0;
    this->IsDev = false;
    this->IsBeingABot = false;
    this->IsPossessingABot = false;
    this->PossessedBotInPrevRound = false;
    this->IsBotPossessedByPlayer = false;
    this->PossessedBotPS = NULL;
    this->PreviousKiller = NULL;
    this->DeathStreak = 0;
    this->KillStreak = 0;
    this->Clutching = false;
    this->ClutchingAgainst = 0;
    this->OnlySpectating = true;
    this->SpectatingID = 0;
    this->SpectatingIDTeam = 0;
    this->bIsCaster = false;
    this->IsOutlineEnabled = false;
    this->UseProgressTimeStamp = 0.00f;
    this->LastKillTimeStamp = 0.00f;
    this->CurrentMultikill = 0;
    this->bHasInfiniteAmmo = false;
}

