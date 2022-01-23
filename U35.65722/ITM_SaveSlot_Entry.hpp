#ifndef UE4SS_SDK_ITM_SaveSlot_Entry_HPP
#define UE4SS_SDK_ITM_SaveSlot_Entry_HPP

class UITM_SaveSlot_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_ButtonScalable_C* Button_Delete;
    class UBasic_ButtonScalable_C* Button_Load;
    class UITM_SaveSlot_Entry_ClassIcon_C* Driller;
    class UITM_SaveSlot_Entry_ClassIcon_C* Engineer;
    class UITM_SaveSlot_Entry_ClassIcon_C* Gunner;
    class UImage* Image_1;
    class UImage* IMG_MissionIcon;
    class UButton* MainButton;
    class UITM_SaveSlot_Entry_ClassIcon_C* Scout;
    class UTextBlock* Text_Rank;
    class UTextBlock* TXT_MainSave;
    class UTextBlock* TXT_Modded;
    class UTextBlock* TXT_SaveName;
    class UTextBlock* TXT_TimeStamp;
    class UBasic_ToolTip_C* MutatorToolTip;
    class UBasic_ToolTip_C* WarningToolTip;
    class UBiome_ToolTip_C* BiomeToolTip;
    FString saveSlotName;
    FString FullSaveSlotName;
    FITM_SaveSlot_Entry_COnSaveDeleted OnSaveDeleted;
    void OnSaveDeleted();
    FITM_SaveSlot_Entry_COnSaveConverted OnSaveConverted;
    void OnSaveConverted();
    class UFSDSaveGame* SaveInstance;
    FITM_SaveSlot_Entry_COnSaveDetails OnSaveDetails;
    void OnSaveDetails(class UFSDSaveGame* SaveSlot);
    FITM_SaveSlot_Entry_COnSaveLoaded OnSaveLoaded;
    void OnSaveLoaded();
    bool ActiveSave;
    class UBasic_ToolTip_C* LoadButtonTooltip;
    class UBasic_ToolTip_C* DeleteButtonTooltip;
    FITM_SaveSlot_Entry_COnSaveDeletedWithReference OnSaveDeletedWithReference;
    void OnSaveDeletedWithReference(class UFSDSaveGame* save);

    class UWidget* CreateDeleteButtonToolTip(FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, FText Temp_text_Variable_1, bool CallFunc_GetIsEnabled_ReturnValue, bool Temp_bool_Variable, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, FText K2Node_Select_Default);
    class UWidget* CreateLoadButtonToolTip(FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, FText Temp_text_Variable_1, bool CallFunc_GetIsEnabled_ReturnValue, bool Temp_bool_Variable, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, FText K2Node_Select_Default);
    void SetIfSaveIsActive(bool IsMainSlot, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_GetCurrentUserSaveSlotName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, FString CallFunc_GetCurrentUserSaveSlotName_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue);
    void SaveNameExists(FString Name, bool& Exists, FString CallFunc_Replace_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<class UFSDSaveGame*>& CallFunc_GetAllSavesFromDisk_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFSDSaveGame* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void SetSelectedColor(FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, FButtonStyle K2Node_MakeStruct_ButtonStyle);
    void SetHeroRanks(FGuid CallFunc_GetSaveGameIDFromCharacterID_ReturnValue, int32 CallFunc_GetCharacterRetirementCount_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FGuid CallFunc_GetSaveGameIDFromCharacterID_ReturnValue_1, int32 CallFunc_GetCharacterRetirementCount_ReturnValue_1, FGuid CallFunc_GetSaveGameIDFromCharacterID_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_GetCharacterRetirementCount_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_2, FGuid CallFunc_GetSaveGameIDFromCharacterID_ReturnValue_3, int32 CallFunc_GetCharacterRetirementCount_ReturnValue_3, FText CallFunc_Conv_IntToText_ReturnValue_3);
    void GetSaveSlotName(class UFSDSaveGame* SaveGame, bool ReturnEmptyOnNonUser, FString& OutSaveSlotName, FString CallFunc_GetSlotLoadedFrom_ReturnValue, FString CallFunc_GetName_ReturnValue, FString CallFunc_SelectString_ReturnValue, int32 CallFunc_GetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void SetValues(class UFSDSaveGame* SaveGameInstance, bool MainSlot, bool CallFunc_GetIsModded_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreDeprecatedModsInstalled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible, bool CallFunc_GetIsModded_ReturnValue_1, FString CallFunc_GetSaveSlotName_OutSaveSlotName, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_GetSaveSlotName_OutSaveSlotName_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_GetSlotLoadedFrom_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FDateTime CallFunc_GetSlotTimeStamp_ReturnValue, FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void LoadAnswer(bool Yes);
    void BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void DeleteAnswer(bool Yes);
    void BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SaveSlot_Entry(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_ITM_SaveSlot_EntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FText Temp_text_Variable, FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Yes_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FText CallFunc_GetText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool K2Node_CustomEvent_Yes, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_DeleteFromDisk_ReturnValue, bool K2Node_Event_IsDesignTime, FText CallFunc_GetText_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, FText K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_2, FText CallFunc_Format_ReturnValue_1, bool CallFunc_AreModsInstalled_ReturnValue_1, FExecuteUbergraph_ITM_SaveSlot_EntryK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_2);
    void OnSaveDeletedWithReference__DelegateSignature(class UFSDSaveGame* save);
    void OnSaveLoaded__DelegateSignature();
    void OnSaveDetails__DelegateSignature(class UFSDSaveGame* SaveSlot);
    void OnSaveConverted__DelegateSignature();
    void OnSaveDeleted__DelegateSignature();
};

#endif
