#pragma once
#include "CoreMinimal.h"
#include "TallyInformationPacket.generated.h"

USTRUCT(BlueprintType)
struct FTallyInformationPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OurPrevPlayersAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OurAfterPlayersAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheirPrevPlayersAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheirAfterPlayersAlive;
    
    PROMOD_API FTallyInformationPacket();
};

