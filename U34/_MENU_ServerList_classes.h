// WidgetBlueprintGeneratedClass _MENU_ServerList._MENU_ServerList_C
// Size: 0x51a (Inherited: 0x270)
struct U_MENU_ServerList_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* LookingForServers; // 0x278(0x08)
	struct UBasic_CheckBox_C* AutoRefresh; // 0x280(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x288(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x290(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_Open; // 0x298(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_Password; // 0x2a0(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_SD_Close; // 0x2a8(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_SD_Far; // 0x2b0(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_SD_Medium; // 0x2b8(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_SD_World; // 0x2c0(0x08)
	struct UBorder* BG_Filters; // 0x2c8(0x08)
	struct UBorder* BG_Servers; // 0x2d0(0x08)
	struct UBorder* Border_Categories; // 0x2d8(0x08)
	struct UBorder* Border_Filters; // 0x2e0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_GoToSaves; // 0x2e8(0x08)
	struct UBasic_ButtonScalable2_C* BTN_QuickJoin; // 0x2f0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Refresh; // 0x2f8(0x08)
	struct UBasic_ButtonScalable2_C* BTN_ServerList; // 0x300(0x08)
	struct UButton* Button_Complexity; // 0x308(0x08)
	struct UButton* Button_Distance; // 0x310(0x08)
	struct UButton* Button_Hazard; // 0x318(0x08)
	struct UButton* Button_Length; // 0x320(0x08)
	struct UButton* Button_Mission; // 0x328(0x08)
	struct UButton* Button_Team; // 0x330(0x08)
	struct UButton* Button_Time; // 0x338(0x08)
	struct UCircularThrobber* CircularThrobber_1; // 0x340(0x08)
	struct UFilter_ServerWorkEnvironment_C* Filter_ServerWorkEnvironment; // 0x348(0x08)
	struct UImage* IMG_MissionIcon; // 0x350(0x08)
	struct UITM_OnlineRestricted_C* ITM_OnlineRestricted; // 0x358(0x08)
	struct UITM_ServerList_Entry_C* ITM_ServerList_Entry; // 0x360(0x08)
	struct UITM_ServerList_Entry_C* ITM_ServerList_Entry_1; // 0x368(0x08)
	struct UITM_ServerList_Entry_C* ITM_ServerList_Entry_2; // 0x370(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x378(0x08)
	struct UBasic_ExpandableMenu_C* MenuSearchDistance; // 0x380(0x08)
	struct UBasic_ExpandableMenu_C* MenuServerType; // 0x388(0x08)
	struct UVerticalBox* ScrollBox_Vertical; // 0x390(0x08)
	struct UVerticalBox* SearchingVBox; // 0x398(0x08)
	struct USizeBox* Size_Complexity; // 0x3a0(0x08)
	struct USizeBox* Size_Distance; // 0x3a8(0x08)
	struct USizeBox* Size_Hazard; // 0x3b0(0x08)
	struct USizeBox* Size_Length; // 0x3b8(0x08)
	struct USizeBox* Size_Mission; // 0x3c0(0x08)
	struct USizeBox* Size_Team; // 0x3c8(0x08)
	struct USizeBox* Size_Time; // 0x3d0(0x08)
	struct UTextBlock* TextDistanceClose; // 0x3d8(0x08)
	struct UTextBlock* TextDistanceFar; // 0x3e0(0x08)
	struct UTextBlock* TextDistanceMedium; // 0x3e8(0x08)
	struct UTextBlock* TextDistanceWorld; // 0x3f0(0x08)
	struct UTextBlock* TextOpenServerType; // 0x3f8(0x08)
	struct UTextBlock* TextPasswordServerType; // 0x400(0x08)
	struct UTextBlock* TXT_Category_Complexity; // 0x408(0x08)
	struct UTextBlock* TXT_Category_filters; // 0x410(0x08)
	struct UTextBlock* TXT_Category_Hazard; // 0x418(0x08)
	struct UTextBlock* TXT_Category_Length; // 0x420(0x08)
	struct UTextBlock* TXT_Category_MissionType; // 0x428(0x08)
	struct UTextBlock* TXT_Category_Team; // 0x430(0x08)
	struct UTextBlock* TXT_Category_Time; // 0x438(0x08)
	struct UTextBlock* TXT_Distance; // 0x440(0x08)
	struct UTextBlock* TXT_NoServersFound; // 0x448(0x08)
	struct UBasic_TextInputField_C* TXT_Search; // 0x450(0x08)
	struct UVerticalBox* VboxNoServerFound; // 0x458(0x08)
	struct UWND_Joining_C* JoinServerWidget; // 0x460(0x08)
	struct UWND_JoinFailed_C* JoinFailedWidget; // 0x468(0x08)
	struct UWND_JoiningPassword_C* JoinServerPasswordWidget; // 0x470(0x08)
	struct UWND_JoiningModded_C* JoinServerModdedWidget; // 0x478(0x08)
	struct UGeneratedMission* RestrictedMission; // 0x480(0x08)
	struct TArray<struct FBlueprintSessionResult> ServerList; // 0x488(0x10)
	struct TArray<struct UITM_ServerList_Entry_C*> ServerListEntryCache; // 0x498(0x10)
	struct TArray<struct UITM_ServerList_Entry_C*> ExistingEntries; // 0x4a8(0x10)
	int32_t ActiveEntryIndex; // 0x4b8(0x04)
	char UnknownData_4BC[0x4]; // 0x4bc(0x04)
	struct TArray<float> ColumnWidths; // 0x4c0(0x10)
	enum class EServerSortOrder SortingMethod; // 0x4d0(0x01)
	bool SortingReversed; // 0x4d1(0x01)
	bool ServerSideFiltering; // 0x4d2(0x01)
	char UnknownData_4D3[0x5]; // 0x4d3(0x05)
	struct TArray<struct FFriendInfo> NewFriends; // 0x4d8(0x10)
	struct TArray<struct FFriendInfo> CurrentFriends; // 0x4e8(0x10)
	struct UObject* CurrentFriendSession; // 0x4f8(0x08)
	enum class EBlueprintablePrivilegeResults CurrentOnliineBlockingReason; // 0x500(0x01)
	char UnknownData_501[0x7]; // 0x501(0x07)
	struct TArray<struct FString> AllServernameWords; // 0x508(0x10)
	bool UGCDisallowed; // 0x518(0x01)
	bool isManuallySorted; // 0x519(0x01)

	void UpdateFromWorkEnvironment(); // Function _MENU_ServerList._MENU_ServerList_C.UpdateFromWorkEnvironment
	void UpdateSearchOptionsFromSearchField(); // Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromSearchField
	void UpdateSearchOptionsFromRestrictedMission(); // Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromRestrictedMission
	void GetActiveDifficulties(struct TArray<struct UDifficultySetting*> Array); // Function _MENU_ServerList._MENU_ServerList_C.GetActiveDifficulties
	void SetSortFunction(enum class EServerSortOrder NewSortingMethod); // Function _MENU_ServerList._MENU_ServerList_C.SetSortFunction
	void GetColumnWidths(struct TArray<float> OutWidths); // Function _MENU_ServerList._MENU_ServerList_C.GetColumnWidths
	void SetSelectedServerType(); // Function _MENU_ServerList._MENU_ServerList_C.SetSelectedServerType
	void SetServerType(enum class ESteamServerJoinStatus ServerType); // Function _MENU_ServerList._MENU_ServerList_C.SetServerType
	void SetSearchDistance(enum class ESteamSearchRegion Distance); // Function _MENU_ServerList._MENU_ServerList_C.SetSearchDistance
	void CacheUnusedEntries(); // Function _MENU_ServerList._MENU_ServerList_C.CacheUnusedEntries
	struct UITM_ServerList_Entry_C* GetCachedEntry(); // Function _MENU_ServerList._MENU_ServerList_C.GetCachedEntry
	void AddOrUpdateEntry(struct FBlueprintSessionResult Result); // Function _MENU_ServerList._MENU_ServerList_C.AddOrUpdateEntry
	void ShowSpinner(bool Visible); // Function _MENU_ServerList._MENU_ServerList_C.ShowSpinner
	void SetSelectedSearchDistance(); // Function _MENU_ServerList._MENU_ServerList_C.SetSelectedSearchDistance
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _MENU_ServerList._MENU_ServerList_C.OnKeyUp
	void PopulateServerList(struct TArray<struct FBlueprintSessionResult> servers); // Function _MENU_ServerList._MENU_ServerList_C.PopulateServerList
	void CreateSubMenus(); // Function _MENU_ServerList._MENU_ServerList_C.CreateSubMenus
	void OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A(); // Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A
	void OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A(); // Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A
	void OnFailure_0624A35A4162400123C5FFB790E37726(); // Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0624A35A4162400123C5FFB790E37726
	void OnSuccess_0624A35A4162400123C5FFB790E37726(); // Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0624A35A4162400123C5FFB790E37726
	void OnFailure_2F44709544BBB762D8D1EDB23AB84A38(); // Function _MENU_ServerList._MENU_ServerList_C.OnFailure_2F44709544BBB762D8D1EDB23AB84A38
	void OnSuccess_2F44709544BBB762D8D1EDB23AB84A38(); // Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_2F44709544BBB762D8D1EDB23AB84A38
	void OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F(); // Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
	void OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F(); // Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
	void OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471(); // Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471
	void OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471(); // Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471
	void OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE(); // Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE
	void OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE(); // Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE
	void Construct(); // Function _MENU_ServerList._MENU_ServerList_C.Construct
	void JoinServer(struct FBlueprintSessionResult Session); // Function _MENU_ServerList._MENU_ServerList_C.JoinServer
	void BindServerListEntry(struct UITM_ServerList_Entry_C* entry); // Function _MENU_ServerList._MENU_ServerList_C.BindServerListEntry
	void JoinServerWithoutPassword(struct FBlueprintSessionResult Session); // Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithoutPassword
	void JoinServerWithPassword(struct FBlueprintSessionResult Session, struct FString Password); // Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithPassword
	void Back Pressed(); // Function _MENU_ServerList._MENU_ServerList_C.Back Pressed
	void BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature
	void ServelistChanged(); // Function _MENU_ServerList._MENU_ServerList_C.ServelistChanged
	void RestrictToMission(struct UGeneratedMission* mission); // Function _MENU_ServerList._MENU_ServerList_C.RestrictToMission
	void ClearRestricted(); // Function _MENU_ServerList._MENU_ServerList_C.ClearRestricted
	void BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(struct FText Text); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function _MENU_ServerList._MENU_ServerList_C.PreConstruct
	void BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void OnJoiningSession(); // Function _MENU_ServerList._MENU_ServerList_C.OnJoiningSession
	void OnShown(); // Function _MENU_ServerList._MENU_ServerList_C.OnShown
	void BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature
	void BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void RefreshServerList(); // Function _MENU_ServerList._MENU_ServerList_C.RefreshServerList
	void OnClosed(); // Function _MENU_ServerList._MENU_ServerList_C.OnClosed
	void BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
	void BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	void BndEvt__FriendsOnly_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__FriendsOnly_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature
	void RefreshFriendslist(); // Function _MENU_ServerList._MENU_ServerList_C.RefreshFriendslist
	void FriendsListUpdated(bool bWasSuccessful, struct FString ErrorStr); // Function _MENU_ServerList._MENU_ServerList_C.FriendsListUpdated
	void FriendServerlistShouldBeUpdated(); // Function _MENU_ServerList._MENU_ServerList_C.FriendServerlistShouldBeUpdated
	void CreateFriendslist(); // Function _MENU_ServerList._MENU_ServerList_C.CreateFriendslist
	void OnIsUGCAllowed(struct APlayerState* CheckedPlayerState, enum class EBlueprintableUserPrivileges CheckedPrivilege, enum class EBlueprintablePrivilegeResults PrivilegeResult); // Function _MENU_ServerList._MENU_ServerList_C.OnIsUGCAllowed
	void JoinModdedServer(struct FBlueprintSessionResult Session, struct FString Password); // Function _MENU_ServerList._MENU_ServerList_C.JoinModdedServer
	void BndEvt__BTN_GoToSaves_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(); // Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_GoToSaves_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	void OnGoToSave(); // Function _MENU_ServerList._MENU_ServerList_C.OnGoToSave
	void OnJoiningFailed(); // Function _MENU_ServerList._MENU_ServerList_C.OnJoiningFailed
	void ExecuteUbergraph__MENU_ServerList(int32_t EntryPoint); // Function _MENU_ServerList._MENU_ServerList_C.ExecuteUbergraph__MENU_ServerList
};

