// WidgetBlueprintGeneratedClass Options_HUD_Element.Options_HUD_Element_C
// Size: 0x268 (Inherited: 0x230)
struct UOptions_HUD_Element_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Option_C* Basic_Option; // 0x238(0x08)
	struct UBasic_OptionSwitcher_C* Basic_OptionSwitcher; // 0x240(0x08)
	struct UHorizontalBox* DotsBox; // 0x248(0x08)
	struct TArray<enum class EHUDVisibilityMode> AvailableModes; // 0x250(0x10)
	struct UHUDVisibilityGroup* VisibilityGroup; // 0x260(0x08)

	void UpdateDots(); // Function Options_HUD_Element.Options_HUD_Element_C.UpdateDots
	void SetupOptions(); // Function Options_HUD_Element.Options_HUD_Element_C.SetupOptions
	void PreConstruct(bool IsDesignTime); // Function Options_HUD_Element.Options_HUD_Element_C.PreConstruct
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature(); // Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature
	void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature(); // Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature
	void Construct(); // Function Options_HUD_Element.Options_HUD_Element_C.Construct
	void OnModeChanged_Event(struct UHUDVisibilityGroup* Group, enum class EHUDVisibilityMode Mode); // Function Options_HUD_Element.Options_HUD_Element_C.OnModeChanged_Event
	void ExecuteUbergraph_Options_HUD_Element(int32_t EntryPoint); // Function Options_HUD_Element.Options_HUD_Element_C.ExecuteUbergraph_Options_HUD_Element
};

