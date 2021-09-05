// WidgetBlueprintGeneratedClass HUD_PlayerPerks.HUD_PlayerPerks_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_PlayerPerks_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* PerksBox; // 0x238(0x08)

	void SetCharacter(APlayerCharacter* InPlayerCharacter);
	void Construct();
	void ExecuteUbergraph_HUD_PlayerPerks(int32_t EntryPoint);
};

