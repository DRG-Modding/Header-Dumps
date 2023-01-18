#ifndef UE4SS_SDK_HackingPod_HackScreenMiddle_HPP
#define UE4SS_SDK_HackingPod_HackScreenMiddle_HPP

class UHackingPod_HackScreenMiddle_C : public UUI_HackingPod_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextBoxPopup;
    class UWidgetAnimation* AccessGranted2;
    class UWidgetAnimation* AccessGranted1;
    class UWidgetAnimation* CautionBlink;
    class UImage* Image_93;
    class UImage* IMG_Caution;
    class UImage* IMG_Caution_1;
    class UScrollingText02_C* ScrollingText;
    class UScrollingText02_C* ScrollingText_1;
    class UScrollingText02_C* ScrollingText_3;

    void Construct();
    void ExecuteUbergraph_HackingPod_HackScreenMiddle(int32 EntryPoint);
};

#endif
