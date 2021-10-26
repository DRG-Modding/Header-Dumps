// WidgetBlueprintGeneratedClass Options_HUD_Element.Options_HUD_Element_C
// Size: 0x268 (Inherited: 0x230)
struct UOptions_HUD_Element_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Option_C* Basic_Option; // 0x238(0x08)
	UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x240(0x08)
	UHorizontalBox* DotsBox; // 0x248(0x08)
	TArray<enum class EHUDVisibilityMode> AvailableModes; // 0x250(0x10)
	UHUDVisibilityGroup* VisibilityGroup; // 0x260(0x08)

	void UpdateDots();
	void SetupOptions();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature();
	void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature();
	void Construct();
	void OnModeChanged_Event(UHUDVisibilityGroup* Group, enum class EHUDVisibilityMode Mode);
	void ExecuteUbergraph_Options_HUD_Element(int32_t EntryPoint);
};

