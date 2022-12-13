#pragma once
#include "CoreMinimal.h"
#include "EPFInteropCommand.generated.h"

UENUM()
enum class EPFInteropCommand : uint32 {
    Heartbeat,
    Server_ReadyForMatch,
    PlayFab_MatchStarted,
    PlayFab_BackfilledPlayers,
    PlayFab_TimedOutPlayers,
    Server_PlayerJoined,
    Server_PlayerLeft,
    Server_StopBackfill,
    Server_ResetBackfill,
};

