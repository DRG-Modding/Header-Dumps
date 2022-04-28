#ifndef UE4SS_SDK_Widget_UseButton_Monitor_HPP
#define UE4SS_SDK_Widget_UseButton_Monitor_HPP

class UWidget_UseButton_Monitor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimMinimizeProgress;
    class UWidgetAnimation* AnimArrow;
    class UUI_ImageTinted_C* Img_Arrow;
    class UBasic_Label_C* Txt_Progress;
    class UBasic_Label_C* Txt_Status;
    class AFSDRefinery* Refinery;

    bool IsDeepDive();
    void OnStateChanged(ERefineryState InRefineryState);
    void Construct();
    void OnRefineryProgressChanged(float InProgress01);
    void OnCanStartRefineryChanged(bool CanUse);
    void ExecuteUbergraph_Widget_UseButton_Monitor(int32 EntryPoint);
};

#endif
