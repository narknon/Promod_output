#include "PFRegionManager.h"

void UPFRegionManager::StartTestingLatencies() {
}

void UPFRegionManager::SetIsEnabled(bool IsEnabled) {
}

void UPFRegionManager::OnLoginCompleted(int32 ControllerId, bool bSuccess) {
}

bool UPFRegionManager::IsTesting() {
    return false;
}

bool UPFRegionManager::IsReady() const {
    return false;
}

bool UPFRegionManager::HasValidAndAcceptableLatencies() {
    return false;
}

TArray<FRegionLatency> UPFRegionManager::GetRegionLatencies() const {
    return TArray<FRegionLatency>();
}

FRegionLatency UPFRegionManager::GetBestRegion() {
    return FRegionLatency{};
}

UPFRegionManager::UPFRegionManager() {
    this->PlayFabSubsystem = NULL;
}

