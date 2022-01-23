#ifndef UE4SS_SDK_ITM_CreateNewSaveSlot_Entry_HPP
#define UE4SS_SDK_ITM_CreateNewSaveSlot_Entry_HPP

class UITM_CreateNewSaveSlot_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FlashingText;
    class UBasic_ButtonCutCorner_C* Basic_CurrentProgress;
    class UBasic_ButtonCutCorner_C* Basic_NewProgress;
    class UImage* IMG_MissionIcon;
    class UBasic_TextInputField_C* SaveslotName_Input;
    FString saveSlotName;
    bool ResetProgress;
    FITM_CreateNewSaveSlot_Entry_COnSaveslotCreated OnSaveslotCreated;
    void OnSaveslotCreated();
    FString IlligalChars;
    class UBasic_ToolTip_C* CurrentProgressTooltip;

    class UWidget* CreateCurrentProgressButtonToolTip(bool CallFunc_IsValid_ReturnValue, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget);
    void CheckForIlligalChars(FString inString, bool& IsIlligal, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void ChangeSave(FString Name, bool Reset, bool StartTutorial, ESaveSlotChangeProcedure Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Replace_ReturnValue, ESaveSlotChangeProcedure Temp_byte_Variable_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool Temp_bool_Variable, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, ESaveSlotChangeProcedure K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, int32 CallFunc_GetAvailableUserSlotIndex_ReturnValue);
    void SaveSlotNameExists(bool& Exists, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<class UFSDSaveGame*>& CallFunc_GetAllSavesFromDisk_ReturnValue, FString CallFunc_Replace_ReturnValue, class UFSDSaveGame* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_GetName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void SaveNameInputError(bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, FText Temp_text_Variable_2, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Contains_ReturnValue, FText K2Node_Select_Default, FText K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
    void Answer(bool Yes);
    void BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void TutorialAnswer(bool Yes);
    void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text);
    void ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry(int32 EntryPoint, bool CallFunc_CheckForIlligalChars_IsIlligal, FText K2Node_ComponentBoundEvent_Text_1, uint8 K2Node_ComponentBoundEvent_CommitMethod, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_CheckForIlligalChars_IsIlligal_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool K2Node_CustomEvent_Yes_1, FText CallFunc_Conv_StringToText_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue_1, bool K2Node_CustomEvent_Yes, FExecuteUbergraph_ITM_CreateNewSaveSlot_EntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SaveSlotNameExists_Exists, FExecuteUbergraph_ITM_CreateNewSaveSlot_EntryK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FText K2Node_ComponentBoundEvent_Text, FString CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1);
    void OnSaveslotCreated__DelegateSignature();
};

#endif
