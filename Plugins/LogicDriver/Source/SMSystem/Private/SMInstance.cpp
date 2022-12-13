#include "SMInstance.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USMInstance;
class UObject;
class USMStateMachineInstance;
class USMTransitionInstance;
class USMStateInstance_Base;
class USMStateMachineComponent;

void USMInstance::Update(float DeltaSeconds) {
}

void USMInstance::TryGetTransitionInfo(const FGuid& Guid, FSMTransitionInfo& TransitionInfo, bool& bSuccess) const {
}

void USMInstance::TryGetStateInfo(const FGuid& Guid, FSMStateInfo& StateInfo, bool& bSuccess) const {
}

void USMInstance::TryGetNestedActiveState(FSMStateInfo& FoundState, bool& bSuccess) const {
}

void USMInstance::Tick_Implementation(float DeltaTime) {
}

void USMInstance::Stop() {
}

void USMInstance::StartWithNewContext(UObject* Context) {
}

void USMInstance::Start() {
}

void USMInstance::Shutdown() {
}

void USMInstance::SetTickOnManualUpdate(bool Value) {
}

void USMInstance::SetTickInterval(float Value) {
}

void USMInstance::SetStopOnEndState(bool Value) {
}

void USMInstance::SetStateMachineClass(TSubclassOf<USMStateMachineInstance> NewStateMachineClass) {
}

void USMInstance::SetContext(UObject* Context) {
}

void USMInstance::SetCanTickWhenPaused(bool Value) {
}

void USMInstance::SetCanEverTick(bool Value) {
}

void USMInstance::SetAutoManageTime(bool Value) {
}

void USMInstance::REP_StartChanged() {
}

void USMInstance::OnStateMachineUpdate_Implementation(float DeltaSeconds) {
}

void USMInstance::OnStateMachineTransitionTaken_Implementation(const FSMTransitionInfo& Transition) {
}

void USMInstance::OnStateMachineStop_Implementation() {
}

void USMInstance::OnStateMachineStateChanged_Implementation(const FSMStateInfo& ToState, const FSMStateInfo& FromState) {
}

void USMInstance::OnStateMachineStart_Implementation() {
}

void USMInstance::OnStateMachineInitialized_Implementation() {
}

void USMInstance::LoadFromState(const FGuid& FromGuid, bool bAllParents) {
}

void USMInstance::LoadFromMultipleStates(const TArray<FGuid>& FromGuids) {
}

bool USMInstance::IsTickableWhenPaused() const {
    return false;
}

bool USMInstance::IsTickable() const {
    return false;
}

bool USMInstance::IsInitialized() const {
    return false;
}

bool USMInstance::IsInEndState() const {
    return false;
}

bool USMInstance::IsActive() const {
    return false;
}

void USMInstance::Internal_Update(float DeltaSeconds) {
}

void USMInstance::Internal_EventCleanup(const FGuid& NodeGuid) {
}

void USMInstance::Initialize(UObject* Context) {
}

bool USMInstance::HasStarted() const {
    return false;
}

USMTransitionInstance* USMInstance::GetTransitionInstanceByGuid(const FGuid& Guid) const {
    return NULL;
}

float USMInstance::GetTickInterval() const {
    return 0.0f;
}

TSubclassOf<USMStateMachineInstance> USMInstance::GetStateMachineClass() const {
    return NULL;
}

USMStateInstance_Base* USMInstance::GetStateInstanceByGuid(const FGuid& Guid) const {
    return NULL;
}

USMStateInstance_Base* USMInstance::GetSingleActiveStateInstance(bool bCheckNested) const {
    return NULL;
}

FGuid USMInstance::GetSingleActiveStateGuid(bool bCheckNested) const {
    return FGuid{};
}

USMStateMachineInstance* USMInstance::GetRootStateMachineInstance() const {
    return NULL;
}

USMInstance* USMInstance::GetReferenceOwner() const {
    return NULL;
}

USMInstance* USMInstance::GetReferencedInstanceByGuid(const FGuid& Guid) const {
    return NULL;
}

FString USMInstance::GetNestedActiveStateName() const {
    return TEXT("");
}

FGuid USMInstance::GetNestedActiveStateGuid() const {
    return FGuid{};
}

USMInstance* USMInstance::GetMasterReferenceOwner() {
    return NULL;
}

UObject* USMInstance::GetContext() const {
    return NULL;
}

USMStateMachineComponent* USMInstance::GetComponentOwner() const {
    return NULL;
}

void USMInstance::GetAllTransitionInstances(TArray<USMTransitionInstance*>& TransitionInstances) const {
}

void USMInstance::GetAllStateInstances(TArray<USMStateInstance_Base*>& StateInstances) const {
}

TArray<USMInstance*> USMInstance::GetAllReferencedInstances(bool bIncludeChildren) const {
    return TArray<USMInstance*>();
}

TArray<FGuid> USMInstance::GetAllCurrentStateGuids() const {
    return TArray<FGuid>();
}

void USMInstance::GetAllActiveStateInstances(TArray<USMStateInstance_Base*>& ActiveStateInstances) const {
}

void USMInstance::GetAllActiveStateGuids(TArray<FGuid>& ActiveGuids) const {
}

FString USMInstance::GetActiveStateName() const {
    return TEXT("");
}

USMStateInstance_Base* USMInstance::GetActiveStateInstance(bool bCheckNested) const {
    return NULL;
}

FGuid USMInstance::GetActiveStateGuid() const {
    return FGuid{};
}

void USMInstance::EvaluateTransitions() {
}

bool USMInstance::CanTickOnManualUpdate() const {
    return false;
}

bool USMInstance::CanEverTick() const {
    return false;
}

bool USMInstance::CanAutoManageTime() const {
    return false;
}

void USMInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USMInstance, R_StateMachineContext);
    DOREPLIFETIME(USMInstance, R_ActiveStates);
    DOREPLIFETIME(USMInstance, R_bHasStarted);
}

USMInstance::USMInstance() {
    this->ComponentOwner = NULL;
    this->R_StateMachineContext = NULL;
    this->ReferenceOwner = NULL;
    this->StateMachineClass = NULL;
    this->bAutoManageTime = true;
    this->bStopOnEndState = false;
    this->bCanEverTick = true;
    this->bCanTickWhenPaused = false;
    this->TickInterval = 0.00f;
    this->bTickRegistered = true;
    this->bTickBeforeInitialize = false;
    this->MaxTimeToWaitForUpdate = 0.00f;
    this->TimeSinceAllowedTick = 0.00f;
    this->WorldSeconds = 0.00f;
    this->WorldTimeDelta = 0.00f;
    this->bCallTickOnManualUpdate = false;
    this->bIsTicking = false;
    this->bIsUpdating = false;
    this->bCanEvaluateTransitionsLocally = true;
    this->bCanTakeTransitionsLocally = true;
    this->bCanExecuteStateLogic = true;
    this->R_bHasStarted = false;
}

