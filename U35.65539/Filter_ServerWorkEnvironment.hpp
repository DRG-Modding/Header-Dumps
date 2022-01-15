#ifndef UE4SS_SDK_Filter_ServerWorkEnvironment_HPP
#define UE4SS_SDK_Filter_ServerWorkEnvironment_HPP

class UFilter_ServerWorkEnvironment_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* EntryBox;
    UBasic_ExpandableMenu_C* MenuWorkEnvironment;
    TArray<UCheck_ServerWorkEnvironment_C*> Entries;
    FFilter_ServerWorkEnvironment_COnSelectionChanged OnSelectionChanged;
    void OnSelectionChanged();

    void OpenMenu(bool Open);
    void GetSelectedDifficulties(TArray<UDifficultySetting*>& Difficulties, TArray<UDifficultySetting*> Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UCheck_ServerWorkEnvironment_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsChecked_Checked, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void IsDifficultySelected(UDifficultySetting* InDifficulty, bool& Selected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UCheck_ServerWorkEnvironment_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsChecked_Checked, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void UpdateSubheader(bool NoneSelected, bool AllSelected, UCheck_ServerWorkEnvironment_C* Entry, FText HeaderText, FText Temp_text_Variable, FText Temp_text_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, FText K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_GetIsChecked_Checked, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UCheck_ServerWorkEnvironment_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void Add Work Environment(UDifficultySetting* Difficulty, UCheck_ServerWorkEnvironment_C*& OutWidget, bool& OutIsChecked, bool IsChecked, UCheck_ServerWorkEnvironment_C* Widget, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetIsDifficultySelected_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UCheck_ServerWorkEnvironment_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin);
    void PreConstruct(bool IsDesignTime);
    void OnCheckedChanged(UCheck_ServerWorkEnvironment_C* CheckBox, UDifficultySetting* Difficulty, bool IsChecked);
    void Reset();
    void ExecuteUbergraph_Filter_ServerWorkEnvironment(int32 EntryPoint, UGameData* CallFunc_GetFSDGameData_ReturnValue, OnCheckedChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, UCheck_ServerWorkEnvironment_C* K2Node_CustomEvent_CheckBox, UDifficultySetting* K2Node_CustomEvent_Difficulty, bool K2Node_CustomEvent_IsChecked, UDifficultySetting* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UCheck_ServerWorkEnvironment_C* CallFunc_Add_Work_Environment_OutWidget, bool CallFunc_Add_Work_Environment_OutIsChecked, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue);
    void OnSelectionChanged__DelegateSignature();
}

#endif
