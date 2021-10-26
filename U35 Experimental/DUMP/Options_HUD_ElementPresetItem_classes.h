// WidgetBlueprintGeneratedClass Options_HUD_ElementPresetItem.Options_HUD_ElementPresetItem_C
// Size: 0x241 (Inherited: 0x230)
struct UOptions_HUD_ElementPresetItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ButtonScalable2_C* Button; // 0x238(0x08)
	enum class EHUDVisibilityPresets PresetID; // 0x240(0x01)

	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_Options_HUD_ElementPresetItem(int32_t EntryPoint);
};

