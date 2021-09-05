// WidgetBlueprintGeneratedClass ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C
// Size: 0x248 (Inherited: 0x230)
struct UITM_MisSel_ResourceIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ResourceIcon_C* Basic_ResourceIcon; // 0x238(0x08)
	UTextBlock* DATA_ResourceName; // 0x240(0x08)

	void SetData(UResourceData* Resource);
	void ExecuteUbergraph_ITM_MisSel_ResourceIcon(int32_t EntryPoint);
};

