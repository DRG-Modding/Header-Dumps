// WidgetBlueprintGeneratedClass _MENU_ServerList._MENU_ServerList_C
// Size: 0x640 (Inherited: 0x270)
struct U_MENU_ServerList_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* LookingForServers; // 0x278(0x08)
	UBasic_CheckBox_C* AutoRefresh; // 0x280(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x288(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x290(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_Open; // 0x298(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_Password; // 0x2a0(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_SD_Close; // 0x2a8(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_SD_Far; // 0x2b0(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_SD_Medium; // 0x2b8(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_SD_World; // 0x2c0(0x08)
	UBorder* BG_Filters; // 0x2c8(0x08)
	UBorder* BG_Servers; // 0x2d0(0x08)
	UBorder* Border_Categories; // 0x2d8(0x08)
	UBorder* Border_Filters; // 0x2e0(0x08)
	UBasic_ButtonScalable2_C* BTN_GoToSaves; // 0x2e8(0x08)
	UBasic_ButtonScalable2_C* BTN_QuickJoin; // 0x2f0(0x08)
	UBasic_ButtonScalable2_C* BTN_Refresh; // 0x2f8(0x08)
	UBasic_ButtonScalable2_C* BTN_ServerList; // 0x300(0x08)
	UButton* Button_Complexity; // 0x308(0x08)
	UButton* Button_Distance; // 0x310(0x08)
	UButton* Button_Hazard; // 0x318(0x08)
	UButton* Button_Length; // 0x320(0x08)
	UButton* Button_Mission; // 0x328(0x08)
	UButton* Button_Team; // 0x330(0x08)
	UButton* Button_Time; // 0x338(0x08)
	UCircularThrobber* CircularThrobber_1; // 0x340(0x08)
	UFilter_ServerGameType_C* Filter_ServerGameType; // 0x348(0x08)
	UFilter_ServerWorkEnvironment_C* Filter_ServerWorkEnvironment; // 0x350(0x08)
	UImage* IMG_MissionIcon; // 0x358(0x08)
	UITM_OnlineRestricted_C* ITM_OnlineRestricted; // 0x360(0x08)
	UITM_ServerList_Entry_C* ITM_ServerList_Entry; // 0x368(0x08)
	UITM_ServerList_Entry_C* ITM_ServerList_Entry_1; // 0x370(0x08)
	UITM_ServerList_Entry_C* ITM_ServerList_Entry_2; // 0x378(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x380(0x08)
	UBasic_ExpandableMenu_C* MenuSearchDistance; // 0x388(0x08)
	UBasic_ExpandableMenu_C* MenuServerType; // 0x390(0x08)
	UVerticalBox* ScrollBox_Vertical; // 0x398(0x08)
	UVerticalBox* SearchingVBox; // 0x3a0(0x08)
	USizeBox* Size_Complexity; // 0x3a8(0x08)
	USizeBox* Size_Distance; // 0x3b0(0x08)
	USizeBox* Size_Hazard; // 0x3b8(0x08)
	USizeBox* Size_Length; // 0x3c0(0x08)
	USizeBox* Size_Mission; // 0x3c8(0x08)
	USizeBox* Size_Team; // 0x3d0(0x08)
	USizeBox* Size_Time; // 0x3d8(0x08)
	UTextBlock* TextDistanceClose; // 0x3e0(0x08)
	UTextBlock* TextDistanceFar; // 0x3e8(0x08)
	UTextBlock* TextDistanceMedium; // 0x3f0(0x08)
	UTextBlock* TextDistanceWorld; // 0x3f8(0x08)
	UTextBlock* TextOpenServerType; // 0x400(0x08)
	UTextBlock* TextPasswordServerType; // 0x408(0x08)
	UTextBlock* TXT_Category_Complexity; // 0x410(0x08)
	UTextBlock* TXT_Category_filters; // 0x418(0x08)
	UTextBlock* TXT_Category_Hazard; // 0x420(0x08)
	UTextBlock* TXT_Category_Length; // 0x428(0x08)
	UTextBlock* TXT_Category_MissionType; // 0x430(0x08)
	UTextBlock* TXT_Category_Team; // 0x438(0x08)
	UTextBlock* TXT_Category_Time; // 0x440(0x08)
	UTextBlock* TXT_Distance; // 0x448(0x08)
	UTextBlock* TXT_NoServersFound; // 0x450(0x08)
	UBasic_TextInputField_C* TXT_Search; // 0x458(0x08)
	UVerticalBox* VboxNoServerFound; // 0x460(0x08)
	UWND_Joining_C* JoinServerWidget; // 0x468(0x08)
	UWND_JoinFailed_C* JoinFailedWidget; // 0x470(0x08)
	UWND_JoiningPassword_C* JoinServerPasswordWidget; // 0x478(0x08)
	UWND_JoiningModded_C* JoinServerModdedWidget; // 0x480(0x08)
	UGeneratedMission* RestrictedMission; // 0x488(0x08)
	TArray<FBlueprintSessionResult> ServerList; // 0x490(0x10)
	TArray<UITM_ServerList_Entry_C*> ServerListEntryCache; // 0x4a0(0x10)
	TArray<UITM_ServerList_Entry_C*> ExistingEntries; // 0x4b0(0x10)
	int32_t ActiveEntryIndex; // 0x4c0(0x04)
	TArray<float> ColumnWidths; // 0x4c8(0x10)
	enum class EServerSortOrder SortingMethod; // 0x4d8(0x01)
	bool SortingReversed; // 0x4d9(0x01)
	bool ServerSideFiltering; // 0x4da(0x01)
	TArray<FFriendInfo> NewFriends; // 0x4e0(0x10)
	TArray<FFriendInfo> CurrentFriends; // 0x4f0(0x10)
	UObject* CurrentFriendSession; // 0x500(0x08)
	enum class EBlueprintablePrivilegeResults CurrentOnliineBlockingReason; // 0x508(0x01)
	TArray<FString> AllServernameWords; // 0x510(0x10)
	bool UGCDisallowed; // 0x520(0x01)
	bool isManuallySorted; // 0x521(0x01)
	FBlueprintSessionResult CurrentJoiningModdedSession; // 0x528(0x108)
	FString CurrentJoiningModdedPassword; // 0x630(0x10)

	void Disable Progression Mods and Join(FBlueprintSessionResult Session);
	void BlockClient(bool Sandbox);
	void UpdateFromGametype();
	void UpdateFromWorkEnvironment();
	void UpdateSearchOptionsFromSearchField();
	void UpdateSearchOptionsFromRestrictedMission();
	void GetActiveDifficulties(TArray<UDifficultySetting*> Array);
	void SetSortFunction(enum class EServerSortOrder NewSortingMethod);
	void GetColumnWidths(TArray<float> OutWidths);
	void SetSelectedServerType();
	void SetServerType(enum class ESteamServerJoinStatus ServerType);
	void SetSearchDistance(enum class ESteamSearchRegion Distance);
	void CacheUnusedEntries();
	UITM_ServerList_Entry_C* GetCachedEntry();
	void AddOrUpdateEntry(FBlueprintSessionResult Result);
	void ShowSpinner(bool Visible);
	void SetSelectedSearchDistance();
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void PopulateServerList(TArray<FBlueprintSessionResult> servers);
	void CreateSubMenus();
	void OnFailure_155E2CBD4AAE55F9B2CDDA9239840B3A();
	void OnSuccess_155E2CBD4AAE55F9B2CDDA9239840B3A();
	void OnFailure_0624A35A4162400123C5FFB790E37726();
	void OnSuccess_0624A35A4162400123C5FFB790E37726();
	void OnFailure_2F44709544BBB762D8D1EDB23AB84A38();
	void OnSuccess_2F44709544BBB762D8D1EDB23AB84A38();
	void OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F();
	void OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F();
	void OnFailure_0D2A19CF4B5F20488D8E6EB4D68323DE();
	void OnSuccess_0D2A19CF4B5F20488D8E6EB4D68323DE();
	void OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471();
	void OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471();
	void Construct();
	void JoinServer(FBlueprintSessionResult Session);
	void BindServerListEntry(UITM_ServerList_Entry_C* Entry);
	void JoinServerWithoutPassword(FBlueprintSessionResult Session);
	void JoinServerWithPassword(FBlueprintSessionResult Session, FString Password);
	void Back Pressed();
	void BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, enum class ESelectInfo SelectionType);
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
	void OnIsUGCAllowed(APlayerState* CheckedPlayerState, enum class EBlueprintableUserPrivileges CheckedPrivilege, enum class EBlueprintablePrivilegeResults PrivilegeResult);
	void JoinModdedServer(FBlueprintSessionResult Session, FString Password);
	void BndEvt__BTN_GoToSaves_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
	void OnGoToSave();
	void OnJoiningFailed();
	void BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature();
	void ModdedSaveLoaded();
	void JoiningBlocked(bool Yes);
	void SavegameSwitchCancelled();
	void ExecuteUbergraph__MENU_ServerList(int32_t EntryPoint);
};

