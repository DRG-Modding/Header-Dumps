#ifndef UE4SS_SDK_ITM_RestoreSaveList_Entry_HPP
#define UE4SS_SDK_ITM_RestoreSaveList_Entry_HPP

class UITM_RestoreSaveList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UButton* Button_0;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* IMG_MissionIcon;
    class UTextBlock* Text_Credits;
    class UTextBlock* Text_Rank;
    class UTextBlock* Text_Star;
    class UTextBlock* TXT_Modded;
    class UTextBlock* TXT_SaveName;
    class UTextBlock* TXT_TimeStamp;
    FBlueprintSessionResult Session;
    class UBasic_ToolTip_C* MutatorToolTip;
    class UBasic_ToolTip_C* WarningToolTip;
    class UBiome_ToolTip_C* BiomeToolTip;
    class UFSDSaveGame* SaveGame;
    int32 CurrentIndex;
    FString CurrentName;
    class UBasic_ToolTip_C* ToolTip;
    FText TextForTooltip;

    class UWidget* CreateToolTipWidget(bool CallFunc_IsValid_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue);
    void SetValues(int32 PlayerRank, int32 Credits, int32 PromotionRank, FString slotName, bool CurrentSave, class UFSDSaveGame* SaveGameInstance, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FText Temp_text_Variable_2, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_GetIsModded_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility K2Node_Select_Default, FText K2Node_Select_Default_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_GetIsModded_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, FText Temp_text_Variable_3, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_StringToText_ReturnValue_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_GetCurrentUserSaveSlotName_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, FString CallFunc_GetCurrentUserSaveSlotName_ReturnValue_1, FString CallFunc_Replace_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_Contains_ReturnValue_1, FText K2Node_Select_Default_2, FDateTime CallFunc_GetSlotTimeStamp_ReturnValue, FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_4, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2);
    void OnFailure_01B969514F5C76910A60AC87B4757BE7();
    void OnSuccess_01B969514F5C76910A60AC87B4757BE7();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void Answer(bool Yes);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_RestoreSaveList_Entry(int32 EntryPoint, FExecuteUbergraph_ITM_RestoreSaveList_EntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Yes, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, bool K2Node_Event_IsDesignTime, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FString CallFunc_GetName_ReturnValue, int32 CallFunc_GetIndex_ReturnValue, FExecuteUbergraph_ITM_RestoreSaveList_EntryK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FExecuteUbergraph_ITM_RestoreSaveList_EntryK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_GetCurrentUserSaveSlotName_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue);
};

#endif
