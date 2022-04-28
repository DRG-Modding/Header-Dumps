#ifndef UE4SS_SDK_HackingPod_HackScreenTop_HPP
#define UE4SS_SDK_HackingPod_HackScreenTop_HPP

class UHackingPod_HackScreenTop_C : public UUI_HackingPod_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ButtonBlink;
    class UImage* IMG_Caution;
    class UImage* IMG_Caution_2;
    class UImage* IMG_Caution_3;
    class UImage* IMG_Caution_4;
    class UScrollingText01_C* ScrollingText;
    class UScrollingText03_C* ScrollingText_1;

    void Construct();
    void ExecuteUbergraph_HackingPod_HackScreenTop(int32 EntryPoint);
};

#endif
