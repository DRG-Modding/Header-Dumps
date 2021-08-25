// WidgetBlueprintGeneratedClass ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C
// Size: 0x311 (Inherited: 0x230)
struct UITM_DeepDives_ServerFilters_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_CheckBox_C* AutoRefresh; // 0x238(0x08)
	struct UHorizontalBox* AutoRefreshBox; // 0x240(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_Open; // 0x248(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_Password; // 0x250(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_SD_Close; // 0x258(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_SD_Far; // 0x260(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_SD_Medium; // 0x268(0x08)
	struct UBasic_RadioButton_C* Basic_RadioButton_SD_World; // 0x270(0x08)
	struct UBorder* BG_Filters; // 0x278(0x08)
	struct USizeBox* BoxSize; // 0x280(0x08)
	struct UBasic_ExpandableMenu_C* Filter_Distance; // 0x288(0x08)
	struct UFilter_ServerWorkEnvironment_C* Filter_HazardLevel; // 0x290(0x08)
	struct UBasic_ExpandableMenu_C* Filter_ServerType; // 0x298(0x08)
	struct UBasic_TextInputField_C* Filter_TextSearch; // 0x2a0(0x08)
	struct UBorder* HeaderBorder; // 0x2a8(0x08)
	struct UTextBlock* TextDistanceClose; // 0x2b0(0x08)
	struct UTextBlock* TextDistanceFar; // 0x2b8(0x08)
	struct UTextBlock* TextDistanceMedium; // 0x2c0(0x08)
	struct UTextBlock* TextDistanceWorld; // 0x2c8(0x08)
	struct UTextBlock* TextOpenServerType; // 0x2d0(0x08)
	struct UTextBlock* TextPasswordServerType; // 0x2d8(0x08)
	float Width; // 0x2e0(0x04)
	bool ShowHeader; // 0x2e4(0x01)
	bool ShowTextFilter; // 0x2e5(0x01)
	bool ShowDistanceFilter; // 0x2e6(0x01)
	bool ShowHazardFilter; // 0x2e7(0x01)
	bool ShowServerTypeFilter; // 0x2e8(0x01)
	bool ShowAutoRefresh; // 0x2e9(0x01)
	char UnknownData_2EA[0x6]; // 0x2ea(0x06)
	struct FMulticastInlineDelegate OnSearchFiltersChanged; // 0x2f0(0x10)
	struct FMargin Inner Padding; // 0x300(0x10)
	bool ServerSideFiltering; // 0x310(0x01)

	void UpdatePasswordFilter(); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdatePasswordFilter
	void GetAutoRefresh(bool AutoRefresh); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetAutoRefresh
	void FilterSession(struct FBlueprintSessionResult InSession, bool Should Filter); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.FilterSession
	void IsDifficultySelected(struct UDifficultySetting* InDifficulty, bool Selected); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.IsDifficultySelected
	void UpdateSearchDistance(enum class ESteamSearchRegion SearchRegion); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.UpdateSearchDistance
	struct FText GetTextFilter(); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.GetTextFilter
	void PreConstruct(bool IsDesignTime); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.PreConstruct
	void BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(struct FText Text); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	void Construct(); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.Construct
	void BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
	void BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature(); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
	void BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	void RefreshSettings(); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.RefreshSettings
	void BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
	void BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
	void ExecuteUbergraph_ITM_DeepDives_ServerFilters(int32_t EntryPoint); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.ExecuteUbergraph_ITM_DeepDives_ServerFilters
	void OnSearchFiltersChanged__DelegateSignature(); // Function ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C.OnSearchFiltersChanged__DelegateSignature
};

