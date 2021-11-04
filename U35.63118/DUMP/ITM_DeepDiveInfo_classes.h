// WidgetBlueprintGeneratedClass ITM_DeepDiveInfo.ITM_DeepDiveInfo_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_DeepDiveInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x238(0x08)
	UITM_WarningAndMutator_C* DeepDive_WarningAndMutator; // 0x240(0x08)
	UHorizontalBox* DeepDiveStage; // 0x248(0x08)
	UBasic_Label_C* DeepDiveStageNumber; // 0x250(0x08)
	UTextBlock* MissionName; // 0x258(0x08)
	UTextBlock* TextBlock_Codename; // 0x260(0x08)

	void Update(UGeneratedMission* mission);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_DeepDiveInfo(int32_t EntryPoint);
};

