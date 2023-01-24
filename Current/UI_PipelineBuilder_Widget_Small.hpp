#ifndef UE4SS_SDK_UI_PipelineBuilder_Widget_Small_HPP
#define UE4SS_SDK_UI_PipelineBuilder_Widget_Small_HPP

class UUI_PipelineBuilder_Widget_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_275;
    class UOverlay* InvalidBox;
    class UBasic_Label_C* UI_GenericLabel;
    class UOverlay* ValidBox;

    void SetStats(float Length, class UFSDLabelWidget* DistTextBox, class UFSDLabelWidget* VolumnTextBox);
    void SetState(const EPlaceableObstructionType BuildingState);
    void ExecuteUbergraph_UI_PipelineBuilder_Widget_Small(int32 EntryPoint);
};

#endif
