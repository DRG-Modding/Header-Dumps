// WidgetBlueprintGeneratedClass Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C
// Size: 0x2c0 (Inherited: 0x230)
struct UWidget_DropPod_DangerLevel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UTextBlock* DATA_PlanetaryRegionName; // 0x240(0x08)
	UVerticalBox* DeepDive; // 0x248(0x08)
	UVerticalBox* HazardLevels; // 0x250(0x08)
	UImage* Image_42; // 0x258(0x08)
	UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x260(0x08)
	UHorizontalBox* NotDeepDive; // 0x268(0x08)
	UProgressBar* ProgressBar_1; // 0x270(0x08)
	UVerticalBox* VerticalBox_MissionData; // 0x278(0x08)
	UWarningBox_C* WarningBox; // 0x280(0x08)
	UWarningBox_C* WarningBox_C_2; // 0x288(0x08)
	UWarningBox_C* WarningBox_C_51; // 0x290(0x08)
	UWarningBox_C* WarningBox_C_52; // 0x298(0x08)
	UWidgetSwitcher* WidgetSwitcher_139; // 0x2a0(0x08)
	TArray<FText> Names; // 0x2a8(0x10)
	int32_t Index; // 0x2b8(0x04)
	float TimePassed; // 0x2bc(0x04)

	void AdjustBar(float InputPin);
	void SetGeneratedMission(UGeneratedMission* In Mission);
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void ExecuteUbergraph_Widget_DropPod_DangerLevel(int32_t EntryPoint);
};

