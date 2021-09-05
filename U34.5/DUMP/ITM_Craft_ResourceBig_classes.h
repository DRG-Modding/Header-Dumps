// WidgetBlueprintGeneratedClass ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C
// Size: 0x25c (Inherited: 0x230)
struct UITM_Craft_ResourceBig_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	UTextBlock* DATAAmount; // 0x240(0x08)
	UTextBlock* DataName; // 0x248(0x08)
	UResourceData* Resource; // 0x250(0x08)
	float amount; // 0x258(0x04)

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Craft_ResourceBig(int32_t EntryPoint);
};

