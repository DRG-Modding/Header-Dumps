#ifndef UE4SS_SDK_ConsoleScreen_MissionTerminal_HPP
#define UE4SS_SDK_ConsoleScreen_MissionTerminal_HPP

class UConsoleScreen_MissionTerminal_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_MissionTerminal(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
