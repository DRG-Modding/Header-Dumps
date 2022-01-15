#ifndef UE4SS_SDK_ConsoleScreen_SelectMission_HPP
#define UE4SS_SDK_ConsoleScreen_SelectMission_HPP

class UConsoleScreen_SelectMission_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    UImage* Image_0;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_146;
    UTextBlock* TXT_Main;
    UTextBlock* TXT_Unavailable;
    bool ConsoleEnabled;

    void Construct();
    void DisableConsole();
    void SetConsoleEnabled(bool Enabled);
    void ExecuteUbergraph_ConsoleScreen_SelectMission(int32 EntryPoint, bool K2Node_CustomEvent_Enabled, ESlateVisibility Temp_byte_Variable, float CallFunc_RandomFloat_ReturnValue, ESlateVisibility Temp_byte_Variable_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
}

#endif
