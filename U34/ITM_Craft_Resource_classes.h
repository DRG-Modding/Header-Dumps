// WidgetBlueprintGeneratedClass ITM_Craft_Resource.ITM_Craft_Resource_C
// Size: 0x281 (Inherited: 0x250)
struct UITM_Craft_Resource_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x258(0x08)
	struct UBorder* Border_4; // 0x260(0x08)
	struct UTextBlock* DATA_ResourceAmount; // 0x268(0x08)
	struct UTextBlock* DATA_ResourceName; // 0x270(0x08)
	struct UResourceData* ResourceData; // 0x278(0x08)
	bool AmountOverriden; // 0x280(0x01)

	void OnResourceAmountChanged(struct UResourceData* Resource, float currentAmount); // Function ITM_Craft_Resource.ITM_Craft_Resource_C.OnResourceAmountChanged
	void SetAmount(float amount); // Function ITM_Craft_Resource.ITM_Craft_Resource_C.SetAmount
	void Construct(); // Function ITM_Craft_Resource.ITM_Craft_Resource_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_Craft_Resource.ITM_Craft_Resource_C.PreConstruct
	void ExecuteUbergraph_ITM_Craft_Resource(int32_t EntryPoint); // Function ITM_Craft_Resource.ITM_Craft_Resource_C.ExecuteUbergraph_ITM_Craft_Resource
};

