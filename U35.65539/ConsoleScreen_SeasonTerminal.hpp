#ifndef UE4SS_SDK_ConsoleScreen_SeasonTerminal_HPP
#define UE4SS_SDK_ConsoleScreen_SeasonTerminal_HPP

class UConsoleScreen_SeasonTerminal_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_SeasonTerminal(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
