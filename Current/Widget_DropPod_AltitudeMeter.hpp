#ifndef UE4SS_SDK_Widget_DropPod_AltitudeMeter_HPP
#define UE4SS_SDK_Widget_DropPod_AltitudeMeter_HPP

class UWidget_DropPod_AltitudeMeter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AlertBlink;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_146;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_148;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_149;
    class UTextBlock* HeaderText;
    class UImage* Image_41;
    class UTextBlock* TextBlockDepth;
    float Depth;

    void UpdateHeader(FText InText);
    void UpdateDepthText();
    void SetProgress(float Progress);
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_AltitudeMeter(int32 EntryPoint);
};

#endif
