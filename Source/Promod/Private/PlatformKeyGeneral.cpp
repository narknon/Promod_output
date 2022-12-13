#include "PlatformKeyGeneral.h"

void UPlatformKeyGeneral::UpdateData(EForcedPlatform ForcedPlatform, bool IsForcingPlatform) {
}


bool UPlatformKeyGeneral::IsPlatformXBOX() {
    return false;
}

bool UPlatformKeyGeneral::IsCurrentlyForcingPlatform() {
    return false;
}

EForcedPlatform UPlatformKeyGeneral::GetCurrentForcingPlatform() {
    return EForcedPlatform::FP_None;
}

UPlatformKeyGeneral::UPlatformKeyGeneral() : UUserWidget(FObjectInitializer::Get()) {
}

