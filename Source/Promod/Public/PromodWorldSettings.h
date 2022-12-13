#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "ESpecialGrenadeType.h"
#include "PromodWorldSettings.generated.h"

UCLASS(Blueprintable)
class APromodWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAssignTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignedTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDefaultClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialGrenadeType DefaultSpecialGrenade;
    
    APromodWorldSettings();
};

