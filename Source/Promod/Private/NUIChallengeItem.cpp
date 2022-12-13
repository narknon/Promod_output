#include "NUIChallengeItem.h"

void UNUIChallengeItem::SetChallengeInfo(const FChallengeInfo& InChallengeInfo) {
}

void UNUIChallengeItem::SetAndUpdateCompletedWeeklyChallengeInfo(const FChallengeInfo& InChallengeInfo) {
}

void UNUIChallengeItem::SetAndUpdateCompletedDailyChallengeInfo(const FChallengeInfo& InChallengeInfo, int32 challengeIndex) {
}



FString UNUIChallengeItem::GetDescriptionForCurrentLocale() {
    return TEXT("");
}

UNUIChallengeItem::UNUIChallengeItem() : UUserWidget(FObjectInitializer::Get()) {
}

