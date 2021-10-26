// WidgetBlueprintGeneratedClass ITM_DeepDive_Codename.ITM_DeepDive_Codename_C
// Size: 0x258 (Inherited: 0x230)
struct UITM_DeepDive_Codename_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_MissionBiome; // 0x238(0x08)
	UTextBlock* DATA_MissionName; // 0x240(0x08)
	UTextBlock* TextBlock_1; // 0x248(0x08)
	UTextBlock* TextBlock_2; // 0x250(0x08)

	void SetData(UDeepDive* DeepDive);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_DeepDive_Codename(int32_t EntryPoint);
};

