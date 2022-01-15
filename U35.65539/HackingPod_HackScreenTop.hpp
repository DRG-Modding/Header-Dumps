#ifndef UE4SS_SDK_HackingPod_HackScreenTop_HPP
#define UE4SS_SDK_HackingPod_HackScreenTop_HPP

class UHackingPod_HackScreenTop_C : UUI_HackingPod_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ButtonBlink;
    UImage* IMG_Caution;
    UImage* IMG_Caution_2;
    UImage* IMG_Caution_3;
    UImage* IMG_Caution_4;
    UScrollingText01_C* ScrollingText;
    UScrollingText03_C* ScrollingText_1;

    void Construct();
    void ExecuteUbergraph_HackingPod_HackScreenTop(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
