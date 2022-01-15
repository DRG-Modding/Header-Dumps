#ifndef UE4SS_SDK_Cheat_SpawnEnemy_HPP
#define UE4SS_SDK_Cheat_SpawnEnemy_HPP

class UCheat_SpawnEnemy_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_0;
    UComboBoxString* ComboBoxString_0;
    USpinBox* EnemyCountBox;
    TArray<UEnemyDescriptor*> Enemies;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnEnemy(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_GetSelectedOption_ReturnValue, UEnemyDescriptor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, UEnemyDescriptor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_SetSavedCheatValue_ReturnValue, float CallFunc_GetSavedCheatValue_ValueToGet, bool CallFunc_GetSavedCheatValue_ReturnValue, FString CallFunc_GetSelectedOption_ReturnValue_1, bool CallFunc_SetSavedCheatValue_ReturnValue_1, FString CallFunc_GetSavedCheatValue_ValueToGet_1, bool CallFunc_GetSavedCheatValue_ReturnValue_1);
}

#endif
