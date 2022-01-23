#ifndef UE4SS_SDK_Cheat_God_HPP
#define UE4SS_SDK_Cheat_God_HPP

class UCheat_God_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_0;

    void Construct();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_God(int32 EntryPoint, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool Temp_bool_Variable, ECheckBoxState Temp_byte_Variable, ECheckBoxState Temp_byte_Variable_1, bool K2Node_ComponentBoundEvent_bIsChecked, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue_1, bool CallFunc_IsInGodMode_ReturnValue, ECheckBoxState K2Node_Select_Default);
};

#endif
