// WidgetBlueprintGeneratedClass ITM_DeepDives_Join.ITM_DeepDives_Join_C
// Size: 0x4c8 (Inherited: 0x230)
struct UITM_DeepDives_Join_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x238(0x08)
	struct UITM_OnlineRestricted_C* ITM_OnlineRestricted; // 0x240(0x08)
	struct UBasic_ButtonScalable2_C* RefreshBtn; // 0x248(0x08)
	struct UITM_DeepDives_ServerFilters_C* ServerList_Filters; // 0x250(0x08)
	struct UITM_DeepDives_ServerList_C* ServerList_Hard; // 0x258(0x08)
	struct UITM_DeepDives_ServerList_C* ServerList_Regular; // 0x260(0x08)
	struct UWND_JoiningModded_C* WND_JoiningModded; // 0x268(0x08)
	struct UWND_JoiningPassword_C* WND_JoiningPassword; // 0x270(0x08)
	struct ABP_GameState_SpaceRig_C* GameState; // 0x278(0x08)
	struct FBlueprintSessionResult JoinSession; // 0x280(0x108)
	struct UWND_Joining_C* WND_JoiningWait; // 0x388(0x08)
	int32_t UpdateIndex; // 0x390(0x04)
	char UnknownData_394[0x4]; // 0x394(0x04)
	struct FTimerHandle UpdateTimerHandle; // 0x398(0x08)
	struct FMulticastInlineDelegate OnJoining; // 0x3a0(0x10)
	struct FBlueprintSessionResult ModdedJoinSession; // 0x3b0(0x108)
	struct FString ModdedPassword; // 0x4b8(0x10)

	void UpdateTextSearchFilter(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.UpdateTextSearchFilter
	void PopulateServerViewsIfVisible(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViewsIfVisible
	void PopulateNext(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateNext
	void ClearServerViews(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ClearServerViews
	void PopulateServerViews(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.PopulateServerViews
	void OnFailure_1FB10C08435EA9BCE39BD9ABFF154396(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_1FB10C08435EA9BCE39BD9ABFF154396
	void OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396
	void OnFailure_0B5BC1CF422A3FBD05716A89A13443B1(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnFailure_0B5BC1CF422A3FBD05716A89A13443B1
	void OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1
	void Construct(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Construct
	void Open(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Open
	void BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature(struct FBlueprintSessionResult Session); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature
	void BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature(struct FBlueprintSessionResult Session); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature
	void OnJoinServerClicked(struct FBlueprintSessionResult InSession); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoinServerClicked
	void BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature
	void BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature(struct FBlueprintSessionResult Session, struct FString Password); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature
	void Close Waiting Window(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Close Waiting Window
	void Join Server(struct FBlueprintSessionResult Session, struct FString Password); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.Join Server
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	void BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature(struct FBlueprintSessionResult Session, struct FString Password); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature
	void ModdedSaveLoaded(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ModdedSaveLoaded
	void ExecuteUbergraph_ITM_DeepDives_Join(int32_t EntryPoint); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.ExecuteUbergraph_ITM_DeepDives_Join
	void OnJoining__DelegateSignature(); // Function ITM_DeepDives_Join.ITM_DeepDives_Join_C.OnJoining__DelegateSignature
};

