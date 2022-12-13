#pragma once
#include "CoreMinimal.h"
#include "PFSingleEntityMembershipRoleInfo.h"
#include "PFSingleEntityMembershipInfo.generated.h"

USTRUCT(BlueprintType)
struct FPFSingleEntityMembershipInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPFSingleEntityMembershipRoleInfo> Roles;
    
    PLAYFABSUBSYSTEM_API FPFSingleEntityMembershipInfo();
};

