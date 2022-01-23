#ifndef UE4SS_SDK__MENU_ServerList_HPP
#define UE4SS_SDK__MENU_ServerList_HPP

class U_MENU_ServerList_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* LookingForServers;
    class UBasic_CheckBox_C* AutoRefresh;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_RadioButton_C* Basic_RadioButton_Open;
    class UBasic_RadioButton_C* Basic_RadioButton_Password;
    class UBasic_RadioButton_C* Basic_RadioButton_SD_Close;
    class UBasic_RadioButton_C* Basic_RadioButton_SD_Far;
    class UBasic_RadioButton_C* Basic_RadioButton_SD_Medium;
    class UBasic_RadioButton_C* Basic_RadioButton_SD_World;
    class UBorder* BG_Filters;
    class UBorder* BG_Servers;
    class UBorder* Border_Categories;
    class UBorder* Border_Filters;
    class UBasic_ButtonScalable2_C* BTN_Full_ServerList;
    class UBasic_ButtonScalable2_C* BTN_QuickJoin;
    class UBasic_ButtonScalable2_C* BTN_Refresh;
    class UButton* Button_Complexity;
    class UButton* Button_Distance;
    class UButton* Button_Hazard;
    class UButton* Button_Length;
    class UButton* Button_Mission;
    class UButton* Button_Team;
    class UButton* Button_Time;
    class UCircularThrobber* CircularThrobber_0;
    class UFilter_ServerGameType_C* Filter_ServerGameType;
    class UFilter_ServerWorkEnvironment_C* Filter_ServerWorkEnvironment;
    class UImage* IMG_MissionIcon;
    class UITM_OnlineRestricted_C* ITM_OnlineRestricted;
    class UITM_ServerList_Entry_C* ITM_ServerList_Entry;
    class UITM_ServerList_Entry_C* ITM_ServerList_Entry_0;
    class UITM_ServerList_Entry_C* ITM_ServerList_Entry_1;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UBasic_ExpandableMenu_C* MenuSearchDistance;
    class UBasic_ExpandableMenu_C* MenuServerType;
    class UScrollBox* ScrollBox_Servers;
    class UVerticalBox* ScrollBox_Vertical;
    class UVerticalBox* SearchingVBox;
    class USizeBox* Size_Complexity;
    class USizeBox* Size_Distance;
    class USizeBox* Size_Hazard;
    class USizeBox* Size_Length;
    class USizeBox* Size_Mission;
    class USizeBox* Size_Team;
    class USizeBox* Size_Time;
    class UTextBlock* TextDistanceClose;
    class UTextBlock* TextDistanceFar;
    class UTextBlock* TextDistanceMedium;
    class UTextBlock* TextDistanceWorld;
    class UTextBlock* TextOpenServerType;
    class UTextBlock* TextPasswordServerType;
    class UTextBlock* TXT_Category_Complexity;
    class UTextBlock* TXT_Category_filters;
    class UTextBlock* TXT_Category_Hazard;
    class UTextBlock* TXT_Category_Length;
    class UTextBlock* TXT_Category_MissionType;
    class UTextBlock* TXT_Category_Team;
    class UTextBlock* TXT_Category_Time;
    class UTextBlock* TXT_Distance;
    class UTextBlock* TXT_NoServersFound;
    class UBasic_TextInputField_C* TXT_Search;
    class UVerticalBox* VboxNoServerFound;
    class UWND_Joining_C* JoinServerWidget;
    class UWND_JoinFailed_C* JoinFailedWidget;
    class UWND_JoiningPassword_C* JoinServerPasswordWidget;
    class UWND_JoiningModded_C* JoinServerModdedWidget;
    class UGeneratedMission* RestrictedMission;
    TArray<FBlueprintSessionResult> ServerList;
    TArray<class UITM_ServerList_Entry_C*> ServerListEntryCache;
    TArray<class UITM_ServerList_Entry_C*> ExistingEntries;
    int32 ActiveEntryIndex;
    TArray<float> ColumnWidths;
    EServerSortOrder SortingMethod;
    bool SortingReversed;
    bool ServerSideFiltering;
    TArray<FFriendInfo> NewFriends;
    TArray<FFriendInfo> CurrentFriends;
    class UObject* CurrentFriendSession;
    EBlueprintablePrivilegeResults CurrentOnliineBlockingReason;
    TArray<FString> AllServernameWords;
    bool UGCDisallowed;
    bool isManuallySorted;
    FBlueprintSessionResult CurrentJoiningModdedSession;
    FString CurrentJoiningModdedPassword;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_Handle_Key_Down_OutHandled, FEventReply CallFunc_Handle_Key_Down_OutReply);
    void GetWidgetMousePosition(class UWidget* InWidget, FVector2D& OutLocalPos, bool CallFunc_IsValid_ReturnValue, const FGeometry CallFunc_GetCachedGeometry_ReturnValue, FVector2D CallFunc_GetMousePositionOnPlatform_ReturnValue, FVector2D CallFunc_AbsoluteToLocal_ReturnValue);
    void GetHoveredEntryInfo(class UITM_ServerList_Entry_C*& EntryWidget, float& WidgetMouseOffset, FString& serverID, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget* CallFunc_GetFocusedWidget_ReturnValue, class UITM_ServerList_Entry_C* K2Node_DynamicCast_AsITM_Server_List_Entry, bool K2Node_DynamicCast_bSuccess, FVector2D CallFunc_GetWidgetMousePosition_OutLocalPos, bool CallFunc_IsHovered_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FString CallFunc_GetServerID_ID);
    void Disable Progression Mods and Join(FBlueprintSessionResult Session, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, class UWindowManager* CallFunc_GetWindowManager_ReturnValue);
    void UpdateFromGametype(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<EGameType>& CallFunc_GetSelectedGameTypes_Gametypes, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions);
    void UpdateFromWorkEnvironment(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<class UDifficultySetting*>& CallFunc_GetActiveDifficulties_Array, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions);
    void UpdateSearchOptionsFromSearchField(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FText CallFunc_GetText_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions);
    void UpdateSearchOptionsFromRestrictedMission(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions_1, bool CallFunc_IsValid_ReturnValue);
    void GetActiveDifficulties(TArray<class UDifficultySetting*>& Array, TArray<class UDifficultySetting*> Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UDifficultySetting*>& K2Node_MakeArray_Array, class UDifficultySetting* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsDifficultySelected_ReturnValue);
    void SetSortFunction(EServerSortOrder NewSortingMethod, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetColumnWidths(TArray<float>& OutWidths, TArray<float> Widths, TArray<class USizeBox*> Columns, int32 Temp_int_Array_Index_Variable, class USizeBox* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class USizeBox*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void SetSelectedServerType(bool Temp_bool_Variable, ESteamServerJoinStatus Temp_byte_Variable, ESteamServerJoinStatus Temp_byte_Variable_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, ESteamServerJoinStatus K2Node_Select_Default);
    void SetServerType(ESteamServerJoinStatus ServerType, ESteamServerJoinStatus Temp_byte_Variable, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UTextBlock* K2Node_Select_Default, FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void SetSearchDistance(ESteamSearchRegion Distance, class UTextBlock* TextLabel, class UBasic_RadioButton_C* RadioButton, ESteamSearchRegion Temp_byte_Variable, ESteamSearchRegion Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_GetText_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<class UBasic_RadioButton_C*>& K2Node_MakeArray_Array, class UBasic_RadioButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTextBlock* K2Node_Select_Default, class UBasic_RadioButton_C* K2Node_Select_Default_1);
    void CacheUnusedEntries(class UITM_ServerList_Entry_C* Entry, int32 CurrentIndex, int32 Temp_int_Variable, class UITM_ServerList_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_RemoveChild_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    class UITM_ServerList_Entry_C* GetCachedEntry(int32 Index, class UITM_ServerList_Entry_C* CachedEntry, class UITM_ServerList_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_ServerList_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void AddOrUpdateEntry(const FBlueprintSessionResult& Result, FString& OutServerID, class UITM_ServerList_Entry_C*& OutWidget, class UITM_ServerList_Entry_C* EntryWidget, bool Temp_bool_Variable, bool CallFunc_FSDIsSessionValid_ReturnValue, EFSDMissionStatus CallFunc_FSDMissionStatus_ReturnValue, bool Temp_bool_Variable_1, EFSDMissionStatus Temp_byte_Variable, bool Temp_bool_Variable_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_GetGlobalMissionSeed_ReturnValue, class UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue, int32 CallFunc_FSDGetMissionSeed_ReturnValue, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsDifficultySelected_Selected, class UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Contains_ReturnValue, EMissionStructure CallFunc_GetMissionStructure_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_IsDifficultySelected_Selected_1, bool Temp_bool_Variable_4, bool K2Node_Select_Default, FString CallFunc_FSDGetServerID_ReturnValue, FString CallFunc_FSDGetServerID_ReturnValue_1, FAddOrUpdateEntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class UITM_ServerList_Entry_C* CallFunc_GetCachedEntry_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UITM_ServerList_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void ShowNoServersFound(bool Visible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetSelectedSearchDistance(bool CallFunc_GetIsChecked_ReturnValue, bool CallFunc_GetIsChecked_ReturnValue_1, bool CallFunc_GetIsChecked_ReturnValue_2, bool CallFunc_GetIsChecked_ReturnValue_3);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_1, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_IsKeyEventAction_ReturnValue_2);
    void PopulateServerList(TArray<FBlueprintSessionResult>& servers, FString HoveredID, float Offset, class UITM_ServerList_Entry_C* NextHoveredEntry, class UITM_ServerList_Entry_C* PreviousHoveredEntry, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UITM_ServerList_Entry_C* CallFunc_GetHoveredEntryInfo_EntryWidget, float CallFunc_GetHoveredEntryInfo_WidgetMouseOffset, FString CallFunc_GetHoveredEntryInfo_ServerID, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FVector2D CallFunc_GetWidgetMousePosition_OutLocalPos, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FBlueprintSessionResult CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_AddOrUpdateEntry_OutServerID, class UITM_ServerList_Entry_C* CallFunc_AddOrUpdateEntry_OutWidget, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void CreateSubMenus(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWND_JoiningModded_C* CallFunc_Create_ReturnValue, class UWND_JoiningPassword_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UWND_JoinFailed_C* CallFunc_Create_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UWND_Joining_C* CallFunc_Create_ReturnValue_3);
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
    void BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ServelistChanged();
    void RestrictToMission(class UGeneratedMission* mission);
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
    void OnIsUGCAllowed(const class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void JoinModdedServer(FBlueprintSessionResult Session, FString Password);
    void OnJoiningFailed();
    void BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature();
    void ModdedSaveLoaded();
    void JoiningBlocked(bool Yes);
    void SavegameSwitchCancelled();
    void ExecuteUbergraph__MENU_ServerList(int32 EntryPoint, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform Temp_byte_Variable_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, class UMessagingSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable_10, ESteamServerJoinStatus Temp_byte_Variable_8, ESteamServerJoinStatus Temp_byte_Variable_9, int32 Temp_int_Array_Index_Variable, FFriendInfo CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsInActiveSession_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsInActiveSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_11, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_AreModsInstalled_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_2, bool Temp_bool_Variable_12, bool CallFunc_IsValid_ReturnValue_2, FBlueprintSessionResult K2Node_CustomEvent_Session_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_FSDIsPasswordRequired_ReturnValue, bool CallFunc_FSDIsModdedServer_ReturnValue, bool CallFunc_FSDIsSessionValid_ReturnValue, FBlueprintSessionResult K2Node_CustomEvent_Session_2, class UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue, bool CallFunc_FSDIsSessionValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, FBlueprintSessionResult K2Node_CustomEvent_Session_1, FString K2Node_CustomEvent_Password_1, bool CallFunc_FSDIsSessionValid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, FString K2Node_ComponentBoundEvent_SelectedItem, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class UGeneratedMission* K2Node_CustomEvent_Mission, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_1, FText K2Node_ComponentBoundEvent_Text, bool K2Node_Event_IsDesignTime, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool K2Node_ComponentBoundEvent_IsChecked_7, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_ComponentBoundEvent_IsChecked_6, bool K2Node_ComponentBoundEvent_IsChecked_5, bool K2Node_ComponentBoundEvent_IsChecked_4, TArray<FBlueprintSessionResult>& K2Node_MakeArray_Array, bool K2Node_ComponentBoundEvent_IsChecked_3, bool K2Node_ComponentBoundEvent_IsChecked_2, bool CallFunc_FSDCancelFindSessions_ReturnValue, bool Temp_bool_Variable_13, bool CallFunc_IsVisible_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked_1, bool CallFunc_GetAutoRefreshServerlist_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, class ABP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, class ABP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_1, class ABP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_2, bool CallFunc_IsInActiveSession_ReturnValue_2, bool Temp_bool_Variable_14, TArray<float>& CallFunc_GetColumnWidths_OutWidths, bool Temp_bool_Variable_15, int32 CallFunc_GetChildrenCount_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, TArray<class UDifficultySetting*>& CallFunc_GetActiveDifficulties_Array, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, class ABP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_3, class ABP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState_4, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, bool K2Node_ComponentBoundEvent_IsChecked, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, int32 CallFunc_GetPlayerControllerID_ReturnValue, TArray<FFriendInfo>& CallFunc_GetFriendsList_players, bool CallFunc_GetFriendsList_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, int32 CallFunc_GetPlayerControllerID_ReturnValue_1, EFSDTargetPlatform Temp_byte_Variable_10, bool K2Node_Select_Default_1, bool CallFunc_Array_Identical_ReturnValue, bool K2Node_CustomEvent_bWasSuccessful, FString K2Node_CustomEvent_ErrorStr, FString CallFunc_Concat_StrStr_ReturnValue, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10, FBlueprintSessionResult CallFunc_Array_Get_Item_1, FFriendInfo CallFunc_Array_Get_Item_2, FString CallFunc_FSDGetServerID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, bool CallFunc_StartSearchForFriends_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UITM_ServerList_Entry_C* K2Node_DynamicCast_AsITM_Server_List_Entry, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_5, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_6, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, const class APlayerState* K2Node_CustomEvent_CheckedPlayerState, EBlueprintableUserPrivileges K2Node_CustomEvent_CheckedPrivilege, EBlueprintablePrivilegeResults K2Node_CustomEvent_PrivilegeResult, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, EFSDTargetPlatform Temp_byte_Variable_16, ESlateVisibility K2Node_Select_Default_2, FBlueprintSessionResult K2Node_CustomEvent_Session, FString K2Node_CustomEvent_Password, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_FSDIsSessionValid_ReturnValue_3, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_4, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, bool K2Node_Select_Default_3, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Select_Default_4, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_5, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_6, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13, TArray<EGameType>& CallFunc_GetSelectedGameTypes_Gametypes, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_14 K2Node_CreateDelegate_OutputDelegate_14, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, class UPopup_ModdedSave_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_15 K2Node_CreateDelegate_OutputDelegate_15, class UFSDJoinSessionCallbackProxy* CallFunc_FSDJoinSession_ReturnValue_2, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_16 K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_CustomEvent_Yes, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_17 K2Node_CreateDelegate_OutputDelegate_17, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_7, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_2, FExecuteUbergraph__MENU_ServerListK2Node_CreateDelegate_OutputDelegate_18 K2Node_CreateDelegate_OutputDelegate_18, ESteamSearchRegion CallFunc_GetSteamSearchRegion_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_3, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_4, ESteamSearchRegion CallFunc_GetSteamSearchRegion_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue, ESteamServerJoinStatus K2Node_Select_Default_5, bool CallFunc_BooleanOR_ReturnValue_1, FFSDServerSearchOptions K2Node_MakeStruct_FSDServerSearchOptions, bool CallFunc_IsVisible_ReturnValue_1);
};

#endif
