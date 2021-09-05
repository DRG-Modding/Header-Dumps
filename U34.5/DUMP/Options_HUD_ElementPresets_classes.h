// WidgetBlueprintGeneratedClass Options_HUD_ElementPresets.Options_HUD_ElementPresets_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_HUD_ElementPresets_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* PresetBox; // 0x238(0x08)

	void AddPreset(enum class EHUDVisibilityPresets PresetID);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Options_HUD_ElementPresets(int32_t EntryPoint);
};

