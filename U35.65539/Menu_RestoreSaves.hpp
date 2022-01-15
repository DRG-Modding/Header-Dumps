#ifndef UE4SS_SDK_Menu_RestoreSaves_HPP
#define UE4SS_SDK_Menu_RestoreSaves_HPP

class UMenu_RestoreSaves_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBlurBackground_C* BlurBackground;
    UBasic_ButtonScalable2_C* BTN_Back;
    UITM_TopBar_ResourceCounter_C* CreditsCounter;
    UTextBlock* FailedCloudText;
    UTextBlock* Header;
    UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon_C_0;
    UITM_RestoreSave_Resources_C* ITM_RestoreSave_Resources;
    UITM_RestoreSaveCategoryList_Entry_C* ITM_RestoreSaveCategoryList_Entry;
    UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel_C_0;
    UITM_TopBar_PlayerRank_C* ITM_TopBar_PlayerRank_C_0;
    UCircularThrobber* LoadingCloudsaves;
    UBasic_ButtonScalable2_C* LoadMoreCloudsavesButton;
    UBasic_Menu_LargeWindowWithHeader_C* MainWindow;
    UVerticalBox* RetrieveCloudBox;
    UTextBlock* RetrieveText;
    UScrollBox* SavesScrollBox;
    UCircularThrobber* WaitinForCloudCircularThrobber;
    UBasic_ButtonTab_C* ActiveTabButton;
    TArray<UFSDSaveGame*> SaveFilesForUser;
    AFSDPlayerState* PlayerState;
    TArray<UFSDSaveGame*> CloudSavesForUser;
    bool GottenCloudsaves;
    int32 CloudSaveOffset;
    FTimerHandle TimeoutTimerHandle;

    void LoadCloudSaves(int32 Offset, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool K2Node_Select_Default, int32 CallFunc_GetMaxSaveSlots_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void UpdateCloudSaveUI(int32 NumOfSavesLoaded, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue);
    void CreateCloudSaveList(TArray<UFSDSaveGame*>& Array, UFSDSaveGame* CurrentArrayElement, UITM_RestoreSaveList_Entry_C* currentItem, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FString CallFunc_Conv_IntToString_ReturnValue, UFSDSaveGame* CallFunc_Array_Get_Item, FString CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText Temp_text_Variable, FString CallFunc_GetSlotLoadedFrom_ReturnValue, FString CallFunc_GetName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, int32 CallFunc_GetCredits_ReturnValue, int32 CallFunc_GetPlayerRetirementRank_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool Temp_bool_Variable_1, UPanelSlot* CallFunc_AddChild_ReturnValue, FText K2Node_Select_Default, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, UITM_RestoreSaveList_Entry_C* CallFunc_Create_ReturnValue, FString K2Node_Select_Default_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1);
    void ClearList();
    void CreateSaveList(UFSDSaveGame* CurrentArrayElement, UITM_RestoreSaveList_Entry_C* currentItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UFSDSaveGame* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetSlotLoadedFrom_ReturnValue, FString CallFunc_GetName_ReturnValue, int32 CallFunc_GetCredits_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_GetPlayerRetirementRank_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool Temp_bool_Variable, UPanelSlot* CallFunc_AddChild_ReturnValue, FString K2Node_Select_Default, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<UFSDSaveGame*>& CallFunc_GetAllSavesFromDisk_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_RestoreSaveList_Entry_C* CallFunc_Create_ReturnValue);
    void Construct();
    void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void Back();
    void OnShown();
    void OnClosed();
    void Refresh();
    void CloudFailed();
    void CloadSaveGames(const TArray<UFSDSaveGame*>& savegames);
    void BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ReceiveOkCommand();
    void PreConstruct(bool IsDesignTime);
    void ReenableLoadmoreButton();
    void Timeout();
    void ExecuteUbergraph_Menu_RestoreSaves(int32 EntryPoint, UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, SDCloudLoad__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, const TArray<UFSDSaveGame*>& K2Node_CustomEvent_savegames, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, SDCloudFailed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
}

#endif
