#include "NUIScoreboardGroup.h"

class UNUIScoreboardRow;
class ABattalionPlayerState;

void UNUIScoreboardGroup::SetScoreboardLock(bool newLock) {
}

void UNUIScoreboardGroup::SetGroupHeaderVisible(bool newVisibility) {
}





bool UNUIScoreboardGroup::IsScoreboardLocked() {
    return false;
}

int32 UNUIScoreboardGroup::GetMemberCount() {
    return 0;
}

UNUIScoreboardRow* UNUIScoreboardGroup::GetGroupMemberWidget(int32 MemberIndex) {
    return NULL;
}

UNUIScoreboardRow* UNUIScoreboardGroup::FindGroupMemberWidget(ABattalionPlayerState* PlayerState) {
    return NULL;
}

int32 UNUIScoreboardGroup::FindGroupMemberIndex(ABattalionPlayerState* PlayerState) {
    return 0;
}

UNUIScoreboardGroup::UNUIScoreboardGroup() {
    this->ParentWidget = NULL;
    this->GroupHeaderVisibility = ESlateVisibility::Visible;
    this->PlayerCountVisibility = ESlateVisibility::Visible;
    this->bMemberListChanged = false;
    this->bScoreboardLock = false;
    this->MemberWidgetClass = NULL;
}

