#ifndef UE4SS_SDK_ITM_RestoreSaveList_Entry_HPP
#define UE4SS_SDK_ITM_RestoreSaveList_Entry_HPP

class UITM_RestoreSaveList_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UButton* Button_0;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_2;
    UImage* IMG_MissionIcon;
    UTextBlock* Text_Credits;
    UTextBlock* Text_Rank;
    UTextBlock* Text_Star;
    UTextBlock* TXT_Modded;
    UTextBlock* TXT_SaveName;
    UTextBlock* TXT_TimeStamp;
    FBlueprintSessionResult Session;
    UBasic_ToolTip_C* MutatorToolTip;
    UBasic_ToolTip_C* WarningToolTip;
    UBiome_ToolTip_C* BiomeToolTip;
    UFSDSaveGame* SaveGame;
    int32 CurrentIndex;
    FString CurrentName;
    UBasic_ToolTip_C* ToolTip;
    FText TextForTooltip;

    UWidget* CreateToolTipWidget(bool CallFunc_IsValid_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue);
    void SetValues(int32 PlayerRank, int32 Credits, int32 PromotionRank, FString slotName, bool CurrentSave, UFSDSaveGame* SaveGameInstance, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FText Temp_text_Variable_2, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_GetIsModded_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility K2Node_Select_Default, FText K2Node_Select_Default_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_GetIsModded_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, FText Temp_text_Variable_3, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_StringToText_ReturnValue_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_GetCurrentUserSaveSlotName_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, FString CallFunc_GetCurrentUserSaveSlotName_ReturnValue_1, FString CallFunc_Replace_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_Contains_ReturnValue_1, FText K2Node_Select_Default_2, FDateTime CallFunc_GetSlotTimeStamp_ReturnValue, FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_4, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2);
    void OnFailure_01B969514F5C76910A60AC87B4757BE7();
    void OnSuccess_01B969514F5C76910A60AC87B4757BE7();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void Answer(bool Yes);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_RestoreSaveList_Entry(int32 EntryPoint, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Yes, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, bool K2Node_Event_IsDesignTime, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FString CallFunc_GetName_ReturnValue, int32 CallFunc_GetIndex_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, OnYesNoClickedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_GetCurrentUserSaveSlotName_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue);
}

#endif
