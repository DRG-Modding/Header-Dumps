// WidgetBlueprintGeneratedClass HUD_PlayerName_Label.HUD_PlayerName_Label_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_PlayerName_Label_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* DATA_PlayerName; // 0x238(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x240(0x08)

	void UpdateCharacterName(); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.UpdateCharacterName
	void Construct(); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.Construct
	void OnPlayerNameChanged(struct FString NewName); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.OnPlayerNameChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.PreConstruct
	void ExecuteUbergraph_HUD_PlayerName_Label(int32_t EntryPoint); // Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.ExecuteUbergraph_HUD_PlayerName_Label
};

