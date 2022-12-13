#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UpdateUIDelegate.h"
#include "PFPlayerId.h"
#include "PFSingleEntityMembershipInfo.h"
#include "PFGroupManager.generated.h"

class UPlayFabSubsystem;
class UPFPlayerIdCache;

UCLASS(Blueprintable, Within=PlayFabSubsystem)
class PLAYFABSUBSYSTEM_API UPFGroupManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GroupInvitationEntityIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPFPlayerId> GroupApplicantEntityIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPFPlayerId> GroupBlocksEntityIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPFPlayerId> GroupInvitesEntityIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPFPlayerId> GroupMembersEntityIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPFSingleEntityMembershipInfo> SingleEntityMembershipInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateUI UpdateUIEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PlayFabSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFPlayerIdCache* PlayerIdCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGroupCreated;
    
public:
    UPFGroupManager();
    UFUNCTION(BlueprintCallable)
    void UpdateGroupRoleInfo(const FString& GroupEntityId, const FString& NewRoleName, const FString& RoleId, int32 ExpectedProfileVersion);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGroupInfo(const FString& GroupEntityId, const FString& GroupName, const FString& AdminRoleId, const FString& MemberRoleId, int32 ExpectedProfileVersion);
    
    UFUNCTION(BlueprintCallable)
    void UnblockPlayerFromGroup(const FPFPlayerId& PlayerId, const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void RejectGroupInvitation(const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void RejectApplicant(const FPFPlayerId& PlayerId, const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void ListSingleEntityMembership(const FPFPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ListMembershipOpportunities();
    
    UFUNCTION(BlueprintCallable)
    void ListGroupMembers(const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void ListGroupInvitations(const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void ListGroupBlocks(const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void ListGroupApplications(const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void KickPlayerFromGroup(const FPFPlayerId& PlayerId, const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void InviteEntityToGroup(const FPFPlayerId& PlayerId, const FString& GroupEntityId, const FString& Role);
    
    UFUNCTION(BlueprintCallable)
    void GetIsPlayerMemberOfGroupOrRole(const FPFPlayerId& PlayerId, const FString& GroupEntityId, const FString& Role);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupInfo(const FString& GroupEntityId, const FString& GroupName);
    
    UFUNCTION(BlueprintCallable)
    void DeleteRoleInGroup(const FString& GroupEntityId, const FString& RoleId);
    
    UFUNCTION(BlueprintCallable)
    void DeleteGroup(const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void CreateNewRoleInGroup(const FString& GroupEntityId, const FString& RoleId, const FString& RoleName);
    
    UFUNCTION(BlueprintCallable)
    void CreateGroup(const FString& GroupName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEntityMemberRole(const FString& GroupEntityId, const FString& OriginRoleId, const FString& DestinationRoleId, const FPFPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void BlockPlayerFromGroup(const FPFPlayerId& PlayerId, const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void ApplyToGroup(const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void AcceptGroupInvitation(const FString& GroupEntityId);
    
    UFUNCTION(BlueprintCallable)
    void AcceptApplicant(const FPFPlayerId& PlayerId, const FString& GroupEntityId);
    
};

