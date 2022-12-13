#pragma once
#include "CoreMinimal.h"
#include "EBattalionColour.generated.h"

UENUM(BlueprintType)
enum class EBattalionColour : uint8 {
    Friendly,
    Enemy,
    Neutral,
    Self,
    Round_Win,
    Round_Loss,
    Round_Draw,
    Match_Win,
    Match_Loss,
    Match_Draw,
    Chat_Global,
    Chat_Team,
    Chat_Group,
    Chat_Dev,
    Chat_Medal,
    Chat_Challenge,
};

