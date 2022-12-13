#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MapEditorObject.h"
#include "MapEditorObject_Checkpoint.generated.h"

class AJumperCourse;

UCLASS(Blueprintable)
class PROMOD_API AMapEditorObject_Checkpoint : public AMapEditorObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AJumperCourse> CourseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectValue_CheckpointIndex;
    
    AMapEditorObject_Checkpoint();
};

