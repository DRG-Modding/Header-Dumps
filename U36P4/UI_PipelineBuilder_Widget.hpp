#ifndef UE4SS_SDK_UI_PipelineBuilder_Widget_HPP
#define UE4SS_SDK_UI_PipelineBuilder_Widget_HPP

class UUI_PipelineBuilder_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BarSlope;
    class UImage* InvalidBackground;
    class UFSDLabelWidget* LabelLength;
    class UFSDLabelWidget* LabelObstruction;
    class UFSDLabelWidget* LabelSlope;
    class UProgressBar* ProgressBarLength;
    class USlider* SliderElevation;
    class USlider* SliderObstruction;
    class UImage* ValidBackground;

    void SetUI(const EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent);
    void SetState(const EPlaceableObstructionType BuildingState, float Length, float LengthPercent, float ElevationChange, float SlopeAngle, float ObstructionPercent);
    void ExecuteUbergraph_UI_PipelineBuilder_Widget(int32 EntryPoint);
};

#endif
