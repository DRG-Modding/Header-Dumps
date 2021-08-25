// WidgetBlueprintGeneratedClass Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C
// Size: 0x250 (Inherited: 0x230)
struct UOptions_FullScreen_Resolutions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x238(0x08)
	struct TArray<struct FIntPoint> NonPrimaryMonitorResolution; // 0x240(0x10)

	void AddNonPrimaryMonitorResolutions(); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.AddNonPrimaryMonitorResolutions
	bool ShouldResolutionBeEnabled(struct UFSDGameUserSettings* usersettings); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled
	void StringToRes(struct FString String, struct FIntPoint IntPoint); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes
	void ResToString(struct FIntPoint IntPoint, struct FString String); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString
	void Construct(); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct
	void UINeedsUpdate(); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate
	void ShowUI(); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature
	void ExecuteUbergraph_Options_FullScreen_Resolutions(int32_t EntryPoint); // Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions
};

