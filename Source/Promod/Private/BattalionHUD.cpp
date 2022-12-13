#include "BattalionHUD.h"

class UNUIBaseHUDElement;

void ABattalionHUD::ToggleDebugBackfill() {
}

UNUIBaseHUDElement* ABattalionHUD::GetUIElement(int64 flag) {
    return NULL;
}

UNUIBaseHUDElement* ABattalionHUD::GetHudElement(int64 flag) {
    return NULL;
}

void ABattalionHUD::Client_HideBuyScreen_Implementation() {
}

void ABattalionHUD::Client_FlashProneBlock_Implementation() {
}

ABattalionHUD::ABattalionHUD() {
    this->MiniMap = NULL;
    this->KillFeed = NULL;
    this->VoiceChatFeed = NULL;
    this->KillMessage = NULL;
    this->GameTimer = NULL;
    this->AmmoCount = NULL;
    this->Crosshair = NULL;
    this->ChatBox = NULL;
    this->ScreenEffects = NULL;
    this->SniperScreenEffects = NULL;
    this->NetworkStatus = NULL;
    this->GrenadeIcon = NULL;
    this->Interact = NULL;
    this->MatchStatus = NULL;
    this->Pickup = NULL;
    this->ScoreAward = NULL;
    this->Vault = NULL;
    this->RoundStartCountdown = NULL;
    this->NationSelect = NULL;
    this->CardsSelection = NULL;
    this->Scoreboard = NULL;
    this->HUDSpectator = NULL;
    this->TeamScoreboard = NULL;
    this->TeamSelect = NULL;
    this->RoundEndScreen = NULL;
    this->SpectatorLoadoutScreen = NULL;
    this->SpawnViewer = NULL;
    this->CurrentlySpectating = NULL;
    this->RespawnTimer = NULL;
    this->ReadyPrompt = NULL;
    this->LoadoutPrompt = NULL;
    this->HalfTimeScreen = NULL;
    this->LevelUp = NULL;
    this->OvertimeScreen = NULL;
    this->EquippedWeapons = NULL;
    this->MedalAward = NULL;
    this->GenericActionPrompt = NULL;
    this->ProneBlockPrompt = NULL;
    this->CallOutName = NULL;
    this->GameOverview = NULL;
    this->IdleKickWarning = NULL;
    this->MatchResultScreen = NULL;
    this->MapClass = NULL;
    this->KillFeedClass = NULL;
    this->KillMessageClass = NULL;
    this->VoiceChatFeedClass = NULL;
    this->GameTimerClass = NULL;
    this->AmmoCountClass = NULL;
    this->CrosshairClass = NULL;
    this->ChatBoxClass = NULL;
    this->ScreenEffectsClass = NULL;
    this->SniperScreenEffectsClass = NULL;
    this->NetworkStatusClass = NULL;
    this->GrenadeIconClass = NULL;
    this->InteractClass = NULL;
    this->MatchStatusClass = NULL;
    this->PickupClass = NULL;
    this->ScoreAwardClass = NULL;
    this->VaultClass = NULL;
    this->RoundStartCountdownClass = NULL;
    this->CurrentlySpectatingClass = NULL;
    this->RespawnTimerClass = NULL;
    this->ReadyPromptClass = NULL;
    this->LoadoutPromptClass = NULL;
    this->HalfTimeScreenClass = NULL;
    this->LevelUpClass = NULL;
    this->OvertimeScreenClass = NULL;
    this->EquippedWeaponsClass = NULL;
    this->MedalAwardClass = NULL;
    this->GenericActionPromptClass = NULL;
    this->CallOutNameClass = NULL;
    this->IdleKickWarningClass = NULL;
    this->NationSelectClass = NULL;
    this->CardsSelectionClass = NULL;
    this->ScoreboardClass = NULL;
    this->HUDSpectatorClass = NULL;
    this->TeamScoreboardClass = NULL;
    this->TeamSelectClass = NULL;
    this->SpectatorLoadoutScreenClass = NULL;
    this->SpawnViewerClass = NULL;
    this->ProneBlockPromptClass = NULL;
    this->GameOverviewClass = NULL;
    this->MatchResultScreenClass = NULL;
    this->bDebugBackfill = false;
}

