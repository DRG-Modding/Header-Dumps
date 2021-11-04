// WidgetBlueprintGeneratedClass ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_Biome_ResourceIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	UTextBlock* DATA_Amount; // 0x240(0x08)
	UTextBlock* DATA_ResourceName; // 0x248(0x08)

	void SetData(UResourceData* Resource, bool IsScarce);
	void ExecuteUbergraph_ITM_Biome_ResourceIcon(int32_t EntryPoint);
};

