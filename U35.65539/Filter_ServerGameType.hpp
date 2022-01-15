#ifndef UE4SS_SDK_Filter_ServerGameType_HPP
#define UE4SS_SDK_Filter_ServerGameType_HPP

class UFilter_ServerGameType_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Option_C* Basic_Option;
    UCheck_ServerGameType_C* Check_Approved;
    UCheck_ServerGameType_C* Check_Sandbox;
    UBasic_ExpandableMenu_C* MenuGameType;
    UBasic_BoolUserSetting_C* Option_OnlyModdedServers;
    UCanvasPanel* RootCanvas;
    TArray<UCheck_ServerGameType_C*> Entries;
    FFilter_ServerGameType_COnSelectionChanged OnSelectionChanged;
    void OnSelectionChanged();
    bool Sandbox;

    void VerifyOnlyModded(EGameType LastClicked, bool CallFunc_GetIsChecked_Checked, bool CallFunc_GetIsChecked_Checked_1, bool CallFunc_GetIsChecked_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void VerifyRules(TArray<EGameType> Selected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<EGameType>& CallFunc_GetSelectedGameTypes_Gametypes, UCheck_ServerGameType_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void IsSandBoxMode(bool& SandboxMode, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void CreateEntries(UCheck_ServerGameType_C* Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UCheck_ServerGameType_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, OnCheckedChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsSandBoxMode_SandboxMode, TArray<UCheck_ServerGameType_C*>& K2Node_MakeArray_Array, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void Reset(TArray<EGameType> Selected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsSandBoxMode_SandboxMode, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_Array_Length_ReturnValue, UCheck_ServerGameType_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void GetSelectedGameTypes(TArray<EGameType>& GameTypes, UCheck_ServerGameType_C* Entry, TArray<EGameType> Result, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetIsChecked_Checked, const TArray<EGameType>& K2Node_MakeArray_Array, const TArray<EGameType>& K2Node_MakeArray_Array_1, bool CallFunc_GetIsChecked_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<EGameType>& K2Node_MakeArray_Array_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, UCheck_ServerGameType_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void OpenMenu(bool Open);
    void UpdateSubheader(int32 CheckedCount, UCheck_ServerGameType_C* Entry, FText HeaderText, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, int32 Temp_int_Variable, bool Temp_bool_Variable_1, FText Temp_text_Variable_2, bool Temp_bool_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FText Temp_text_Variable_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, UCheck_ServerGameType_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue, FText K2Node_Select_Default_1, FText K2Node_Select_Default_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_GetIsChecked_Checked, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void OnGameTypeChanged(bool IsChecked, EGameType Gametype);
    void Construct();
    void BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Filter_ServerGameType(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_IsChecked, EGameType K2Node_CustomEvent_Gametype);
    void OnSelectionChanged__DelegateSignature();
}

#endif
