// WidgetBlueprintGeneratedClass HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C
// Size: 0x2b8 (Inherited: 0x230)
struct UHUD_BoscoRevivesLable_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* ReviveCountText; // 0x238(0x08)
	FSlateFontInfo Font; // 0x240(0x50)
	FSlateColor Color; // 0x290(0x28)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnReviveCountChangedEvent(int32_t ReviveCount);
	void ExecuteUbergraph_HUD_BoscoRevivesLable(int32_t EntryPoint);
};

