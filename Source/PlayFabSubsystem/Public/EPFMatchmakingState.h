#pragma once
#include "CoreMinimal.h"
#include "EPFMatchmakingState.generated.h"

UENUM(BlueprintType)
enum class EPFMatchmakingState : uint8 {
    NotLoggedIn,
    NoServerBuildId,
    ReadyToStart,
    TestingRegions,
    CancellingTickets,
    CreatingTicket,
    CreatingPartyTicket,
    JoiningPartyTicket,
    WaitingForMatch,
    GettingMatchInfo,
};

