#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NUIBaseHUDElement.h"
#include "NUIAnnouncementList.generated.h"

class UNUIAnnouncement;

UCLASS(Blueprintable, EditInlineNew)
class UNUIAnnouncementList : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNUIAnnouncement*> Announcements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIAnnouncement> AnnouncementClass;
    
public:
    UNUIAnnouncementList();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewAnnouncement(UNUIAnnouncement* NewAnnouncement);
    
};

