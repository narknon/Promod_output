#include "NUIMapPlacement.h"


void UNUIMapPlacement::RightMouseButtonUp() {
}

void UNUIMapPlacement::RightMouseButtonDown() {
}





void UNUIMapPlacement::MapDrawLines(FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, int32 Thickness, bool bAntiAlias) {
}

void UNUIMapPlacement::MapDrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, int32 Thickness, bool bAntiAlias) {
}

void UNUIMapPlacement::LeftMouseButtonUp() {
}

void UNUIMapPlacement::LeftMouseButtonDown() {
}

void UNUIMapPlacement::GetExampleLineStartPoint() {
}

void UNUIMapPlacement::ClearMap() {
}

UNUIMapPlacement::UNUIMapPlacement() {
    this->bLeftMouseDown = false;
    this->bRightMouseDown = false;
    this->CurrentThickness = 1;
    this->CurrentColourNum = 0;
    this->CurrentLineIndex = 0;
    this->ExampleLineStartPointImage = NULL;
}

