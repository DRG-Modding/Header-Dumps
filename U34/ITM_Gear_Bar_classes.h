// WidgetBlueprintGeneratedClass ITM_Gear_Bar.ITM_Gear_Bar_C
// Size: 0x259 (Inherited: 0x230)
struct UITM_Gear_Bar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* ItemBar; // 0x238(0x08)
	struct UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon; // 0x240(0x08)
	struct UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon_C_1; // 0x248(0x08)
	struct UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon_C_2; // 0x250(0x08)
	bool ShowClaimText; // 0x258(0x01)

	void SetStageStatus(struct UITM_DeepDive_StageIcon_C* Target, bool Claimed); // Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetStageStatus
	void SetDeepDiveProgress(struct UDeepDive* Deep Dive); // Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetDeepDiveProgress
	void SetActiveProgress(); // Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetActiveProgress
	void SetCustomProgress(bool Stage1Complete, bool Stage2Complete, bool Stage3Complete); // Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetCustomProgress
	void PreConstruct(bool IsDesignTime); // Function ITM_Gear_Bar.ITM_Gear_Bar_C.PreConstruct
	void ExecuteUbergraph_ITM_Gear_Bar(int32_t EntryPoint); // Function ITM_Gear_Bar.ITM_Gear_Bar_C.ExecuteUbergraph_ITM_Gear_Bar
};

