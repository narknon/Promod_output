#include "SMStateMachineComponent.h"
#include "Net/UnrealNetwork.h"

class UObject;
class USMInstance;

void USMStateMachineComponent::Update(float DeltaSeconds) {
}

void USMStateMachineComponent::Stop() {
}

void USMStateMachineComponent::Start() {
}

void USMStateMachineComponent::Shutdown() {
}

void USMStateMachineComponent::SERVER_Update_Implementation(float DeltaTime) {
}
bool USMStateMachineComponent::SERVER_Update_Validate(float DeltaTime) {
    return true;
}

void USMStateMachineComponent::SERVER_Stop_Implementation() {
}
bool USMStateMachineComponent::SERVER_Stop_Validate() {
    return true;
}

void USMStateMachineComponent::SERVER_Start_Implementation() {
}
bool USMStateMachineComponent::SERVER_Start_Validate() {
    return true;
}

void USMStateMachineComponent::SERVER_Shutdown_Implementation() {
}
bool USMStateMachineComponent::SERVER_Shutdown_Validate() {
    return true;
}

void USMStateMachineComponent::SERVER_ProcessTransaction_Implementation(const TArray<FSMNetworkedTransaction>& Transactions) {
}
bool USMStateMachineComponent::SERVER_ProcessTransaction_Validate(const TArray<FSMNetworkedTransaction>& Transactions) {
    return true;
}

void USMStateMachineComponent::SERVER_Initialize_Implementation(UObject* Context) {
}
bool USMStateMachineComponent::SERVER_Initialize_Validate(UObject* Context) {
    return true;
}

void USMStateMachineComponent::REP_ShuttingDown() {
}

void USMStateMachineComponent::REP_OnInstanceLoaded() {
}

void USMStateMachineComponent::REP_NetworkedTransactions() {
}


void USMStateMachineComponent::Internal_OnStateMachineUpdated(USMInstance* Instance, float DeltaSeconds) {
}

void USMStateMachineComponent::Internal_OnStateMachineTransitionTaken(USMInstance* Instance, FSMTransitionInfo Transition) {
}

void USMStateMachineComponent::Internal_OnStateMachineStopped(USMInstance* Instance) {
}

void USMStateMachineComponent::Internal_OnStateMachineStateChanged(USMInstance* Instance, FSMStateInfo ToState, FSMStateInfo FromState) {
}

void USMStateMachineComponent::Internal_OnStateMachineStarted(USMInstance* Instance) {
}

void USMStateMachineComponent::Initialize(UObject* Context) {
}

USMInstance* USMStateMachineComponent::GetInstance() const {
    return NULL;
}

void USMStateMachineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USMStateMachineComponent, R_NetworkedTransactions);
    DOREPLIFETIME(USMStateMachineComponent, R_Instance);
    DOREPLIFETIME(USMStateMachineComponent, R_bShuttingDown);
}

USMStateMachineComponent::USMStateMachineComponent() {
    this->StateMachineClass = NULL;
    this->NetworkTickConfiguration = SM_Client;
    this->NetworkTransitionConfiguration = SM_Client;
    this->NetworkStateConfiguration = SM_ClientAndServer;
    this->bIncludeSimulatedProxies = false;
    this->bTakeTransitionsFromServerOnly = false;
    this->TransitionResetTimeSeconds = 2.00f;
    this->bReplicateStatesOnLoad = true;
    this->bDiscardTransitionsBeforeInitialize = false;
    this->MaxTimeToWaitForTransitionUpdate = 2.00f;
    this->bInitializeOnBeginPlay = true;
    this->bStartOnBeginPlay = false;
    this->bLetInstanceManageTick = false;
    this->R_Instance = NULL;
    this->InstanceTemplate = NULL;
    this->bOverrideTick = false;
    this->bCanEverTick = true;
    this->bOverrideTickInterval = false;
    this->TickInterval = 0.00f;
    this->R_bShuttingDown = false;
    this->bCanInstanceNetworkTick = true;
}

