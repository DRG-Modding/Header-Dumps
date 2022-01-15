#ifndef UE4SS_SDK_BP_PlayerControllerBase_HPP
#define UE4SS_SDK_BP_PlayerControllerBase_HPP

class ABP_PlayerControllerBase_C : UFSDPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBP_PlayerControllerBase_CReplyToInviteRequest ReplyToInviteRequest;
    void ReplyToInviteRequest(int32 Reply);
    UBP_Invitation_C* InviteRequest;
    float InviteTimeElapsed;
    FDateTime InviteWaitTime;
    int32 AnselStatus;
    int32 AnselCameraTries;
    ABP_FSDCameraManager_C* CameraManager;
    FTimerHandle AnselTimerHandle;
    UWindowWidget* RetirementPopup;

    void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled);
    void SetHasShownCharacterSelector(bool HasShown);
    void ItemFilter(TSubclassOf<AActor> itemClass, bool& Result, UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue);
    void SetClassAnalytics(UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, FString CallFunc_GetAnalyticsClass_ReturnValue);
    void SetUnlockAnalytics(TArray<TSubclassOf<AActor>>& primary, TArray<TSubclassOf<AActor>>& Secundary, FString UnlockedAnalytics, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_2, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, FString CallFunc_GetAnalyticsClass_ReturnValue, TSubclassOf<AActor> CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, FString CallFunc_GetSourceGearName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TSubclassOf<AActor> CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue_1, UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue_1, FString CallFunc_GetSourceGearName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, FString CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6);
    void GetUnlockedItems(EItemCategory Category, TArray<TSubclassOf<AActor>>& Unlocked Items, TSubclassOf<AActor> currentItem, TArray<TSubclassOf<AActor>> UnlockedItems, ItemFilterDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, TArray<TSubclassOf<AActor>>& CallFunc_GetLoadedItemListFiltered_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
    void ReStartAnsel(EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_Select_Default);
    void StartAnsel(EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
    void StopAnsel(EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_Select_Default);
    void CreateInviteRequestIfNotCreated(bool CallFunc_IsValid_ReturnValue, UBP_Invitation_C* CallFunc_Create_ReturnValue);
    void InpActEvt_AcceptInvite_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_RejectInvite_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_IgnoreInvite_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Ctrl_O_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void SetPhotographyMode(bool Active);
    void Return Client Camera();
    void Setup Invite Handling();
    void Setup Retirement Notification();
    void OnCharacterCanRetire_Event(TSubclassOf<UPlayerCharacter> CharacterClass);
    void UpdateAnalytics();
    void AdjustCamera();
    void Setup Change User();
    void ChangeUser();
    void ChangeUserReply(bool Yes);
    void Reset Player Location();
    void OnJoinRequest(const FDiscordUserDataSDK& joinRequest);
    void Event On Join Request Reply(int32 Reply);
    void ExecuteUbergraph_BP_PlayerControllerBase(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, CharacterSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1, TArray<TSubclassOf<AActor>>& CallFunc_GetUnlockedItems_Unlocked_Items, bool K2Node_CustomEvent_Active, APawn* CallFunc_K2_GetPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LockSpecificCharacterIfState_ReturnValue, bool CallFunc_LockSpecificCharacterIfState_ReturnValue_1, UBP_FSDCameraManager_C* K2Node_DynamicCast_AsBP_FSDCamera_Manager, bool K2Node_DynamicCast_bSuccess_1, APawn* CallFunc_K2_GetPawn_ReturnValue_1, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, ECharacterState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_CharacterClass, bool CallFunc_IsLocalPlayerController_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, ReplyToInviteRequest__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, DiscordSDKJoinRequest__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool K2Node_CustomEvent_Yes, int32 CallFunc_GetPlayerControllerID_ReturnValue, FKey K2Node_InputActionEvent_Key_2, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, TArray<TSubclassOf<AActor>>& CallFunc_GetUnlockedItems_Unlocked_Items_1, bool CallFunc_ToggleTranslatorDebugMode_ReturnValue, TSubclassOf<UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, TSubclassOf<UYesNoPromptWidget> K2Node_ClassDynamicCast_AsYes_No_Prompt_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UYesNoPromptWidget* CallFunc_OpenSingleUseWindow_ReturnValue, const FDiscordUserDataSDK K2Node_CustomEvent_joinRequest, UDiscordSDKInterface* CallFunc_Get_ReturnValue, FKey K2Node_InputKeyEvent_Key, bool CallFunc_IsValid_ReturnValue_3, OnYesNoClickedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, APawn* CallFunc_K2_GetPawn_ReturnValue_2, FDateTime CallFunc_Now_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, FTimespan CallFunc_Subtract_DateTimeDateTime_ReturnValue, FDateTime CallFunc_Now_ReturnValue_1, float CallFunc_GetTotalSeconds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, OnXBoxChangeUser__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 K2Node_CustomEvent_Reply);
    void ReplyToInviteRequest__DelegateSignature(int32 Reply);
}

#endif
