// WidgetBlueprintGeneratedClass ITM_DeepDives_ServerFilters.ITM_DeepDives_ServerFilters_C
// Size: 0x31a (Inherited: 0x230)
struct UITM_DeepDives_ServerFilters_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_CheckBox_C* AutoRefresh; // 0x238(0x08)
	UHorizontalBox* AutoRefreshBox; // 0x240(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_Open; // 0x248(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_Password; // 0x250(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_SD_Close; // 0x258(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_SD_Far; // 0x260(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_SD_Medium; // 0x268(0x08)
	UBasic_RadioButton_C* Basic_RadioButton_SD_World; // 0x270(0x08)
	UBorder* BG_Filters; // 0x278(0x08)
	USizeBox* BoxSize; // 0x280(0x08)
	UBasic_ExpandableMenu_C* Filter_Distance; // 0x288(0x08)
	UFilter_ServerWorkEnvironment_C* Filter_HazardLevel; // 0x290(0x08)
	UFilter_ServerGameType_C* Filter_ServerGameType; // 0x298(0x08)
	UBasic_ExpandableMenu_C* Filter_ServerType; // 0x2a0(0x08)
	UBasic_TextInputField_C* Filter_TextSearch; // 0x2a8(0x08)
	UBorder* HeaderBorder; // 0x2b0(0x08)
	UTextBlock* TextDistanceClose; // 0x2b8(0x08)
	UTextBlock* TextDistanceFar; // 0x2c0(0x08)
	UTextBlock* TextDistanceMedium; // 0x2c8(0x08)
	UTextBlock* TextDistanceWorld; // 0x2d0(0x08)
	UTextBlock* TextOpenServerType; // 0x2d8(0x08)
	UTextBlock* TextPasswordServerType; // 0x2e0(0x08)
	float Width; // 0x2e8(0x04)
	bool ShowHeader; // 0x2ec(0x01)
	bool ShowTextFilter; // 0x2ed(0x01)
	bool ShowDistanceFilter; // 0x2ee(0x01)
	bool ShowHazardFilter; // 0x2ef(0x01)
	bool ShowServerTypeFilter; // 0x2f0(0x01)
	bool ShowAutoRefresh; // 0x2f1(0x01)
	FMulticastInlineDelegate OnSearchFiltersChanged; // 0x2f8(0x10)
	FMargin Inner Padding; // 0x308(0x10)
	bool ServerSideFiltering; // 0x318(0x01)
	bool ShowGametypeFilter; // 0x319(0x01)

	void GetGametypeFilter(TArray<enum class EGameType> SelectedGametypes);
	void UpdatePasswordFilter();
	void GetAutoRefresh(bool AutoRefresh);
	void FilterSession(FBlueprintSessionResult InSession, bool Should Filter);
	void IsDifficultySelected(UDifficultySetting* InDifficulty, bool Selected);
	void UpdateSearchDistance(enum class ESteamSearchRegion SearchRegion);
	FText GetTextFilter();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Filter_TextSearch_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text);
	void Construct();
	void BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Filter_HazardLevel_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature();
	void BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void RefreshSettings();
	void BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__Filter_ServerGameType_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature();
	void ExecuteUbergraph_ITM_DeepDives_ServerFilters(int32_t EntryPoint);
	void OnSearchFiltersChanged__DelegateSignature();
};

