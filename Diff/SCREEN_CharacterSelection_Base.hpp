#ifndef UE4SS_SDK_SCREEN_CharacterSelection_Base_HPP
#define UE4SS_SDK_SCREEN_CharacterSelection_Base_HPP

class USCREEN_CharacterSelection_Base_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FSCREEN_CharacterSelection_Base_CBack Back;
    void Back();

    void Show();
    void ExecuteUbergraph_SCREEN_CharacterSelection_Base(int32 EntryPoint);
    void Back__DelegateSignature();
};

#endif
