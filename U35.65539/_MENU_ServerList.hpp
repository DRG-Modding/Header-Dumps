#ifndef UE4SS_SDK__MENU_ServerList_HPP
#define UE4SS_SDK__MENU_ServerList_HPP

class U_MENU_ServerList_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* LookingForServers;
    UBasic_CheckBox_C* AutoRefresh;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_RadioButton_C* Basic_RadioButton_Open;
    UBasic_RadioButton_C* Basic_RadioButton_Password;
    UBasic_RadioButton_C* Basic_RadioButton_SD_Close;
    UBasic_RadioButton_C* Basic_RadioButton_SD_Far;
    UBasic_RadioButton_C* Basic_RadioButton_SD_Medium;
    UBasic_RadioButton_C* Basic_RadioButton_SD_World;
    UBorder* BG_Filters;
    UBorder* BG_Servers;
    UBorder* Border_Categories;
    UBorder* Border_Filters;
    UBasic_ButtonScalable2_C* BTN_Full_ServerList;
    UBasic_ButtonScalable2_C* BTN_QuickJoin;
    UBasic_ButtonScalable2_C* BTN_Refresh;
    UButton* Button_Complexity;
    UButton* Button_Distance;
    UButton* Button_Hazard;
    UButton* Button_Length;
    UButton* Button_Mission;
    UButton* Button_Team;
    UButton* Button_Time;
    UCircularThrobber* CircularThrobber_0;
    UFilter_ServerGameType_C* Filter_ServerGameType;
    UFilter_ServerWorkEnvironment_C* Filter_ServerWorkEnvironment;
    UImage* IMG_MissionIcon;
    UITM_OnlineRestricted_C* ITM_OnlineRestricted;
    UITM_ServerList_Entry_C* ITM_ServerList_Entry;
    UITM_ServerList_Entry_C* ITM_ServerList_Entry_0;
    UITM_ServerList_Entry_C* ITM_ServerList_Entry_1;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    UBasic_ExpandableMenu_C* MenuSearchDistance;
    UBasic_ExpandableMenu_C* MenuServerType;
    UScrollBox* ScrollBox_Servers;
    UVerticalBox* ScrollBox_Vertical;
    UVerticalBox* SearchingVBox;
    USizeBox* Size_Complexity;
    USizeBox* Size_Distance;
    USizeBox* Size_Hazard;
    USizeBox* Size_Length;
    USizeBox* Size_Mission;
    USizeBox* Size_Team;
    USizeBox* Size_Time;
    UTextBlock* TextDistanceClose;
    UTextBlock* TextDistanceFar;
    UTextBlock* TextDistanceMedium;
    UTextBlock* TextDistanceWorld;
    UTextBlock* TextOpenServerType;
    UTextBlock* TextPasswordServerType;
    UTextBlock* TXT_Category_Complexity;
    UTextBlock* TXT_Category_filters;
    UTextBlock* TXT_Category_Hazard;
    UTextBlock* TXT_Category_Length;
    UTextBlock* TXT_Category_MissionType;
    UTextBlock* TXT_Category_Team;
    UTextBlock* TXT_Category_Time;
    UTextBlock* TXT_Distance;
    UTextBlock* TXT_NoServersFound;
    UBasic_TextInputField_C* TXT_Search;
    UVerticalBox* VboxNoServerFound;
    UWND_Joining_C* JoinServerWidget;
    UWND_JoinFailed_C* JoinFailedWidget;
    UWND_JoiningPassword_C* JoinServerPasswordWidget;
    UWND_JoiningModded_C* JoinServerModdedWidget;
    UGeneratedMission* RestrictedMission;
    TArray<FBlueprintSessionResult> ServerList;
    TArray<UITM_ServerList_Entry_C*> ServerListEntryCache;
    TArray<UITM_ServerList_Entry_C*> ExistingEntries;
    int32 ActiveEntryIndex;
    TArray<float> ColumnWidths;
    EServerSortOrder SortingMethod;
    bool SortingReversed;
    bool ServerSideFiltering;
    TArray<FFriendInfo> NewFriends;
    TArray<FFriendInfo> CurrentFriends;
    UObject* CurrentFriendSession;
    EBlueprintablePrivilegeResults CurrentOnliineBlockingReason;
    TArray<FString> AllServernameWords;
    bool UGCDisallowed;
    bool isManuallySorted;
    FBlueprintSessionResult CurrentJoiningModdedSession;
    FString CurrentJoiningModdedPassword;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_Handle_Key_Down_OutHandled, FEventReply CallFunc_Handle_Key_Down_OutReply);
    void GetWidgetMousePosition(UWidget* InWidget, FVector2D& OutLocalPos, bool CallFunc_IsValid_ReturnValue, const FGeometry CallFunc_GetCachedGeometry_ReturnValue, FVector2D CallFunc_GetMousePositionOnPlatform_ReturnValue, FVector2D CallFunc_AbsoluteToLocal_ReturnValue);
    void GetHoveredEntryInfo(UITM_ServerList_Entry_C*& EntryWidget, float& WidgetMouseOffset, FString& serverID, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UWidget* CallFunc_GetFocusedWidget_ReturnValue, UITM_ServerList_Entry_C* K2Node_DynamicCast_AsITM_Server_List_Entry, bool K2Node_DynamicCast_bSuccess, FVector2D CallFunc_GetWidgetMousePosition_OutLocalPos, bool CallFunc_IsHovered_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FString CallFunc_GetServerID_ID);
    void Disable Progression Mods and Join(FBlueprintSessionResult Session, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, UWindowManager* CallFunc_GetWindowManager_ReturnValue);
    void UpdateFromGametype(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<EGameType>& CallFunc_GetSelectedGameTypes_Gametypes, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions);
    void UpdateFromWorkEnvironment(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<UDifficultySetting*>& CallFunc_GetActiveDifficulties_Array, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions);
    void UpdateSearchOptionsFromSearchField(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FText CallFunc_GetText_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions);
    void UpdateSearchOptionsFromRestrictedMission(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions_1, bool CallFunc_IsValid_ReturnValue);
    void GetActiveDifficulties(TArray<UDifficultySetting*>& Array, TArray<UDifficultySetting*> Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UDifficultySetting*>& K2Node_MakeArray_Array, UDifficultySetting* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsDifficultySelected_ReturnValue);
    void SetSortFunction(EServerSortOrder NewSortingMethod, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetColumnWidths(TArray<float>& OutWidths, TArray<float> Widths, TArray<USizeBox*> Columns, int32 Temp_int_Array_Index_Variable, USizeBox* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<USizeBox*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void SetSelectedServerType(bool Temp_bool_Variable, ESteamServerJoinStatus Temp_byte_Variable, ESteamServerJoinStatus Temp_byte_Variable_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, ESteamServerJoinStatus K2Node_Select_Default);
    void SetServerType(ESteamServerJoinStatus ServerType, ESteamServerJoinStatus Temp_byte_Variable, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UTextBlock* K2Node_Select_Default, FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void SetSearchDistance(ESteamSearchRegion Distance, UTextBlock* TextLabel, UBasic_RadioButton_C* RadioButton, ESteamSearchRegion Temp_byte_Variable, ESteamSearchRegion Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_GetText_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<UBasic_RadioButton_C*>& K2Node_MakeArray_Array, UBasic_RadioButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UTextBlock* K2Node_Select_Default, UBasic_RadioButton_C* K2Node_Select_Default_1);
    void CacheUnusedEntries(UITM_ServerList_Entry_C* Entry, int32 CurrentIndex, int32 Temp_int_Variable, UITM_ServerList_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_RemoveChild_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    UITM_ServerList_Entry_C* GetCachedEntry(int32 Index, UITM_ServerList_Entry_C* CachedEntry, UITM_ServerList_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_ServerList_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void AddOrUpdateEntry(const FBlueprintSessionResult& Result, FString& OutServerID, UITM_ServerList_Entry_C*& OutWidget, UITM_ServerList_Entry_C* EntryWidget, bool Temp_bool_Variable, bool CallFunc_FSDIsSessionValid_ReturnValue, EFSDMissionStatus CallFunc_FSDMissionStatus_ReturnValue, bool Temp_bool_Variable_1, EFSDMissionStatus Temp_byte_Variable, bool Temp_bool_Variable_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_GetGlobalMissionSeed_ReturnValue, UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue, int32 CallFunc_FSDGetMissionSeed_ReturnValue, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsDifficultySelected_Selected, UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Contains_ReturnValue, EMissionStructure CallFunc_GetMissionStructure_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_IsDifficultySelected_Selected_1, bool Temp_bool_Variable_4, bool K2Node_Select_Default, FString CallFunc_FSDGetServerID_ReturnValue, FString CallFunc_FSDGetServerID_ReturnValue_1, JoinServer__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, UITM_ServerList_Entry_C* CallFunc_GetCachedEntry_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UITM_ServerList_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void ShowNoServersFound(bool Visible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetSelectedSearchDistance(bool CallFunc_GetIsChecked_ReturnValue, bool CallFunc_GetIsChecked_ReturnValue_1, bool CallFunc_GetIsChecked_ReturnValue_2, bool CallFunc_GetIsChecked_ReturnValue_3);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_1, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_IsKeyEventAction_ReturnValue_2);
    void PopulateServerList(TArray<FBlueprintSessionResult>& servers, FString HoveredID, float Offset, UITM_ServerList_Entry_C* NextHoveredEntry, UITM_ServerList_Entry_C* PreviousHoveredEntry, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UITM_ServerList_Entry_C* CallFunc_GetHoveredEntryInfo_EntryWidget, float CallFunc_GetHoveredEntryInfo_WidgetMouseOffset, FString CallFunc_GetHoveredEntryInfo_ServerID, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FVector2D CallFunc_GetWidgetMousePosition_OutLocalPos, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FBlueprintSessionResult CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_AddOrUpdateEntry_OutServerID, UITM_ServerList_Entry_C* CallFunc_AddOrUpdateEntry_OutWidget, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void CreateSubMenus(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UWND_JoiningModded_C* CallFunc_Create_ReturnValue, UWND_JoiningPassword_C* CallFunc_Create_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UWND_JoinFailed_C* CallFunc_Create_ReturnValue_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, UWND_Joining_C* CallFunc_Create_ReturnValue_3);
    void OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A();
    void OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A();
    void OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F();
    void OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F();
    void OnFailure_0624A35A4162400123C5FFB790E37726();
    void OnSuccess_0624A35A4162400123C5FFB790E37726();
    void OnFailure_2F44709544BBB762D8D1EDB23AB84A38();
    void OnSuccess_2F44709544BBB762D8D1EDB23AB84A38();
    void OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471();
    void OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471();
    void OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE();
    void OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE();
    void Construct();
    void JoinServer(FBlueprintSessionResult Session);
    void JoinServerWithoutPassword(FBlueprintSessionResult Session);
    void JoinServerWithPassword(FBlueprintSessionResult Session, FString Password);
    void Back Pressed();
    void BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, uint8 SelectionType);
    void ServelistChanged();
    void RestrictToMission(UGeneratedMission* mission);
    void ClearRestricted();
    void BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnJoiningSession();
    void OnShown();
    void BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void RefreshServerList();
    void OnClosed();
    void BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature();
    void BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__FriendsOnly_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void RefreshFriendslist();
    void FriendsListUpdated(bool bWasSuccessful, FString ErrorStr);
    void FriendServerlistShouldBeUpdated();
    void CreateFriendslist();
    void OnIsUGCAllowed(const UPlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void JoinModdedServer(FBlueprintSessionResult Session, FString Password);
    void OnJoiningFailed();
    void BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature();
    void ModdedSaveLoaded();
    void JoiningBlocked(bool Yes);
    void SavegameSwitchCancelled();
    void ExecuteUbergraph__MENU_ServerList(int32 EntryPoint, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, OnStartSearchForFriendsComplete__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnGetUserPrivilegeCompleteBPDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, JoinModdedServer__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform Temp_byte_Variable_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, OnModdedSaveLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable_10, ESteamServerJoinStatus Temp_byte_Variable_8, ESteamServerJoinStatus Temp_byte_Variable_9, int32 Temp_int_Array_Index_Variable, FFriendInfo CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsInActiveSession_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsInActiveSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_11, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_2, bool Temp_bool_Variable_12, bool CallFunc_IsValid_ReturnValue_2, FBlueprintSessionResult K2Node_CustomEvent_Session_3, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_FSDIsPasswordRequired_ReturnValue, bool CallFunc_FSDIsModdedServer_ReturnValue, bool CallFunc_FSDIsSessionValid_ReturnValue, FBlueprintSessionResult K2Node_CustomEvent_Session_2, UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue, bool CallFunc_FSDIsSessionValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, FBlueprintSessionResult K2Node_CustomEvent_Session_1, FString K2Node_CustomEvent_Password_1, bool CallFunc_FSDIsSessionValid_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, FString K2Node_ComponentBoundEvent_SelectedItem, uint8 K2Node_ComponentBoundEvent_SelectionType, UGameStateBase* CallFunc_GetGameState_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, UGameStateBase* CallFunc_GetGameState_ReturnValue_1, UGeneratedMission* K2Node_CustomEvent_Mission, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_1, FText K2Node_ComponentBoundEvent_Text, bool K2Node_Event_IsDesignTime, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool K2Node_ComponentBoundEvent_IsChecked_7, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_ComponentBoundEvent_IsChecked_6, bool K2Node_ComponentBoundEvent_IsChecked_5, bool K2Node_ComponentBoundEvent_IsChecked_4, TArray<FBlueprintSessionResult>& K2Node_MakeArray_Array, bool K2Node_ComponentBoundEvent_IsChecked_3, bool K2Node_ComponentBoundEvent_IsChecked_2, bool CallFunc_FSDCancelFindSessions_ReturnValue, bool Temp_bool_Variable_13, bool CallFunc_IsVisible_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked_1, bool CallFunc_GetAutoRefreshServerlist_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_1, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_2, bool CallFunc_IsInActiveSession_ReturnValue_2, bool Temp_bool_Variable_14, TArray<float>& CallFunc_GetColumnWidths_OutWidths, bool Temp_bool_Variable_15, int32 CallFunc_GetChildrenCount_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, TArray<UDifficultySetting*>& CallFunc_GetActiveDifficulties_Array, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_3, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_4, UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, bool K2Node_ComponentBoundEvent_IsChecked, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, int32 CallFunc_GetPlayerControllerID_ReturnValue, TArray<FFriendInfo>& CallFunc_GetFriendsList_players, bool CallFunc_GetFriendsList_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, int32 CallFunc_GetPlayerControllerID_ReturnValue_1, EFSDTargetPlatform Temp_byte_Variable_10, bool K2Node_Select_Default_1, bool CallFunc_Array_Identical_ReturnValue, bool K2Node_CustomEvent_bWasSuccessful, FString K2Node_CustomEvent_ErrorStr, FString CallFunc_Concat_StrStr_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FBlueprintSessionResult CallFunc_Array_Get_Item_1, FFriendInfo CallFunc_Array_Get_Item_2, FString CallFunc_FSDGetServerID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool CallFunc_StartSearchForFriends_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, int32 Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, UITM_ServerList_Entry_C* K2Node_DynamicCast_AsITM_Server_List_Entry, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_5, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_6, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, const UPlayerState* K2Node_CustomEvent_CheckedPlayerState, EBlueprintableUserPrivileges K2Node_CustomEvent_CheckedPrivilege, EBlueprintablePrivilegeResults K2Node_CustomEvent_PrivilegeResult, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, EFSDTargetPlatform Temp_byte_Variable_16, ESlateVisibility K2Node_Select_Default_2, FBlueprintSessionResult K2Node_CustomEvent_Session, FString K2Node_CustomEvent_Password, OnServerListChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_FSDIsSessionValid_ReturnValue_3, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, UWindowManager* CallFunc_GetWindowManager_ReturnValue_4, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, bool K2Node_Select_Default_3, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Select_Default_4, UWindowManager* CallFunc_GetWindowManager_ReturnValue_5, UWindowManager* CallFunc_GetWindowManager_ReturnValue_6, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, TArray<EGameType>& CallFunc_GetSelectedGameTypes_Gametypes, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, UPopup_ModdedSave_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, JoinWithPassword__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue_2, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_CustomEvent_Yes, OnModdedSaveCancelled__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_7, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, ESteamSearchRegion CallFunc_GetSteamSearchRegion_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_3, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_4, ESteamSearchRegion CallFunc_GetSteamSearchRegion_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue, ESteamServerJoinStatus K2Node_Select_Default_5, bool CallFunc_BooleanOR_ReturnValue_1, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions, bool CallFunc_IsVisible_ReturnValue_1);
}

#endif