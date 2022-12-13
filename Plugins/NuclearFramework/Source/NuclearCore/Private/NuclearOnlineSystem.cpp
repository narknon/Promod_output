#include "NuclearOnlineSystem.h"

class ULocalPlayer;
class APlayerState;

bool UNuclearOnlineSystem::UpdateSession(const FNuclearSessionSettings& Settings, const FUpdateSessionDynamicDelegate& Callback) {
    return false;
}

bool UNuclearOnlineSystem::StartSession(const FStartSessionDynamicDelegate& Callback) {
    return false;
}

bool UNuclearOnlineSystem::ShowPlayerProfile(const FUniqueNetIdRepl& PlayerNetId) const {
    return false;
}

void UNuclearOnlineSystem::SetSessionCustomSetting(const FNuclearSessionSettings& Settings, const FName& Name, const ENuclearSessionSettingType& Type, const FString& Value) {
}

bool UNuclearOnlineSystem::LeaveSession(const FLeaveSessionDynamicDelegate& Callback) {
    return false;
}

bool UNuclearOnlineSystem::JoinSession(const FNuclearSessionResult& TargetSession, const FString& Options) {
    return false;
}

bool UNuclearOnlineSystem::IsLoggedIn(ULocalPlayer* TargetLP) const {
    return false;
}

bool UNuclearOnlineSystem::HostSession(const FNuclearSessionSettings& Settings, const FHostSessionDynamicDelegate& Callback) {
    return false;
}

bool UNuclearOnlineSystem::GetSessionSettings(FNuclearSessionSettings& OutSettings) const {
    return false;
}

FName UNuclearOnlineSystem::GetSessionName() {
    return NAME_None;
}

bool UNuclearOnlineSystem::GetSessionCustomSetting(const FNuclearSessionSettings& Settings, const FName& Name, ENuclearSessionSettingType& Type, FString& Value) {
    return false;
}

FUniqueNetIdRepl UNuclearOnlineSystem::GetRemotePlayerNetId(APlayerState* TargetPS) {
    return FUniqueNetIdRepl{};
}

FString UNuclearOnlineSystem::GetPlayerName(const FUniqueNetIdRepl& PlayerNetId, const int32 MaxLength) const {
    return TEXT("");
}

bool UNuclearOnlineSystem::GetPlayerAvatar(const FUniqueNetIdRepl& PlayerNetId, const FPlayerAvatarDynamicDelegate& Callback) {
    return false;
}

FUniqueNetIdRepl UNuclearOnlineSystem::GetLocalPlayerNetId(ULocalPlayer* TargetLP) const {
    return FUniqueNetIdRepl{};
}

bool UNuclearOnlineSystem::FindSessions(const FNuclearSessionSettings& SearchParams, const FFindSessionsDynamicDelegate& Callback, const int32 MaxResults) {
    return false;
}

UNuclearOnlineSystem::UNuclearOnlineSystem() {
    this->LobbyListener = NULL;
    this->LobbyHost = NULL;
    this->LobbyClient = NULL;
}

