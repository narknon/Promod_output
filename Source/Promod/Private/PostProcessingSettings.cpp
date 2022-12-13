#include "PostProcessingSettings.h"
#include "Components/PostProcessComponent.h"

void APostProcessingSettings::ApplySettings() {
}

APostProcessingSettings::APostProcessingSettings() {
    this->MinPP = CreateDefaultSubobject<UPostProcessComponent>(TEXT("MinPostProcess"));
    this->MaxPP = CreateDefaultSubobject<UPostProcessComponent>(TEXT("MaxPostProcess"));
    this->GamePP = CreateDefaultSubobject<UPostProcessComponent>(TEXT("GamePostProcess"));
    this->ColorStrength = 0.00f;
    this->ColorTint = 0.00f;
    this->WorldContrast = 0.00f;
    this->SkyFade = 0.00f;
    this->Vignette = 0.00f;
    this->LightbouncePower = 0.00f;
    this->AOStrength = 0.00f;
    this->LensFlareIntensity = 0.00f;
    this->ExposureAmount = 0.00f;
    this->Sharpness = 0.00f;
}

