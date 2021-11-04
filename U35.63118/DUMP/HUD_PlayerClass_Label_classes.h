// WidgetBlueprintGeneratedClass HUD_PlayerClass_Label.HUD_PlayerClass_Label_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_PlayerClass_Label_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_ClassName; // 0x238(0x08)
	UInvalidationBox* InvalidationBox_1; // 0x240(0x08)

	void UpdateCharacterName();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_PlayerClass_Label(int32_t EntryPoint);
};

