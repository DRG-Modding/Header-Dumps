#ifndef UE4SS_SDK_ConsoleScreen_Tutorial_HPP
#define UE4SS_SDK_ConsoleScreen_Tutorial_HPP

class UConsoleScreen_Tutorial_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    UTextBlock* TXT_Main;
    UTextBlock* TXT_Unavailable;
    bool ConsoleEnabled;

    void Construct();
    void DisableConsole();
    void SetConsoleEnabled(bool Enabled);
    void ExecuteUbergraph_ConsoleScreen_Tutorial(int32 EntryPoint, bool K2Node_CustomEvent_Enabled, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
}

#endif
