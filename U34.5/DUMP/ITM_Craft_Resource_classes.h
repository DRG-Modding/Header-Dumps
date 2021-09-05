// WidgetBlueprintGeneratedClass ITM_Craft_Resource.ITM_Craft_Resource_C
// Size: 0x281 (Inherited: 0x250)
struct UITM_Craft_Resource_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x258(0x08)
	UBorder* Border_4; // 0x260(0x08)
	UTextBlock* DATA_ResourceAmount; // 0x268(0x08)
	UTextBlock* DATA_ResourceName; // 0x270(0x08)
	UResourceData* ResourceData; // 0x278(0x08)
	bool AmountOverriden; // 0x280(0x01)

	void OnResourceAmountChanged(UResourceData* Resource, float currentAmount);
	void SetAmount(float amount);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Craft_Resource(int32_t EntryPoint);
};

