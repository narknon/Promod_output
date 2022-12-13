#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnStateMachineStartedSignatureDelegate.h"
#include "Components/ActorComponent.h"
#include "OnStateMachineStateChangedSignatureDelegate.h"
#include "SMStateMachineInterface.h"
#include "SMStateMachineNetworkedInterface.h"
#include "OnStateMachineStoppedSignatureDelegate.h"
#include "OnStateMachineInitializedSignatureDelegate.h"
#include "OnStateMachineUpdatedSignatureDelegate.h"
#include "OnStateMachineTransitionTakenSignatureDelegate.h"
#include "ESMNetworkConfigurationType.h"
#include "SMNetworkedTransaction.h"
#include "SMStateInfo.h"
#include "SMTransitionInfo.h"
#include "SMStateMachineComponent.generated.h"

class USMInstance;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SMSYSTEM_API USMStateMachineComponent : public UActorComponent, public ISMStateMachineInterface, public ISMStateMachineNetworkedInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineInitializedSignature OnStateMachineInitializedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineStartedSignature OnStateMachineStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineUpdatedSignature OnStateMachineUpdatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineStoppedSignature OnStateMachineStoppedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineTransitionTakenSignature OnStateMachineTransitionTakenEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateMachineStateChangedSignature OnStateMachineStateChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USMInstance> StateMachineClass;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESMNetworkConfigurationType> NetworkTickConfiguration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESMNetworkConfigurationType> NetworkTransitionConfiguration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESMNetworkConfigurationType> NetworkStateConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeSimulatedProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeTransitionsFromServerOnly;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionResetTimeSeconds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateStatesOnLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscardTransitionsBeforeInitialize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeToWaitForTransitionUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartOnBeginPlay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLetInstanceManageTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=REP_NetworkedTransactions, meta=(AllowPrivateAccess=true))
    TArray<FSMNetworkedTransaction> R_NetworkedTransactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSMNetworkedTransaction> PendingTransactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=REP_OnInstanceLoaded, meta=(AllowPrivateAccess=true))
    USMInstance* R_Instance;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USMInstance* InstanceTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=REP_ShuttingDown, meta=(AllowPrivateAccess=true))
    bool R_bShuttingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanInstanceNetworkTick;
    
public:
    USMStateMachineComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SERVER_Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SERVER_Stop();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SERVER_Start();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SERVER_Shutdown();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SERVER_ProcessTransaction(const TArray<FSMNetworkedTransaction>& Transactions);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SERVER_Initialize(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void REP_ShuttingDown();
    
    UFUNCTION(BlueprintCallable)
    void REP_OnInstanceLoaded();
    
    UFUNCTION(BlueprintCallable)
    void REP_NetworkedTransactions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostInitialize();
    
    UFUNCTION(BlueprintCallable)
    void Internal_OnStateMachineUpdated(USMInstance* Instance, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Internal_OnStateMachineTransitionTaken(USMInstance* Instance, FSMTransitionInfo Transition);
    
    UFUNCTION(BlueprintCallable)
    void Internal_OnStateMachineStopped(USMInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void Internal_OnStateMachineStateChanged(USMInstance* Instance, FSMStateInfo ToState, FSMStateInfo FromState);
    
    UFUNCTION(BlueprintCallable)
    void Internal_OnStateMachineStarted(USMInstance* Instance);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMInstance* GetInstance() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

