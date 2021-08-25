// WidgetBlueprintGeneratedClass ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C
// Size: 0x25c (Inherited: 0x230)
struct UITM_Craft_ResourceBig_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	struct UTextBlock* DATAAmount; // 0x240(0x08)
	struct UTextBlock* DataName; // 0x248(0x08)
	struct UResourceData* Resource; // 0x250(0x08)
	float amount; // 0x258(0x04)

	void Construct(); // Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.PreConstruct
	void ExecuteUbergraph_ITM_Craft_ResourceBig(int32_t EntryPoint); // Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.ExecuteUbergraph_ITM_Craft_ResourceBig
};

