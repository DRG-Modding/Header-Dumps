#ifndef UE4SS_SDK_ScreenOverlay_Incapacitated_HPP
#define UE4SS_SDK_ScreenOverlay_Incapacitated_HPP

class UScreenOverlay_Incapacitated_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeAnim;
    UImage* Bottom;
    UImage* Top;

    void Construct();
    void ExecuteUbergraph_ScreenOverlay_Incapacitated(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
