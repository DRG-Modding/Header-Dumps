#ifndef UE4SS_SDK_HackingPod_HackScreenLeft_HPP
#define UE4SS_SDK_HackingPod_HackScreenLeft_HPP

class UHackingPod_HackScreenLeft_C : public UUI_HackingPod_Screen_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_105;
    class UImage* IMG_Caution;

    void Construct();
    void HackingStarted();
    void ExecuteUbergraph_HackingPod_HackScreenLeft(int32 EntryPoint);
};

#endif
