#include "ServerDirectorySystem.h"

UServerDirectorySystem::UServerDirectorySystem() {
    this->GetIpEndpoint = TEXT("https://icanhazip.com");
    this->UpdateInterval = 30;
    this->Counter = 0.00f;
    this->GameInstance = NULL;
}

