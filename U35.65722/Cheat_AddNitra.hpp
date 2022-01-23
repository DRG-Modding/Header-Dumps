#ifndef UE4SS_SDK_Cheat_AddNitra_HPP
#define UE4SS_SDK_Cheat_AddNitra_HPP

class UCheat_AddNitra_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    class UEditableTextBox* TextBox;

    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_AddNitra(int32 EntryPoint, class UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

#endif
