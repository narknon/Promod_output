#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NUIBaseUIElement.h"
#include "Components/SlateWrapperTypes.h"
#include "UObject/NoExportTypes.h"
#include "NUIScoreboardGroup.generated.h"

class UNUIScoreboardRow;
class UNUIScoreboard;
class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIScoreboardGroup : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MemberCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor GroupColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNUIScoreboard* ParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility GroupHeaderVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility PlayerCountVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMemberListChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bScoreboardLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNUIScoreboardRow*> MemberWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIScoreboardRow> MemberWidgetClass;
    
    UNUIScoreboardGroup();
    UFUNCTION(BlueprintCallable)
    void SetScoreboardLock(bool newLock);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupHeaderVisible(bool newVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayersSorted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerRemovedFromGroup(UNUIScoreboardRow* LeavingPlayerWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerAddedToGroup(UNUIScoreboardRow* JoiningPlayerWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMemberWidgetListInitialized();
    
    UFUNCTION(BlueprintCallable)
    bool IsScoreboardLocked();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMemberCount();
    
    UFUNCTION(BlueprintCallable)
    UNUIScoreboardRow* GetGroupMemberWidget(int32 MemberIndex);
    
    UFUNCTION(BlueprintCallable)
    UNUIScoreboardRow* FindGroupMemberWidget(ABattalionPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    int32 FindGroupMemberIndex(ABattalionPlayerState* PlayerState);
    
};

