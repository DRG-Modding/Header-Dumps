#ifndef UE4SS_SDK_ConsoleScreen_QuickJoin_HPP
#define UE4SS_SDK_ConsoleScreen_QuickJoin_HPP

class UConsoleScreen_QuickJoin_C : UUserWidget
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
    void ExecuteUbergraph_ConsoleScreen_QuickJoin(int32 EntryPoint, bool K2Node_CustomEvent_Enabled, ESlateVisibility Temp_byte_Variable, float CallFunc_RandomFloat_ReturnValue, ESlateVisibility Temp_byte_Variable_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool Temp_bool_Variable, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ESlateVisibility K2Node_Select_Default);
}

#endif
