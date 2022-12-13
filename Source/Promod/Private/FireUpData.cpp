#include "FireUpData.h"

FFireUpData::FFireUpData() {
    this->FireUpType = EFireUpType::None;
    this->FireUpSlotType = EFireUpSlotType::Ultimate;
    this->UnlockThreshold = 0.00f;
    this->PercentageLostOnUse = 0.00f;
    this->bShouldTimeout = false;
    this->bCanUseWhilePlanting = false;
    this->CanUseBombMode = EFireUpCanUseBombMode::Always;
    this->Bark = NULL;
    this->Bark3P = NULL;
    this->StopBark1P = NULL;
    this->StopBark3P = NULL;
    this->TutorialVideo = NULL;
    this->MediaPlaylistIndex = 0;
    this->MediaPlaylist = NULL;
    this->DeployTime = 0.00f;
    this->bProhibitWeaponSwap = false;
    this->Duration = 0.00f;
    this->WeaponEquipTiming = EFireUpWeaponEquipTiming::NoHolster;
    this->CustomWeaponReEquipTime = 0.00f;
    this->ComboTimer = 0.00f;
    this->bShouldDisableAds = false;
    this->bShouldStopFiring = false;
    this->bActivateOnKeyRelease = false;
    this->bPredictedAction = false;
    this->bCanCombo = false;
    this->ComboType = EFireUpComboType::RefreshDuration;
    this->FireUpIcon = NULL;
    this->bCanActivateDuingLowVault = false;
    this->bCanActivateDuringHighVault = false;
    this->PassiveEarnCurve = NULL;
    this->bQuickUtilOnlyOneAllowed = false;
    this->bQuickUtilAwardsOnTimer = false;
    this->QuickUtilRegenTimer = 0.00f;
}

