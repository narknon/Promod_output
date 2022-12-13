#include "NUINetworkStatus.h"

UNUINetworkStatus::UNUINetworkStatus() {
    this->EstimatedPing = 0.00f;
    this->CheatsEnabled = false;
    this->PingQuality = ENetworkStatus::Good;
    this->PingVariationQuality = ENetworkStatus::Good;
    this->FramerateQuality = ENetworkStatus::Good;
    this->RefreshRateQuality = ENetworkStatus::Good;
    this->PacketLossQuality = ENetworkStatus::Good;
    this->ServerPerformanceQuality = ENetworkStatus::Good;
}

