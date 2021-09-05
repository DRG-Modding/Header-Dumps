// WidgetBlueprintGeneratedClass HUD_BoscoAmmoRefillsLable.HUD_BoscoAmmoRefillsLable_C
// Size: 0x2b8 (Inherited: 0x230)
struct UHUD_BoscoAmmoRefillsLable_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* AmmorRefillCounterText; // 0x238(0x08)
	FSlateFontInfo Font; // 0x240(0x50)
	FSlateColor Color; // 0x290(0x28)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_HUD_BoscoAmmoRefillsLable(int32_t EntryPoint);
};

