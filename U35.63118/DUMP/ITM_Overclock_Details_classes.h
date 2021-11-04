// WidgetBlueprintGeneratedClass ITM_Overclock_Details.ITM_Overclock_Details_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_Overclock_Details_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* LineBox; // 0x238(0x08)
	UItemUpgrade* Upgrade; // 0x240(0x08)
	int32_t FontSize; // 0x248(0x04)
	int32_t Linespace; // 0x24c(0x04)

	void Clear();
	void AddStat(FItemUpgradeStatText InStat);
	void SetData(UItemUpgrade* InUpgrade);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Overclock_Details(int32_t EntryPoint);
};

