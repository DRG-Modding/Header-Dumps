#ifndef UE4SS_SDK_UI_HackingPod_Screen_Base_HPP
#define UE4SS_SDK_UI_HackingPod_Screen_Base_HPP

class UUI_HackingPod_Screen_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void HackingStarted();
    void ExecuteUbergraph_UI_HackingPod_Screen_Base(int32 EntryPoint);
};

#endif
