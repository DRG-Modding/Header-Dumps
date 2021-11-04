// WidgetBlueprintGeneratedClass LCD_MissionReadout_Data.LCD_MissionReadout_Data_C
// Size: 0x278 (Inherited: 0x230)
struct ULCD_MissionReadout_Data_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* DATA_MissionName; // 0x238(0x08)
	UTextBlock* DATA_MissionType; // 0x240(0x08)
	UHorizontalBox* HorizontalBox_Anomalies; // 0x248(0x08)
	UHorizontalBox* HorizontalBox_Warnings; // 0x250(0x08)
	UITM_MisDesMutator_C* ITM_MisDesMutator; // 0x258(0x08)
	UITM_MisDesMutator_C* ITM_MisDesMutator_2; // 0x260(0x08)
	UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic; // 0x268(0x08)
	UUI_MissionReadOut_Base_C* UI_MissionReadOut_Base; // 0x270(0x08)

	void SetGeneratedMission(UGeneratedMission* In Mission);
	void BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(UGeneratedMission* InMission);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_LCD_MissionReadout_Data(int32_t EntryPoint);
};

