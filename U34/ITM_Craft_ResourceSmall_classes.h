// WidgetBlueprintGeneratedClass ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C
// Size: 0x254 (Inherited: 0x230)
struct UITM_Craft_ResourceSmall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	struct UTextBlock* DATAAmount; // 0x240(0x08)
	struct UResourceData* Resource; // 0x248(0x08)
	float amount; // 0x250(0x04)

	void PreConstruct(bool IsDesignTime); // Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.PreConstruct
	void Construct(); // Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.Construct
	void ExecuteUbergraph_ITM_Craft_ResourceSmall(int32_t EntryPoint); // Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.ExecuteUbergraph_ITM_Craft_ResourceSmall
};

