// WidgetBlueprintGeneratedClass HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C
// Size: 0x2b0 (Inherited: 0x240)
struct UHUD_BossFight_Heartstone_C : UHUD_BossFight_BaseEntry_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UHorizontalBox* HorizontalBox_Healthbar; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_317; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_402; 
	UPROPERTY(BlueprintReadWrite) UITM_BossFightContainer_C* ITM_BossFightContainer; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* ProgressBar_Health_2; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* ProgressBar_Health_3; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* ProgressBar_Health_4; 
	UPROPERTY(BlueprintReadWrite) UProgressBar* ProgressBar_Health_5; 
	UPROPERTY(BlueprintReadWrite) AEscortDestination* Heartstone; 
	UPROPERTY(BlueprintReadWrite) UEscortObjective* EscortObj; 
	UPROPERTY(BlueprintReadWrite) int32_t CurrHealthBar; 
	UPROPERTY(BlueprintReadWrite) TArray<UProgressBar*> HealthSegments; 

	UFUNCTION(BlueprintCallable) float CalcPercentage(float Progress, int32_t CurrStage);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void OnProgressUpdated(float Progress);
	UFUNCTION(BlueprintCallable) void OnBossRemoved(TScriptInterface<IBossFightInterface> BossFight);
	UFUNCTION(BlueprintCallable) void DeathFinished();
	UFUNCTION(BlueprintCallable) void OnShellCracked(int32_t numberOfShellsCracked);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_HUD_BossFight_Heartstone(int32_t EntryPoint);
};

