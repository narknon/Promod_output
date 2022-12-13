#include "PlatformKeyImage.h"

void UPlatformKeyImage::UpdateData(EForcedPlatform ForcedPlatform, bool IsForcingPlatform) {
}


bool UPlatformKeyImage::IsPlatformXBOX() {
    return false;
}

bool UPlatformKeyImage::IsPlatformPC() {
    return false;
}

bool UPlatformKeyImage::IsCurrentlyForcingPlatform() {
    return false;
}

EForcedPlatform UPlatformKeyImage::GetCurrentForcingPlatform() {
    return EForcedPlatform::FP_None;
}

UPlatformKeyImage::UPlatformKeyImage() : UUserWidget(FObjectInitializer::Get()) {
}

