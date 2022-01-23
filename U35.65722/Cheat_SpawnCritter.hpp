#ifndef UE4SS_SDK_Cheat_SpawnCritter_HPP
#define UE4SS_SDK_Cheat_SpawnCritter_HPP

class UCheat_SpawnCritter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UComboBoxString* ComboBoxString_0;
    class UEditableTextBox* CountTextBox;
    TArray<class UBaseCritterDescriptor*> Critters;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnCritter(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UBaseCritterDescriptor* CallFunc_Array_Get_Item, FString CallFunc_GetDisplayName_ReturnValue, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, FString CallFunc_GetSelectedOption_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class UBaseCritterDescriptor* CallFunc_Array_Get_Item_1, FString CallFunc_GetDisplayName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

#endif
