// WidgetBlueprintGeneratedClass HUD_EscortMuleStatus.HUD_EscortMuleStatus_C
// Size: 0x324 (Inherited: 0x240)
struct UHUD_EscortMuleStatus_C : UOptionalObjectiveWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* OutOfFuel; 
	UPROPERTY(BlueprintReadWrite) UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* FAKEFuelGauge_Left; 
	UPROPERTY(BlueprintReadWrite) UImage* Icon_Fuel; 
	UPROPERTY(BlueprintReadWrite) UImage* Icon_Fuel2; 
	UPROPERTY(BlueprintReadWrite) UImage* Icon_Speed; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Separator; 
	UPROPERTY(BlueprintReadWrite) UITM_EscortMuleHealthBar_C* ITM_EscortMuleHealthBar; 
	UPROPERTY(BlueprintReadWrite) UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus1; 
	UPROPERTY(BlueprintReadWrite) UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus2; 
	UPROPERTY(BlueprintReadWrite) UImage* speed1; 
	UPROPERTY(BlueprintReadWrite) UImage* speed2; 
	UPROPERTY(BlueprintReadWrite) UImage* speed3; 
	UPROPERTY(BlueprintReadWrite) UImage* speed4; 
	UPROPERTY(BlueprintReadWrite) UImage* speed5; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_StatusHeader; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_VehicleName; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* VerticalBox_Fuel; 
	UPROPERTY(BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_Fuel; 
	UPROPERTY(BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_IsAlive; 
	UPROPERTY(BlueprintReadWrite) UEscortObjective* EscortObj; 
	UPROPERTY(BlueprintReadWrite) float PrevHealth; 
	UPROPERTY(BlueprintReadWrite) enum class EEscortMissionState prevState; 
	UPROPERTY(BlueprintReadWrite) TArray<float> SpeedThresholds; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle UpdateFuelDisplayTimer; 
	UPROPERTY(BlueprintReadWrite) FVector StartPos; 
	UPROPERTY(BlueprintReadWrite) float EndPercentage; 
	UPROPERTY(BlueprintReadWrite) int32_t NumberOfTakenExtractors; 

	UFUNCTION(BlueprintCallable) void CalcFuelGaugePercentage();
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void SetObjective(UObjective* obj);
	UFUNCTION(BlueprintCallable) void OnObjectiveUpdated(UObjective* Objective);
	UFUNCTION(BlueprintCallable) void OnSpeedChanged(float newSpeedModifier);
	UFUNCTION(BlueprintCallable) void ExtracterTaken(AExtractorItem* Item);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_EscortMuleStatus(int32_t EntryPoint);
};

