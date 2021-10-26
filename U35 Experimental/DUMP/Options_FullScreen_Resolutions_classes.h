// WidgetBlueprintGeneratedClass Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C
// Size: 0x250 (Inherited: 0x230)
struct UOptions_FullScreen_Resolutions_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	TArray<FIntPoint> NonPrimaryMonitorResolution; // 0x240(0x10)

	void AddNonPrimaryMonitorResolutions();
	bool ShouldResolutionBeEnabled(UFSDGameUserSettings* usersettings);
	void StringToRes(FString String, FIntPoint IntPoint);
	void ResToString(FIntPoint IntPoint, FString String);
	void Construct();
	void UINeedsUpdate();
	void ShowUI();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void ExecuteUbergraph_Options_FullScreen_Resolutions(int32_t EntryPoint);
};

