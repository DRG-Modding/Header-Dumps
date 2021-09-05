// WidgetBlueprintGeneratedClass ITM_MisSel_ObjectiveSecondary.ITM_MisSel_ObjectiveSecondary_C
// Size: 0x250 (Inherited: 0x230)
struct UITM_MisSel_ObjectiveSecondary_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DataMissionReward; // 0x238(0x08)
	UTextBlock* DATAMissionSecondaryObjective; // 0x240(0x08)
	UImage* Image_1; // 0x248(0x08)

	void SetData(UObjective* Objective, float missionLength, float HazardBonus);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MisSel_ObjectiveSecondary(int32_t EntryPoint);
};

