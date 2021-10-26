// WidgetBlueprintGeneratedClass UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C
// Size: 0x258 (Inherited: 0x230)
struct UUI_Perks_Column_Unlocks_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* ArrowBox; // 0x238(0x08)
	int32_t ArrowCount; // 0x240(0x04)
	int32_t UnlockedCount; // 0x244(0x04)
	TArray<UUI_Perks_Column_Unlocks_Arrow_C*> ArrowWidgets; // 0x248(0x10)

	void IsUnlocked(bool Unlocked);
	void PreConstruct(bool IsDesignTime);
	void Set Arrow Count(int32_t ArrowCount, int32_t UnlockedCount);
	void Set Unlocked Count(int32_t UnlockedCount);
	void ExecuteUbergraph_UI_Perks_Column_Unlocks(int32_t EntryPoint);
};

