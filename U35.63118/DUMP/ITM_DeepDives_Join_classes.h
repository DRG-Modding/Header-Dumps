// WidgetBlueprintGeneratedClass ITM_DeepDives_Join.ITM_DeepDives_Join_C
// Size: 0x4c8 (Inherited: 0x230)
struct UITM_DeepDives_Join_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x238(0x08)
	UITM_OnlineRestricted_C* ITM_OnlineRestricted; // 0x240(0x08)
	UBasic_ButtonScalable2_C* RefreshBtn; // 0x248(0x08)
	UITM_DeepDives_ServerFilters_C* ServerList_Filters; // 0x250(0x08)
	UITM_DeepDives_ServerList_C* ServerList_Hard; // 0x258(0x08)
	UITM_DeepDives_ServerList_C* ServerList_Regular; // 0x260(0x08)
	UWND_JoiningModded_C* WND_JoiningModded; // 0x268(0x08)
	UWND_JoiningPassword_C* WND_JoiningPassword; // 0x270(0x08)
	ABP_GameState_SpaceRig_C* GameState; // 0x278(0x08)
	FBlueprintSessionResult JoinSession; // 0x280(0x108)
	UWND_Joining_C* WND_JoiningWait; // 0x388(0x08)
	int32_t UpdateIndex; // 0x390(0x04)
	FTimerHandle UpdateTimerHandle; // 0x398(0x08)
	FMulticastInlineDelegate OnJoining; // 0x3a0(0x10)
	FBlueprintSessionResult ModdedJoinSession; // 0x3b0(0x108)
	FString ModdedPassword; // 0x4b8(0x10)

	void HandleKeyDown(FKeyEvent KeyEvent, bool OutHandled, FEventReply OutReply);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void DisableProgressionModsandJoin(FBlueprintSessionResult Session);
	void UpdateTextSearchAndGametypeFilter();
	void PopulateServerViewsIfVisible();
	void PopulateNext();
	void ClearServerViews();
	void PopulateServerViews();
	void OnFailure_1FB10C08435EA9BCE39BD9ABFF154396();
	void OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396();
	void OnFailure_0B5BC1CF422A3FBD05716A89A13443B1();
	void OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1();
	void Construct();
	void Open();
	void BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature(FBlueprintSessionResult Session);
	void BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature(FBlueprintSessionResult Session);
	void OnJoinServerClicked(FBlueprintSessionResult InSession);
	void BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature();
	void BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature(FBlueprintSessionResult Session, FString Password);
	void Close Waiting Window();
	void Join Server(FBlueprintSessionResult Session, FString Password);
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature(FBlueprintSessionResult Session, FString Password);
	void ModdedSaveLoaded();
	void OnBlocked(bool Yes);
	void ExecuteUbergraph_ITM_DeepDives_Join(int32_t EntryPoint);
	void OnJoining__DelegateSignature();
};

