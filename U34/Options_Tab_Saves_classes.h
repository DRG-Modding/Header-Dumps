// WidgetBlueprintGeneratedClass Options_Tab_Saves.Options_Tab_Saves_C
// Size: 0x270 (Inherited: 0x230)
struct UOptions_Tab_Saves_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UMenu_SaveSlots_C* Menu_SaveSlots; // 0x238(0x08)
	struct UOptions_ResetProgress_C* Options_ResetProgress; // 0x240(0x08)
	struct UOptions_RestoreSave_C* Options_RestoreSave; // 0x248(0x08)
	struct UBasic_Option_C* Reset_Progress; // 0x250(0x08)
	struct UBasic_Option_C* Restore_Save; // 0x258(0x08)
	struct FMulticastInlineDelegate SettingsChanged; // 0x260(0x10)

	void Construct(); // Function Options_Tab_Saves.Options_Tab_Saves_C.Construct
	void ExecuteUbergraph_Options_Tab_Saves(int32_t EntryPoint); // Function Options_Tab_Saves.Options_Tab_Saves_C.ExecuteUbergraph_Options_Tab_Saves
	void SettingsChanged__DelegateSignature(); // Function Options_Tab_Saves.Options_Tab_Saves_C.SettingsChanged__DelegateSignature
};

