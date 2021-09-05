// WidgetBlueprintGeneratedClass UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C
// Size: 0x241 (Inherited: 0x230)
struct UUI_Perks_Column_Unlocks_Arrow_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Arrow01; // 0x238(0x08)
	bool IsUnlocked; // 0x240(0x01)

	void PreConstruct(bool IsDesignTime);
	void SetIsUnlocked(bool IsUnlocked);
	void ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow(int32_t EntryPoint);
};

