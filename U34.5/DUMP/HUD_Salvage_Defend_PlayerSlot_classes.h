// WidgetBlueprintGeneratedClass HUD_Salvage_Defend_PlayerSlot.HUD_Salvage_Defend_PlayerSlot_C
// Size: 0x248 (Inherited: 0x230)
struct UHUD_Salvage_Defend_PlayerSlot_C : UUserWidget {
	UUI_ImageTinted_C* Filled; // 0x230(0x08)
	UUI_ImageTinted_C* NotFilled; // 0x238(0x08)
	UWidgetSwitcher* StateSwitcher; // 0x240(0x08)

	void SetPlayerSlotFilled(bool InFilled);
};

