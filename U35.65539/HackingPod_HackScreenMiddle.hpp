#ifndef UE4SS_SDK_HackingPod_HackScreenMiddle_HPP
#define UE4SS_SDK_HackingPod_HackScreenMiddle_HPP

class UHackingPod_HackScreenMiddle_C : UUI_HackingPod_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextBoxPopup;
    UWidgetAnimation* AccessGranted2;
    UWidgetAnimation* AccessGranted1;
    UWidgetAnimation* CautionBlink;
    UImage* Image_93;
    UImage* IMG_Caution;
    UImage* IMG_Caution_1;
    UScrollingText02_C* ScrollingText;
    UScrollingText02_C* ScrollingText_1;
    UScrollingText02_C* ScrollingText_3;

    void Construct();
    void ExecuteUbergraph_HackingPod_HackScreenMiddle(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
}

#endif
