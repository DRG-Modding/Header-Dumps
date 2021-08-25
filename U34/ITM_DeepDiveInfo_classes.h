// WidgetBlueprintGeneratedClass ITM_DeepDiveInfo.ITM_DeepDiveInfo_C
// Size: 0x268 (Inherited: 0x230)
struct UITM_DeepDiveInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_4; // 0x238(0x08)
	struct UITM_WarningAndMutator_C* DeepDive_WarningAndMutator; // 0x240(0x08)
	struct UHorizontalBox* DeepDiveStage; // 0x248(0x08)
	struct UUI_GenericLabel_C* DeepDiveStageNumber; // 0x250(0x08)
	struct UTextBlock* MissionName; // 0x258(0x08)
	struct UTextBlock* TextBlock_Codename; // 0x260(0x08)

	void Update(struct UGeneratedMission* mission); // Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.Update
	void PreConstruct(bool IsDesignTime); // Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.PreConstruct
	void ExecuteUbergraph_ITM_DeepDiveInfo(int32_t EntryPoint); // Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.ExecuteUbergraph_ITM_DeepDiveInfo
};

