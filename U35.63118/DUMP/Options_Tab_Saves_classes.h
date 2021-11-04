// WidgetBlueprintGeneratedClass Options_Tab_Saves.Options_Tab_Saves_C
// Size: 0x270 (Inherited: 0x230)
struct UOptions_Tab_Saves_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UMenu_SaveSlots_C* Menu_SaveSlots; // 0x238(0x08)
	UOptions_ResetProgress_C* Options_ResetProgress; // 0x240(0x08)
	UOptions_RestoreSave_C* Options_RestoreSave; // 0x248(0x08)
	UBasic_Option_C* Reset_Progress; // 0x250(0x08)
	UBasic_Option_C* Restore_Save; // 0x258(0x08)
	FMulticastInlineDelegate SettingsChanged; // 0x260(0x10)

	void Construct();
	void ExecuteUbergraph_Options_Tab_Saves(int32_t EntryPoint);
	void SettingsChanged__DelegateSignature();
};

