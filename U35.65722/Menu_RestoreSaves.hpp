#ifndef UE4SS_SDK_Menu_RestoreSaves_HPP
#define UE4SS_SDK_Menu_RestoreSaves_HPP

class UMenu_RestoreSaves_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_Back;
    class UITM_TopBar_ResourceCounter_C* CreditsCounter;
    class UTextBlock* FailedCloudText;
    class UTextBlock* Header;
    class UITM_TopBar_CharacterIcon_C* ITM_CharacterIcon_C_0;
    class UITM_RestoreSave_Resources_C* ITM_RestoreSave_Resources;
    class UITM_RestoreSaveCategoryList_Entry_C* ITM_RestoreSaveCategoryList_Entry;
    class UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel_C_0;
    class UITM_TopBar_PlayerRank_C* ITM_TopBar_PlayerRank_C_0;
    class UCircularThrobber* LoadingCloudsaves;
    class UBasic_ButtonScalable2_C* LoadMoreCloudsavesButton;
    class UBasic_Menu_LargeWindowWithHeader_C* MainWindow;
    class UVerticalBox* RetrieveCloudBox;
    class UTextBlock* RetrieveText;
    class UScrollBox* SavesScrollBox;
    class UCircularThrobber* WaitinForCloudCircularThrobber;
    class UBasic_ButtonTab_C* ActiveTabButton;
    TArray<class UFSDSaveGame*> SaveFilesForUser;
    class AFSDPlayerState* PlayerState;
    TArray<class UFSDSaveGame*> CloudSavesForUser;
    bool GottenCloudsaves;
    int32 CloudSaveOffset;
    FTimerHandle TimeoutTimerHandle;

    void LoadCloudSaves(int32 Offset, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool K2Node_Select_Default, int32 CallFunc_GetMaxSaveSlots_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void UpdateCloudSaveUI(int32 NumOfSavesLoaded, EFSDTargetPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FUpdateCloudSaveUIK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue);
    void CreateCloudSaveList(TArray<class UFSDSaveGame*>& Array, class UFSDSaveGame* CurrentArrayElement, class UITM_RestoreSaveList_Entry_C* currentItem, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FString CallFunc_Conv_IntToString_ReturnValue, class UFSDSaveGame* CallFunc_Array_Get_Item, FString CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText Temp_text_Variable, FString CallFunc_GetSlotLoadedFrom_ReturnValue, FString CallFunc_GetName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, int32 CallFunc_GetCredits_ReturnValue, int32 CallFunc_GetPlayerRetirementRank_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool Temp_bool_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, FText K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, class UITM_RestoreSaveList_Entry_C* CallFunc_Create_ReturnValue, FString K2Node_Select_Default_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1);
    void ClearList();
    void CreateSaveList(class UFSDSaveGame* CurrentArrayElement, class UITM_RestoreSaveList_Entry_C* currentItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDSaveGame* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetSlotLoadedFrom_ReturnValue, FString CallFunc_GetName_ReturnValue, int32 CallFunc_GetCredits_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_GetPlayerRetirementRank_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool Temp_bool_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, FString K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<class UFSDSaveGame*>& CallFunc_GetAllSavesFromDisk_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_RestoreSaveList_Entry_C* CallFunc_Create_ReturnValue);
    void Construct();
    void BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void Back();
    void OnShown();
    void OnClosed();
    void Refresh();
    void CloudFailed();
    void CloadSaveGames(const TArray<class UFSDSaveGame*>& savegames);
    void BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ReceiveOkCommand();
    void PreConstruct(bool IsDesignTime);
    void ReenableLoadmoreButton();
    void Timeout();
    void ExecuteUbergraph_Menu_RestoreSaves(int32 EntryPoint, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, FExecuteUbergraph_Menu_RestoreSavesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, const TArray<class UFSDSaveGame*>& K2Node_CustomEvent_savegames, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FExecuteUbergraph_Menu_RestoreSavesK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
};

#endif
