#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SMStateMachineInterface.h"
#include "OnStateMachineStoppedSignatureDelegate.h"
#include "SMInstanceInterface.h"
#include "OnStateMachineInitializedSignatureDelegate.h"
#include "OnStateMachineStartedSignatureDelegate.h"
#include "OnStateMachineUpdatedSignatureDelegate.h"
#include "OnStateMachineTransitionTakenSignatureDelegate.h"
#include "OnStateMachineStateChangedSignatureDelegate.h"
#include "SMNetworkedTransaction.h"
#include "SMStateMachine.h"
#include "SMTransitionInfo.h"
#include "SMStateInfo.h"
#include "SMInstance.generated.h"

class USMTransitionInstance;
class USMStateMachineComponent;
class USMStateMachineNetworkedInterface;
class ISMStateMachineNetworkedInterface;
class USMInstance;
class USMStateMachineInstance;
class USMStateInstance_Base;

UCLASS(Blueprintable)
class SMSYSTEM_API USMInstance : public UObject, public ISMStateMachineInterface, public ISMInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RootStateMachineGuid;
    
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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USMStateMachineComponent* ComponentOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISMStateMachineNetworkedInterface> ServerStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSMNetworkedTransaction> ActiveTransactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMStateMachine RootStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UObject* R_StateMachineContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> R_ActiveStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USMInstance* ReferenceOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USMStateMachineInstance> StateMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoManageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnEndState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTickWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickBeforeInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxTimeToWaitForUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceAllowedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorldSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorldTimeDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallTickOnManualUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUpdating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanEvaluateTransitionsLocally: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanTakeTransitionsLocally: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanExecuteStateLogic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=REP_StartChanged, meta=(AllowPrivateAccess=true))
    uint8 R_bHasStarted: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ReferenceTemplates;
    
    USMInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TryGetTransitionInfo(const FGuid& Guid, FSMTransitionInfo& TransitionInfo, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TryGetStateInfo(const FGuid& Guid, FSMStateInfo& StateInfo, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TryGetNestedActiveState(FSMStateInfo& FoundState, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void StartWithNewContext(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable)
    void SetTickOnManualUpdate(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTickInterval(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStopOnEndState(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStateMachineClass(TSubclassOf<USMStateMachineInstance> NewStateMachineClass);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void SetCanTickWhenPaused(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCanEverTick(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoManageTime(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void REP_StartChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateMachineUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateMachineTransitionTaken(const FSMTransitionInfo& Transition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateMachineStop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateMachineStateChanged(const FSMStateInfo& ToState, const FSMStateInfo& FromState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateMachineStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateMachineInitialized();
    
    UFUNCTION(BlueprintCallable)
    void LoadFromState(const FGuid& FromGuid, bool bAllParents);
    
    UFUNCTION(BlueprintCallable)
    void LoadFromMultipleStates(const TArray<FGuid>& FromGuids);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTickableWhenPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTickable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEndState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Internal_Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Internal_EventCleanup(const FGuid& NodeGuid);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMTransitionInstance* GetTransitionInstanceByGuid(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTickInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USMStateMachineInstance> GetStateMachineClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetStateInstanceByGuid(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetSingleActiveStateInstance(bool bCheckNested) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSingleActiveStateGuid(bool bCheckNested) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateMachineInstance* GetRootStateMachineInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMInstance* GetReferenceOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMInstance* GetReferencedInstanceByGuid(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNestedActiveStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetNestedActiveStateGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMInstance* GetMasterReferenceOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateMachineComponent* GetComponentOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllTransitionInstances(TArray<USMTransitionInstance*>& TransitionInstances) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllStateInstances(TArray<USMStateInstance_Base*>& StateInstances) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USMInstance*> GetAllReferencedInstances(bool bIncludeChildren) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGuid> GetAllCurrentStateGuids() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllActiveStateInstances(TArray<USMStateInstance_Base*>& ActiveStateInstances) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllActiveStateGuids(TArray<FGuid>& ActiveGuids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetActiveStateInstance(bool bCheckNested) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetActiveStateGuid() const;
    
    UFUNCTION(BlueprintCallable)
    void EvaluateTransitions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTickOnManualUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAutoManageTime() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

