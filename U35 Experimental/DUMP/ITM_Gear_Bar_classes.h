// WidgetBlueprintGeneratedClass ITM_Gear_Bar.ITM_Gear_Bar_C
// Size: 0x259 (Inherited: 0x230)
struct UITM_Gear_Bar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* ItemBar; // 0x238(0x08)
	UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon; // 0x240(0x08)
	UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon_C_1; // 0x248(0x08)
	UITM_DeepDive_StageIcon_C* ITM_DeepDive_StageIcon_C_2; // 0x250(0x08)
	bool ShowClaimText; // 0x258(0x01)

	void SetStageStatus(UITM_DeepDive_StageIcon_C* Target, bool claimed);
	void SetDeepDiveProgress(UDeepDive* Deep Dive);
	void SetActiveProgress();
	void SetCustomProgress(bool Stage1Complete, bool Stage2Complete, bool Stage3Complete);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Gear_Bar(int32_t EntryPoint);
};

