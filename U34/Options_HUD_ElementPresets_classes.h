// WidgetBlueprintGeneratedClass Options_HUD_ElementPresets.Options_HUD_ElementPresets_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_HUD_ElementPresets_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* PresetBox; // 0x238(0x08)

	void AddPreset(enum class EHUDVisibilityPresets PresetID); // Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.AddPreset
	void PreConstruct(bool IsDesignTime); // Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.PreConstruct
	void ExecuteUbergraph_Options_HUD_ElementPresets(int32_t EntryPoint); // Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.ExecuteUbergraph_Options_HUD_ElementPresets
};

