#ifndef UE4SS_SDK_Menu_SaveSlots_HPP
#define UE4SS_SDK_Menu_SaveSlots_HPP

class UMenu_SaveSlots_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* CharLevelBG;
    class UITM_TopBar_ResourceCounter_C* CreditsCounter;
    class UTextBlock* Header;
    class UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveLevel;
    class UITM_CurrentSaveSlot_RankOrLevelReadout_C* ITM_ActiveRank;
    class UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry;
    class UITM_CurrentSaveSlot_Resources_C* ITM_CurrentSaveSlot_Resources;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_1;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_2;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry_3;
    class UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry;
    class UBorder* PlayerRankBG;
    class UVerticalBox* SaveSlotsBox;
    class UBorder* SelectedSlot;
    class UBorder* SlotList;
    class UTextBlock* TXT_NumberOfSlotsLeft;
    FMenu_SaveSlots_CSettingsChanged SettingsChanged;
    void SettingsChanged();
    int32 NumberOfSlots;

    void Set Create New Saveslot Entry(FSet Create New Saveslot EntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_GetMaxSaveSlots_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_GetAvailableUserSlotIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void BindSaveslotEvents(class UITM_SaveSlot_Entry_C* SaveslotWidget, FBindSaveslotEventsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FBindSaveslotEventsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FBindSaveslotEventsK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FBindSaveslotEventsK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3);
    void Set Selected Save(class UFSDSaveGame* SaveSlot, int32 Level, class UPlayerCharacterID* Character, FText Temp_text_Variable, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetClassLevel_ReturnValue, int32 CallFunc_GetRequiredXPForLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_GetName_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FString CallFunc_GetSlotLoadedFrom_ReturnValue, FString CallFunc_SelectString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, int32 CallFunc_GetPlayerRank_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetClassXP_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default);
    void SetColors(FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
    void SetInitialSelectedSave(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, ESlateVisibility K2Node_Select_Default);
    void CreateSaveSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetMaxSaveSlots_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UITM_SaveSlot_Entry_C* CallFunc_Create_ReturnValue, TArray<class UFSDSaveGame*>& CallFunc_GetAllSavesFromDisk_ReturnValue, class UFSDSaveGame* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetSlotLoadedFrom_ReturnValue, bool CallFunc_Contains_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void OnFailure_E9E78193470C6DFEB6754298C681AA76();
    void OnSuccess_E9E78193470C6DFEB6754298C681AA76();
    void Construct();
    void SaveDeleted();
    void SaveConverted();
    void PreConstruct(bool IsDesignTime);
    void SaveDetails(class UFSDSaveGame* SaveSlot);
    void SaveLoaded();
    void NewSaveslotCreated();
    void ExecuteUbergraph_Menu_SaveSlots(int32 EntryPoint, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* K2Node_CustomEvent_SaveSlot, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UITM_SaveSlot_Entry_C* K2Node_DynamicCast_AsITM_Save_Slot_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, FButtonStyle K2Node_MakeStruct_ButtonStyle, FExecuteUbergraph_Menu_SaveSlotsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Menu_SaveSlotsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SettingsChanged__DelegateSignature();
};

#endif
