#pragma once
#include "CoreMinimal.h"
#include "PFSingleEntityMembershipRoleInfo.generated.h"

USTRUCT(BlueprintType)
struct FPFSingleEntityMembershipRoleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RoleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RoleName;
    
    PLAYFABSUBSYSTEM_API FPFSingleEntityMembershipRoleInfo();
};

