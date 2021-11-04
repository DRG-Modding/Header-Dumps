// WidgetBlueprintGeneratedClass HUD_BossFight_ShieldGenerator.HUD_BossFight_ShieldGenerator_C
// Size: 0x2a1 (Inherited: 0x260)
struct UHUD_BossFight_ShieldGenerator_C : UHUD_BossFight_BaseEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UWidgetAnimation* ArmorFullAnim; // 0x268(0x08)
	UWidgetAnimation* ArmorHitAnim; // 0x270(0x08)
	UWidgetAnimation* HitAnim; // 0x278(0x08)
	UITM_BossFightContainer_C* ITM_BossFightContainer; // 0x280(0x08)
	UProgressBar* ProgressBar_Main; // 0x288(0x08)
	UEnemyTemperatureReplicatorComponent* TemperatureReplicator; // 0x290(0x08)
	FTimerHandle HealthRefreshHandler; // 0x298(0x08)
	bool KillCue; // 0x2a0(0x01)

	void Construct();
	void OnRemoveBossFight();
	void OnFightRemoved(TScriptInterface<IBossFightInterface> BossFight);
	void OnProgress(float hackProgress);
	void PreConstruct(bool IsDesignTime);
	void PowerChanged(bool hasPower);
	void ExecuteUbergraph_HUD_BossFight_ShieldGenerator(int32_t EntryPoint);
};

