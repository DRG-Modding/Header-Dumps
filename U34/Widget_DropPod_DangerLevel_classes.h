// WidgetBlueprintGeneratedClass Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C
// Size: 0x2c0 (Inherited: 0x230)
struct UWidget_DropPod_DangerLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UTextBlock* DATA_PlanetaryRegionName; // 0x240(0x08)
	struct UVerticalBox* DeepDive; // 0x248(0x08)
	struct UVerticalBox* HazardLevels; // 0x250(0x08)
	struct UImage* Image_42; // 0x258(0x08)
	struct UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x260(0x08)
	struct UHorizontalBox* NotDeepDive; // 0x268(0x08)
	struct UProgressBar* ProgressBar_1; // 0x270(0x08)
	struct UVerticalBox* VerticalBox_MissionData; // 0x278(0x08)
	struct UWarningBox_C* WarningBox; // 0x280(0x08)
	struct UWarningBox_C* WarningBox_C_2; // 0x288(0x08)
	struct UWarningBox_C* WarningBox_C_51; // 0x290(0x08)
	struct UWarningBox_C* WarningBox_C_52; // 0x298(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_139; // 0x2a0(0x08)
	struct TArray<struct FText> Names; // 0x2a8(0x10)
	int32_t Index; // 0x2b8(0x04)
	float TimePassed; // 0x2bc(0x04)

	void AdjustBar(float InputPin); // Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.AdjustBar
	void SetGeneratedMission(struct UGeneratedMission* In Mission); // Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.SetGeneratedMission
	void Construct(); // Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Tick
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.OnGeneratedMissionChanged
	void ExecuteUbergraph_Widget_DropPod_DangerLevel(int32_t EntryPoint); // Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.ExecuteUbergraph_Widget_DropPod_DangerLevel
};

