#include "PlayFabSubsystem.h"

class UPFServerSlotManager;
class UPFRegionManager;
class UPFPlayerIdCache;
class UPFPlayerDataManager;
class UPFMatchmakingManager;
class UPFMatchmakingInterop;
class UPFGroupManager;

void UPlayFabSubsystem::SetBuildCL(const FString& InBuildCL) {
}

void UPlayFabSubsystem::Login(int32 ControllerId) {
}

UPFServerSlotManager* UPlayFabSubsystem::GetServerSlotManager() const {
    return NULL;
}

UPFRegionManager* UPlayFabSubsystem::GetRegionManager() const {
    return NULL;
}

UPFPlayerIdCache* UPlayFabSubsystem::GetPlayerIdCache() const {
    return NULL;
}

UPFPlayerDataManager* UPlayFabSubsystem::GetPlayerDataManager() const {
    return NULL;
}

UPFMatchmakingManager* UPlayFabSubsystem::GetMatchmakingManager() const {
    return NULL;
}

UPFMatchmakingInterop* UPlayFabSubsystem::GetMatchmakingInterop() const {
    return NULL;
}

FPFPlayerId UPlayFabSubsystem::GetLocalClientPlayerId() const {
    return FPFPlayerId{};
}

bool UPlayFabSubsystem::GetIsServer() const {
    return false;
}

bool UPlayFabSubsystem::GetIsLoggedIn() {
    return false;
}

UPFGroupManager* UPlayFabSubsystem::GetGroupManager() const {
    return NULL;
}

UPlayFabSubsystem::UPlayFabSubsystem() {
    this->Settings = NULL;
    this->PlatformHelper = NULL;
    this->bIsServer = false;
    this->bIsLoggedIn = false;
    this->LoginControllerId = 0;
    this->GetServerBuildIdRetries = 5;
    this->PlayerIdCache = NULL;
    this->PlayerDataManager = NULL;
    this->GroupManager = NULL;
    this->MatchmakingManager = NULL;
    this->MatchmakingInterop = NULL;
    this->ServerSlotManager = NULL;
    this->RegionManager = NULL;
    this->LocalClientAuthenticationContextObj = NULL;
}

