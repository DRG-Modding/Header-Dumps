// WidgetBlueprintGeneratedClass HUD_PlayerClass_Label.HUD_PlayerClass_Label_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_PlayerClass_Label_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_ClassName; // 0x238(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x240(0x08)

	void UpdateCharacterName(); // Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.UpdateCharacterName
	void Construct(); // Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.Construct
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.PreConstruct
	void ExecuteUbergraph_HUD_PlayerClass_Label(int32_t EntryPoint); // Function HUD_PlayerClass_Label.HUD_PlayerClass_Label_C.ExecuteUbergraph_HUD_PlayerClass_Label
};

