#pragma once
#include "CoreMinimal.h"
#include "VoteInfo.generated.h"

class ABattalionPlayerControllerGMBase;
class ABattalionPlayerState;

USTRUCT(BlueprintType)
struct FVoteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* VoteCaller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABattalionPlayerControllerGMBase*> ApplicableVotees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* PlayerToKick;
    
    PROMOD_API FVoteInfo();
};

