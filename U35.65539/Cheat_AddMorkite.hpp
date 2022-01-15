#ifndef UE4SS_SDK_Cheat_AddMorkite_HPP
#define UE4SS_SDK_Cheat_AddMorkite_HPP

class UCheat_AddMorkite_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    UEditableTextBox* TextBox;
    FText Text;

    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_AddMorkite(int32 EntryPoint, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
}

#endif
