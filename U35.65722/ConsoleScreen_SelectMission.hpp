#ifndef UE4SS_SDK_ConsoleScreen_SelectMission_HPP
#define UE4SS_SDK_ConsoleScreen_SelectMission_HPP

class UConsoleScreen_SelectMission_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    class UImage* Image_0;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_146;
    class UTextBlock* TXT_Main;
    class UTextBlock* TXT_Unavailable;
    bool ConsoleEnabled;

    void Construct();
    void DisableConsole();
    void SetConsoleEnabled(bool Enabled);
    void ExecuteUbergraph_ConsoleScreen_SelectMission(int32 EntryPoint, bool K2Node_CustomEvent_Enabled, ESlateVisibility Temp_byte_Variable, float CallFunc_RandomFloat_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
};

#endif
