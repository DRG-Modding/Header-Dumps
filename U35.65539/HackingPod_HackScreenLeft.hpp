#ifndef UE4SS_SDK_HackingPod_HackScreenLeft_HPP
#define UE4SS_SDK_HackingPod_HackScreenLeft_HPP

class UHackingPod_HackScreenLeft_C : UUI_HackingPod_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* NewAnimation;
    UImage* Image;
    UImage* Image_1;
    UImage* Image_105;
    UImage* IMG_Caution;

    void Construct();
    void HackingStarted();
    void ExecuteUbergraph_HackingPod_HackScreenLeft(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
