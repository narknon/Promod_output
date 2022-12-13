#include "Ladder.h"
#include "Components/SceneComponent.h"
#include "NavLinkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

ALadder::ALadder() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ForwardArrow"));
    this->NavLinkComponent = CreateDefaultSubobject<UNavLinkComponent>(TEXT("NavLink"));
    this->Steps = 10;
    this->Stride = 20.00f;
    this->LadderHeight = 400.00f;
    this->LadderType = SurfaceType_Default;
}

