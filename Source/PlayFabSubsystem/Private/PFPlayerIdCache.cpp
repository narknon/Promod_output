#include "PFPlayerIdCache.h"

bool UPFPlayerIdCache::IsIdCachedFromTitleString(const FString& TitleIdString) const {
    return false;
}

bool UPFPlayerIdCache::IsIdCachedFromMasterString(const FString& MasterIdString) const {
    return false;
}

FPFPlayerId UPFPlayerIdCache::CacheAndReturnPlayerId(const FString& TitleIdString, const FString& MasterIdString) {
    return FPFPlayerId{};
}

UPFPlayerIdCache::UPFPlayerIdCache() {
    this->PlayFabSubsystem = NULL;
}

