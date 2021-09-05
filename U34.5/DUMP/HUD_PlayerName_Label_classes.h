// WidgetBlueprintGeneratedClass HUD_PlayerName_Label.HUD_PlayerName_Label_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_PlayerName_Label_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_PlayerName; // 0x238(0x08)
	UInvalidationBox* InvalidationBox_2; // 0x240(0x08)

	void UpdateCharacterName();
	void Construct();
	void OnPlayerNameChanged(FString NewName);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_PlayerName_Label(int32_t EntryPoint);
};

