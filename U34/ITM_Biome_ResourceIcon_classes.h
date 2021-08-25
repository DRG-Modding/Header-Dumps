// WidgetBlueprintGeneratedClass ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_Biome_ResourceIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	struct UTextBlock* DATA_Amount; // 0x240(0x08)
	struct UTextBlock* DATA_ResourceName; // 0x248(0x08)

	void SetData(struct UResourceData* Resource, bool IsScarce); // Function ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C.SetData
	void ExecuteUbergraph_ITM_Biome_ResourceIcon(int32_t EntryPoint); // Function ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C.ExecuteUbergraph_ITM_Biome_ResourceIcon
};

