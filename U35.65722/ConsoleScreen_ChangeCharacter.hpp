#ifndef UE4SS_SDK_ConsoleScreen_ChangeCharacter_HPP
#define UE4SS_SDK_ConsoleScreen_ChangeCharacter_HPP

class UConsoleScreen_ChangeCharacter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;

    void Construct();
    void ExecuteUbergraph_ConsoleScreen_ChangeCharacter(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
