#include "PFGroupManager.h"

void UPFGroupManager::UpdateGroupRoleInfo(const FString& GroupEntityId, const FString& NewRoleName, const FString& RoleId, int32 ExpectedProfileVersion) {
}

void UPFGroupManager::UpdateGroupInfo(const FString& GroupEntityId, const FString& GroupName, const FString& AdminRoleId, const FString& MemberRoleId, int32 ExpectedProfileVersion) {
}

void UPFGroupManager::UnblockPlayerFromGroup(const FPFPlayerId& PlayerId, const FString& GroupEntityId) {
}

void UPFGroupManager::RejectGroupInvitation(const FString& GroupEntityId) {
}

void UPFGroupManager::RejectApplicant(const FPFPlayerId& PlayerId, const FString& GroupEntityId) {
}

void UPFGroupManager::ListSingleEntityMembership(const FPFPlayerId& PlayerId) {
}

void UPFGroupManager::ListMembershipOpportunities() {
}

void UPFGroupManager::ListGroupMembers(const FString& GroupEntityId) {
}

void UPFGroupManager::ListGroupInvitations(const FString& GroupEntityId) {
}

void UPFGroupManager::ListGroupBlocks(const FString& GroupEntityId) {
}

void UPFGroupManager::ListGroupApplications(const FString& GroupEntityId) {
}

void UPFGroupManager::KickPlayerFromGroup(const FPFPlayerId& PlayerId, const FString& GroupEntityId) {
}

void UPFGroupManager::InviteEntityToGroup(const FPFPlayerId& PlayerId, const FString& GroupEntityId, const FString& Role) {
}

void UPFGroupManager::GetIsPlayerMemberOfGroupOrRole(const FPFPlayerId& PlayerId, const FString& GroupEntityId, const FString& Role) {
}

void UPFGroupManager::GetGroupInfo(const FString& GroupEntityId, const FString& GroupName) {
}

void UPFGroupManager::DeleteRoleInGroup(const FString& GroupEntityId, const FString& RoleId) {
}

void UPFGroupManager::DeleteGroup(const FString& GroupEntityId) {
}

void UPFGroupManager::CreateNewRoleInGroup(const FString& GroupEntityId, const FString& RoleId, const FString& RoleName) {
}

void UPFGroupManager::CreateGroup(const FString& GroupName) {
}

void UPFGroupManager::ChangeEntityMemberRole(const FString& GroupEntityId, const FString& OriginRoleId, const FString& DestinationRoleId, const FPFPlayerId& PlayerId) {
}

void UPFGroupManager::BlockPlayerFromGroup(const FPFPlayerId& PlayerId, const FString& GroupEntityId) {
}

void UPFGroupManager::ApplyToGroup(const FString& GroupEntityId) {
}

void UPFGroupManager::AcceptGroupInvitation(const FString& GroupEntityId) {
}

void UPFGroupManager::AcceptApplicant(const FPFPlayerId& PlayerId, const FString& GroupEntityId) {
}

UPFGroupManager::UPFGroupManager() {
    this->PlayFabSubsystem = NULL;
    this->PlayerIdCache = NULL;
    this->bIsServer = false;
    this->bGroupCreated = false;
}

