#ifndef UE4SS_SDK_Cheat_SpawnEnemies_HPP
#define UE4SS_SDK_Cheat_SpawnEnemies_HPP

class UCheat_SpawnEnemies_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    class UCheckBox* CheckBox_0;

    void Construct();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_SpawnEnemies(int32 EntryPoint, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool K2Node_ComponentBoundEvent_bIsChecked, FText K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue);
};

#endif
