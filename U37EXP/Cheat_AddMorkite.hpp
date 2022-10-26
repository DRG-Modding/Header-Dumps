#ifndef UE4SS_SDK_Cheat_AddMorkite_HPP
#define UE4SS_SDK_Cheat_AddMorkite_HPP

class UCheat_AddMorkite_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    class UEditableTextBox* TextBox;
    FText Text;

    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_AddMorkite(int32 EntryPoint);
};

#endif
