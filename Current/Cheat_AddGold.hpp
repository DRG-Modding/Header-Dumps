#ifndef UE4SS_SDK_Cheat_AddGold_HPP
#define UE4SS_SDK_Cheat_AddGold_HPP

class UCheat_AddGold_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    class UEditableTextBox* TextBox;

    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_AddGold(int32 EntryPoint);
};

#endif
