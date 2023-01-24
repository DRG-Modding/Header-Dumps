#ifndef UE4SS_SDK_Widget_Biotank_Data_HPP
#define UE4SS_SDK_Widget_Biotank_Data_HPP

class UWidget_Biotank_Data_C : public UUI_HackingPod_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation;
    class UImage* Image;
    class UImage* IMG_Caution;

    void Construct();
    void HackingStarted();
    void ExecuteUbergraph_Widget_Biotank_Data(int32 EntryPoint);
};

#endif
