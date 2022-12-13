#include "BattalionGameMode.h"

class ABattalionPlayerState;

void ABattalionGameMode::VoteFinished_KnifeWinners(bool bSucceeded) {
}

void ABattalionGameMode::UpdateGameStateConfigVars() {
}

void ABattalionGameMode::ServerChatMessageToTeam(FText Message, int32 TeamNr) {
}

void ABattalionGameMode::ServerChatMessage(FText Message) {
}

void ABattalionGameMode::ServerAnnouncement(FText Message, float Time) {
}

FString ABattalionGameMode::SanitizeMapName() {
    return TEXT("");
}

void ABattalionGameMode::ProcessTickedTimerAwards() {
}

bool ABattalionGameMode::PlayerCollectedClassCard(ABattalionPlayerState* Player, const FString& ClassName) {
    return false;
}

FString ABattalionGameMode::GetShortModeName() {
    return TEXT("");
}

FString ABattalionGameMode::GetLongModeName() {
    return TEXT("");
}

void ABattalionGameMode::ClearAllTickAwardPlayerEntities() {
}

ABattalionGameMode::ABattalionGameMode() {
    this->HasStartedCountdownToStartCinematic = false;
    this->MapModeVoteSuccessful = false;
    this->NumTravellingPlayers = 0;
    this->PendingTravelAbsolute = false;
    this->PendingTravelTimer = 0.00f;
    this->PendingTravelTime = 3.00f;
    this->bPendingTravel = false;
    this->PreviousTravelTimerSeconds = 0;
    this->NextModeSelectedByCmd = false;
    this->FillEmptySlotsWithBots = true;
    this->AllowBots = false;
    this->bAllowGlobalVoiceChat = false;
    this->bCheatsEnabled = false;
    this->StratMode = false;
    this->MarketPath = TEXT("Loadouts/Market.json");
    this->ManualTravelOnly = false;
    this->ShouldPickRandomSubmode = true;
    this->AdminSteamIDs.AddDefaulted(2);
    this->FailedConnectCleanupAttempts = 3;
    this->MapVotingEnabled = true;
    this->NumMapOptionsToGive = 7;
    this->PlayerKillScore = 5;
    this->PlayerAssistScore = 3;
    this->DeathScore = 0;
    this->RoundWinScore = 0;
    this->RoundDrawScore = 0;
    this->RoundLossScore = 0;
    this->GameWinScore = 50;
    this->GameDrawScore = 25;
    this->GameLossScore = 20;
    this->AttackObjectiveScore = 5;
    this->DefendObjectiveScore = 10;
    this->ScoreToWinRound = 20;
    this->NumRounds = 3;
    this->SwapSidesRound = -1;
    this->NumTeams = 2;
    this->StartType = TEXT("PlayerCountWithTimeout");
    this->MaxPlayersPerTeam = 5;
    this->NumSpectatorSlots = 2;
    this->NumNations = 3;
    this->FriendlyFire = false;
    this->MaxGunsOnGround = 10;
    this->MaxGrenadesOnGround = 10;
    this->RequiredPlayers = 10;
    this->RespawnDelay = 5.00f;
    this->EnableEnemyPlayerNames = false;
    this->DisableTeamSwaping = false;
    this->RandomSpawnInfluence = 0.00f;
    this->EnemySpawnInfluenceDistance = 4000.00f;
    this->EnemySpawnInfluenceValue = -100.00f;
    this->EnemySpawnInfluenceExponent = 1.00f;
    this->EnemySpawnWeakForceInfluenceDistance = 6000.00f;
    this->EnemySpawnWeakForceInfluenceValue = 0.00f;
    this->EnemySpawnWeakForceInfluenceExponent = 1.00f;
    this->AllySpawnInfluenceExponent = 1.00f;
    this->AllySpawnInfluenceDistance = 2000.00f;
    this->AllySpawnInfluenceValue = 50.00f;
    this->PreviousSpawnInfluence = -100.00f;
    this->PreviousSpawnAreaInfluence = -10.00f;
    this->PreviousSpawnAreaDistance = 1500.00f;
    this->PreviousSpawnAreaInfluenceExponent = 1.00f;
    this->TeamDeathAreaTimeOfRelevance = 10.00f;
    this->TeamDeathAreaInfluence = -20.00f;
    this->TeamDeathAreaDistance = 1600.00f;
    this->TeamDeathAreaInfluenceExponent = 1.00f;
    this->TeamDeathLastSpawnAreaTimeOfRelevance = 10.00f;
    this->TeamDeathLastSpawnAreaInfluence = -5.00f;
    this->TeamDeathLastSpawnAreaDistance = 1400.00f;
    this->TeamDeathLastSpawnAreaInfluenceExponent = 1.00f;
    this->IdlePlayerTimeout = 120;
    this->CountdownToStartTime = 5;
    this->SetupRoundTime = 0;
    this->CinematicSetupRoundTime = 0;
    this->StratTime = 5;
    this->RoundTime = 600;
    this->PostRoundTime = 8;
    this->WarmupRespawnTime = 1;
    this->PostMatchTime = 20;
    this->WaitingToStartTimer = 120;
    this->VoteTime = 30;
    this->VoteKickEnabled = true;
    this->CharacterDestroyTime = 5.00f;
    this->PassiveFireUpEarnTime = 5.00f;
    this->MultikillTimer = 2.00f;
    this->bUseShootout = true;
    this->ShootoutRoundTime = 30.00f;
    this->ShootoutSetupTime = 5.00f;
    this->ShootoutTransitionTime = 2.00f;
    this->ShootoutPostRoundTime = 2.00f;
    this->OverviewAndShootoutTitleScreenTimes = 5.00f;
    this->CinematicsEnabled = true;
    this->CountdownToStartCinematicDelay = 2.00f;
    this->OutlineAllowed = true;
    this->GrenadeLinesAllowed = true;
    this->LockedToFirstPerson = true;
    this->SpectatorTransferTime = 1.00f;
    this->SpectatorTeamEnabled = false;
    this->ForceFreeCamOnSpectatorStart = false;
    this->EnemyWeaponDamageModifier = 1.00f;
    this->SelfGrenadeDamageScale = 1.00f;
    this->SelfOtherDamageScale = 1.00f;
    this->FriendlyBulletDamageScale = 0.33f;
    this->FriendlyGrenadeDamageScale = 0.85f;
    this->InactivePlayerStateLifeSpan = 300.00f;
    this->DisableWeaponDrop = false;
    this->SendSafeString = false;
    this->AllPlayersInvulnerable = false;
    this->WinOnTeamEmpty = true;
    this->NumBots = 0;
    this->TakeItemFromBotDistance = 200.00f;
    this->RecordHz = 32.00f;
    this->CheckpointDelay = 30.00f;
    this->RecordReplays = false;
    this->ProScoreWin = 150;
    this->ProScoreDraw = 50;
    this->ProScoreLoss = -50;
    this->TeamNations.AddDefaulted(2);
    this->AdditionalRoundTime = 0.00f;
    this->BattalionGameState = NULL;
    this->Market = NULL;
    this->NearlyEndedTimeCurve = NULL;
    this->NearlyEndedScoreCurve = NULL;
    this->LoadoutSystem = NULL;
    this->LoadoutSystemClass = NULL;
    this->MarketClass = NULL;
    this->NumPlayers = 0;
    this->NumReadyPlayers = 0;
    this->AlliesWinEvent = NULL;
    this->AxisWinEvent = NULL;
    this->DrawEvent = NULL;
    this->GameStartedVOEvent = NULL;
    this->HalfTimeVOEvent = NULL;
    this->NextRoundTimeout_Techncial = false;
    this->NextRoundTimeout_Tactical = false;
    this->PlayedCountdownMusic = false;
    this->PeriodicalTickTimer = 0.00f;
    this->TeamSpecIDCheckTimer = 0.00f;
    this->TeamSpecIDCheckReset = 2.00f;
    this->PassiveEarnFireUpTimer = 1.00f;
    this->BattInstance = NULL;
    this->CommandManager = NULL;
    this->MedalManager = NULL;
    this->MedalDataAsset = NULL;
}

