// WidgetBlueprintGeneratedClass ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_UpgGear_ResourceCounter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* ContentBox; // 0x238(0x08)
	struct UTextBlock* DATAAmount; // 0x240(0x08)
	struct UBasic_ResourceIcon_C* ResourceLeft; // 0x248(0x08)
	struct UBasic_ResourceIcon_C* ResourceRight; // 0x250(0x08)
	struct UResourceData* Resource; // 0x258(0x08)
	float amount; // 0x260(0x04)
	float RequiredAmount; // 0x264(0x04)
	bool IconOnRight; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct UBasic_ToolTip_C* ToolTip; // 0x270(0x08)
	bool ShowRequiredAmount; // 0x278(0x01)
	char UnknownData_279[0x3]; // 0x279(0x03)
	int32_t IconSize; // 0x27c(0x04)

	void SetIconSize(int32_t InSize); // Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetIconSize
	void SetCanAfford(bool IsAffordable); // Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetCanAfford
	void SetResourceData(struct UResourceData* InResource, float InAmount, float InRequiredAmount, bool InShowRequiredAmount); // Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetResourceData
	void PreConstruct(bool IsDesignTime); // Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.PreConstruct
	void UpdateAmount(float InAmount); // Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.UpdateAmount
	void ExecuteUbergraph_ITM_UpgGear_ResourceCounter(int32_t EntryPoint); // Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.ExecuteUbergraph_ITM_UpgGear_ResourceCounter
};

