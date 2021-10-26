// WidgetBlueprintGeneratedClass ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_UpgGear_ResourceCounter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* ContentBox; // 0x238(0x08)
	UTextBlock* DATAAmount; // 0x240(0x08)
	UBasic_ResourceIcon_C* ResourceLeft; // 0x248(0x08)
	UBasic_ResourceIcon_C* ResourceRight; // 0x250(0x08)
	UResourceData* Resource; // 0x258(0x08)
	float Amount; // 0x260(0x04)
	float RequiredAmount; // 0x264(0x04)
	bool IconOnRight; // 0x268(0x01)
	UBasic_ToolTip_C* ToolTip; // 0x270(0x08)
	bool ShowRequiredAmount; // 0x278(0x01)
	int32_t IconSize; // 0x27c(0x04)

	void SetIconSize(int32_t InSize);
	void SetCanAfford(bool IsAffordable);
	void SetResourceData(UResourceData* InResource, float InAmount, float InRequiredAmount, bool InShowRequiredAmount);
	void PreConstruct(bool IsDesignTime);
	void UpdateAmount(float InAmount);
	void ExecuteUbergraph_ITM_UpgGear_ResourceCounter(int32_t EntryPoint);
};

