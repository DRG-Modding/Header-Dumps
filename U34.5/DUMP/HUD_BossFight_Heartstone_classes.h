// WidgetBlueprintGeneratedClass HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C
// Size: 0x2b0 (Inherited: 0x240)
struct UHUD_BossFight_Heartstone_C : UHUD_BossFight_BaseEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UHorizontalBox* HorizontalBox_Healthbar; // 0x248(0x08)
	UImage* Image_317; // 0x250(0x08)
	UImage* Image_402; // 0x258(0x08)
	UITM_BossFightContainer_C* ITM_BossFightContainer; // 0x260(0x08)
	UProgressBar* ProgressBar_Health_2; // 0x268(0x08)
	UProgressBar* ProgressBar_Health_3; // 0x270(0x08)
	UProgressBar* ProgressBar_Health_4; // 0x278(0x08)
	UProgressBar* ProgressBar_Health_5; // 0x280(0x08)
	AEscortDestination* Heartstone; // 0x288(0x08)
	UEscortObjective* EscortObj; // 0x290(0x08)
	int32_t CurrHealthBar; // 0x298(0x04)
	TArray<UProgressBar*> HealthSegments; // 0x2a0(0x10)

	float CalcPercentage(float Progress, int32_t CurrStage);
	void Construct();
	void OnProgressUpdated(float Progress);
	void OnBossRemoved(TScriptInterface<IBossFightInterface> BossFight);
	void DeathFinished();
	void OnShellCracked(int32_t numberOfShellsCracked);
	void ExecuteUbergraph_HUD_BossFight_Heartstone(int32_t EntryPoint);
};

