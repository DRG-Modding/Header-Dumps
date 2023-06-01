#ifndef UE4SS_SDK_UI_HackingTool_Grid_HPP
#define UE4SS_SDK_UI_HackingTool_Grid_HPP

class UUI_HackingTool_Grid_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFill;
    class UBasic_Image_C* Grid_Image;
    int32 Size;
    float FilledRadius;
    FMenuColorAndTint GridColor;
    FMenuColorAndTint FilledColor;

    void PlayFillAnimation(float InDuration);
    void SetFilledColor(FMenuColorAndTint InColor);
    void SetGridColor(FMenuColorAndTint InColor);
    void SetFilledRadius(float FilledRadius);
    void SetSize(int32 InSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HackingTool_Grid(int32 EntryPoint);
};

#endif
