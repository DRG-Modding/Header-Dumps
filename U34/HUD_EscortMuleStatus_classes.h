// WidgetBlueprintGeneratedClass HUD_EscortMuleStatus.HUD_EscortMuleStatus_C
// Size: 0x324 (Inherited: 0x240)
struct UHUD_EscortMuleStatus_C : UOptionalObjectiveWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UWidgetAnimation* OutOfFuel; // 0x248(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x250(0x08)
	struct UProgressBar* FAKEFuelGauge_Left; // 0x258(0x08)
	struct UImage* Icon_Fuel; // 0x260(0x08)
	struct UImage* Icon_Fuel2; // 0x268(0x08)
	struct UImage* Icon_Speed; // 0x270(0x08)
	struct UImage* Image_Separator; // 0x278(0x08)
	struct UITM_EscortMuleHealthBar_C* ITM_EscortMuleHealthBar; // 0x280(0x08)
	struct UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus1; // 0x288(0x08)
	struct UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus2; // 0x290(0x08)
	struct UImage* speed1; // 0x298(0x08)
	struct UImage* speed2; // 0x2a0(0x08)
	struct UImage* speed3; // 0x2a8(0x08)
	struct UImage* speed4; // 0x2b0(0x08)
	struct UImage* speed5; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_StatusHeader; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_VehicleName; // 0x2c8(0x08)
	struct UVerticalBox* VerticalBox_Fuel; // 0x2d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Fuel; // 0x2d8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_IsAlive; // 0x2e0(0x08)
	struct UEscortObjective* EscortObj; // 0x2e8(0x08)
	float PrevHealth; // 0x2f0(0x04)
	enum class EEscortMissionState prevState; // 0x2f4(0x01)
	char UnknownData_2F5[0x3]; // 0x2f5(0x03)
	struct TArray<float> SpeedThresholds; // 0x2f8(0x10)
	struct FTimerHandle UpdateFuelDisplayTimer; // 0x308(0x08)
	struct FVector StartPos; // 0x310(0x0c)
	float EndPercentage; // 0x31c(0x04)
	int32_t NumberOfTakenExtractors; // 0x320(0x04)

	void CalcFuelGaugePercentage(); // Function HUD_EscortMuleStatus.HUD_EscortMuleStatus_C.CalcFuelGaugePercentage
	void PreConstruct(bool IsDesignTime); // Function HUD_EscortMuleStatus.HUD_EscortMuleStatus_C.PreConstruct
	void SetObjective(struct UObjective* obj); // Function HUD_EscortMuleStatus.HUD_EscortMuleStatus_C.SetObjective
	void OnObjectiveUpdated(struct UObjective* Objective); // Function HUD_EscortMuleStatus.HUD_EscortMuleStatus_C.OnObjectiveUpdated
	void OnSpeedChanged(float newSpeedModifier); // Function HUD_EscortMuleStatus.HUD_EscortMuleStatus_C.OnSpeedChanged
	void ExtracterTaken(struct AExtractorItem* Item); // Function HUD_EscortMuleStatus.HUD_EscortMuleStatus_C.ExtracterTaken
	void ExecuteUbergraph_HUD_EscortMuleStatus(int32_t EntryPoint); // Function HUD_EscortMuleStatus.HUD_EscortMuleStatus_C.ExecuteUbergraph_HUD_EscortMuleStatus
};

