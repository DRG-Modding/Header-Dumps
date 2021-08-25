// WidgetBlueprintGeneratedClass HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C
// Size: 0x2b8 (Inherited: 0x230)
struct UHUD_BoscoRevivesLable_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* ReviveCountText; // 0x238(0x08)
	struct FSlateFontInfo Font; // 0x240(0x50)
	struct FSlateColor Color; // 0x290(0x28)

	void PreConstruct(bool IsDesignTime); // Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.PreConstruct
	void Construct(); // Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.Construct
	void OnReviveCountChangedEvent(int32_t ReviveCount); // Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.OnReviveCountChangedEvent
	void ExecuteUbergraph_HUD_BoscoRevivesLable(int32_t EntryPoint); // Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.ExecuteUbergraph_HUD_BoscoRevivesLable
};

