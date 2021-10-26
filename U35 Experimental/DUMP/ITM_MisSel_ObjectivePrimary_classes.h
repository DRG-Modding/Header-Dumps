// WidgetBlueprintGeneratedClass ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_MisSel_ObjectivePrimary_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATAPrimaryObjective; // 0x238(0x08)
	UTextBlock* DATAReward_PrimaryObjective; // 0x240(0x08)
	UImage* Image_1; // 0x248(0x08)

	void SetData(UObjective* Objective, float MissionScale, float HazardBonus);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MisSel_ObjectivePrimary(int32_t EntryPoint);
};

