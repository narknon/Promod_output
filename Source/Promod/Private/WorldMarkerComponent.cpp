#include "WorldMarkerComponent.h"
#include "Net/UnrealNetwork.h"

class UTexture2D;

void UWorldMarkerComponent::UnstickMarker() {
}

void UWorldMarkerComponent::StopHighlightMarker() {
}

void UWorldMarkerComponent::StickMarker(FVector2D ScreenPosition, float Scale) {
}

void UWorldMarkerComponent::SetTimerInfo(const float TimeToShow) {
}

void UWorldMarkerComponent::SetTeamVisibility(ETeamVisibility NewTeamVisibility) {
}

void UWorldMarkerComponent::SetTeamAllegiance(int32 TeamId) {
}

void UWorldMarkerComponent::SetShouldHideOnLerp(bool ShouldHide) {
}

void UWorldMarkerComponent::SetShouldBeCountingDown(bool ShouldBe) {
}

void UWorldMarkerComponent::SetProgressInfo(const FLinearColor ProgressColor, const float InProgress) {
}

void UWorldMarkerComponent::SetObjectiveLabel(const FString& NewLabel) {
}

void UWorldMarkerComponent::SetImage(UTexture2D* NewImage) {
}

void UWorldMarkerComponent::SetHiddenByOpacity(bool Hidden) {
}

void UWorldMarkerComponent::ResetTimer() {
}

void UWorldMarkerComponent::OnRep_TeamVisibilityChanged() {
}

void UWorldMarkerComponent::OnRep_TeamAllegianceChanged() {
}

void UWorldMarkerComponent::HighlightMarker(float Duration) {
}

bool UWorldMarkerComponent::GetShouldBeCountingDown() {
    return false;
}

bool UWorldMarkerComponent::GetIsStuckToScreen() {
    return false;
}

void UWorldMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWorldMarkerComponent, TeamAllegiance);
    DOREPLIFETIME(UWorldMarkerComponent, TeamVisibility);
}

UWorldMarkerComponent::UWorldMarkerComponent() {
    this->Icon = NULL;
    this->PreventColorOverrides = false;
    this->UseAlliedTeamNeutralColor = false;
    this->bUseProgressMarker = false;
    this->bUseTimerText = false;
    this->DefualtTimerTime = 0.00f;
    this->HideOnFinishLerp = false;
    this->bIconUseOffColour = false;
    this->CurrentMarkerImage = NULL;
    this->bMarkerCurrentlyVisible = false;
    this->Progress = 0.00f;
    this->TimerTime = 0.00f;
    this->bInHighlightAnimation = false;
    this->bShouldBeCountingDown = false;
    this->bOriginalShouldShowText = false;
    this->CurrentTimerTime = 0.00f;
    this->TeamAllegiance = -1;
    this->TeamVisibility = ETeamVisibility::VisibleToAll;
    this->bAddedToScreen = false;
    this->bIsStuckToScreen = false;
    this->Widget = NULL;
    this->WidgetClass = NULL;
}

