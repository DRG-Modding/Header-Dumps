// WidgetBlueprintGeneratedClass OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C
// Size: 0x248 (Inherited: 0x230)
struct UOnScreen_BoscoRevivesCounter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHUD_BoscoAmmoRefillsLable_C* HUD_BoscoAmmoRefillsLable; // 0x238(0x08)
	UHUD_BoscoRevivesLable_C* HUD_BoscoRevivesLable; // 0x240(0x08)

	void SetViewAmmoCounter(bool ViewAmmo);
	void Construct();
	void ExecuteUbergraph_OnScreen_BoscoRevivesCounter(int32_t EntryPoint);
};

