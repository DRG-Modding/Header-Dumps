// WidgetBlueprintGeneratedClass HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C
// Size: 0x2b0 (Inherited: 0x240)
struct UHUD_BossFight_Heartstone_C : UHUD_BossFight_BaseEntry_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UHorizontalBox* HorizontalBox_Healthbar; // 0x248(0x08)
	struct UImage* Image_317; // 0x250(0x08)
	struct UImage* Image_402; // 0x258(0x08)
	struct UITM_BossFightContainer_C* ITM_BossFightContainer; // 0x260(0x08)
	struct UProgressBar* ProgressBar_Health_2; // 0x268(0x08)
	struct UProgressBar* ProgressBar_Health_3; // 0x270(0x08)
	struct UProgressBar* ProgressBar_Health_4; // 0x278(0x08)
	struct UProgressBar* ProgressBar_Health_5; // 0x280(0x08)
	struct AEscortDestination* Heartstone; // 0x288(0x08)
	struct UEscortObjective* EscortObj; // 0x290(0x08)
	int32_t CurrHealthBar; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct UProgressBar*> HealthSegments; // 0x2a0(0x10)

	float CalcPercentage(float Progress, int32_t CurrStage); // Function HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C.CalcPercentage
	void Construct(); // Function HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C.Construct
	void OnProgressUpdated(float Progress); // Function HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C.OnProgressUpdated
	void OnBossRemoved(struct TScriptInterface<None> BossFight); // Function HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C.OnBossRemoved
	void DeathFinished(); // Function HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C.DeathFinished
	void OnShellCracked(int32_t numberOfShellsCracked); // Function HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C.OnShellCracked
	void ExecuteUbergraph_HUD_BossFight_Heartstone(int32_t EntryPoint); // Function HUD_BossFight_Heartstone.HUD_BossFight_Heartstone_C.ExecuteUbergraph_HUD_BossFight_Heartstone
};

