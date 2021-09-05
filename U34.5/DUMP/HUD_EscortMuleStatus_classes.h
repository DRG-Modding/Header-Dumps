// WidgetBlueprintGeneratedClass HUD_EscortMuleStatus.HUD_EscortMuleStatus_C
// Size: 0x324 (Inherited: 0x240)
struct UHUD_EscortMuleStatus_C : UOptionalObjectiveWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UWidgetAnimation* OutOfFuel; // 0x248(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x250(0x08)
	UProgressBar* FAKEFuelGauge_Left; // 0x258(0x08)
	UImage* Icon_Fuel; // 0x260(0x08)
	UImage* Icon_Fuel2; // 0x268(0x08)
	UImage* Icon_Speed; // 0x270(0x08)
	UImage* Image_Separator; // 0x278(0x08)
	UITM_EscortMuleHealthBar_C* ITM_EscortMuleHealthBar; // 0x280(0x08)
	UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus1; // 0x288(0x08)
	UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus2; // 0x290(0x08)
	UImage* speed1; // 0x298(0x08)
	UImage* speed2; // 0x2a0(0x08)
	UImage* speed3; // 0x2a8(0x08)
	UImage* speed4; // 0x2b0(0x08)
	UImage* speed5; // 0x2b8(0x08)
	UTextBlock* TextBlock_StatusHeader; // 0x2c0(0x08)
	UTextBlock* TextBlock_VehicleName; // 0x2c8(0x08)
	UVerticalBox* VerticalBox_Fuel; // 0x2d0(0x08)
	UWidgetSwitcher* WidgetSwitcher_Fuel; // 0x2d8(0x08)
	UWidgetSwitcher* WidgetSwitcher_IsAlive; // 0x2e0(0x08)
	UEscortObjective* EscortObj; // 0x2e8(0x08)
	float PrevHealth; // 0x2f0(0x04)
	enum class EEscortMissionState prevState; // 0x2f4(0x01)
	TArray<float> SpeedThresholds; // 0x2f8(0x10)
	FTimerHandle UpdateFuelDisplayTimer; // 0x308(0x08)
	FVector StartPos; // 0x310(0x0c)
	float EndPercentage; // 0x31c(0x04)
	int32_t NumberOfTakenExtractors; // 0x320(0x04)

	void CalcFuelGaugePercentage();
	void PreConstruct(bool IsDesignTime);
	void SetObjective(UObjective* obj);
	void OnObjectiveUpdated(UObjective* Objective);
	void OnSpeedChanged(float newSpeedModifier);
	void ExtracterTaken(AExtractorItem* Item);
	void ExecuteUbergraph_HUD_EscortMuleStatus(int32_t EntryPoint);
};

