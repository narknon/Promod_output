#include "KantanCartesianChartBase.h"

class UKantanPointStyle;

void UKantanCartesianChartBase::SetYAxisConfig(const FCartesianAxisConfig& InCfg) {
}

void UKantanCartesianChartBase::SetXAxisConfig(const FCartesianAxisConfig& InCfg) {
}

void UKantanCartesianChartBase::SetPlotScaleByRange(const FCartesianAxisRange& InRangeX, const FCartesianAxisRange& InRangeY) {
}

void UKantanCartesianChartBase::SetPlotScale(const FVector2D& InScale, const FVector2D& InFocalCoords) {
}

void UKantanCartesianChartBase::SetDataPointSize(TEnumAsByte<EKantanDataPointSize::Type> InSize) {
}

void UKantanCartesianChartBase::SetAxisTitlePadding(const FMargin& InPadding) {
}

void UKantanCartesianChartBase::EnableSeries(FName ID, bool bEnable) {
}

void UKantanCartesianChartBase::ConfigureSeries(FName ID, bool bDrawPoints, bool bDrawLines) {
}

void UKantanCartesianChartBase::AddSeriesStyleOverride(FName SeriesId, UKantanPointStyle* PointStyle, FLinearColor Color) {
}

UKantanCartesianChartBase::UKantanCartesianChartBase() {
    this->DataPointSize = EKantanDataPointSize::Medium;
    this->bAntiAlias = true;
}

