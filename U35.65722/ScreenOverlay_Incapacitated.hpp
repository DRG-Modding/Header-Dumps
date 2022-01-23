#ifndef UE4SS_SDK_ScreenOverlay_Incapacitated_HPP
#define UE4SS_SDK_ScreenOverlay_Incapacitated_HPP

class UScreenOverlay_Incapacitated_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeAnim;
    class UImage* Bottom;
    class UImage* Top;

    void Construct();
    void ExecuteUbergraph_ScreenOverlay_Incapacitated(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
