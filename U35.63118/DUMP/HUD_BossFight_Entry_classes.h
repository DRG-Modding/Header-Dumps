// WidgetBlueprintGeneratedClass HUD_BossFight_Entry.HUD_BossFight_Entry_C
// Size: 0x2d0 (Inherited: 0x260)
struct UHUD_BossFight_Entry_C : UHUD_BossFight_BaseEntry_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UWidgetAnimation* ArmorFullAnim; // 0x268(0x08)
	UWidgetAnimation* ArmorHitAnim; // 0x270(0x08)
	UWidgetAnimation* HitAnim; // 0x278(0x08)
	UHUD_EnemyTargeting_AfflictionBox_C* HUD_EnemyTargeting_AfflictionBox; // 0x280(0x08)
	UHUD_EnemyTargeting_Temperature_C* HUD_EnemyTargeting_Temperature; // 0x288(0x08)
	UITM_BossFightContainer_C* ITM_BossFightContainer; // 0x290(0x08)
	UITM_SegmentedArmorBar_C* ITM_SegmentedArmorBar; // 0x298(0x08)
	UITM_SegmentedHealthBar_C* ITM_SegmentedHealthBar; // 0x2a0(0x08)
	UHorizontalBox* ShieldBox; // 0x2a8(0x08)
	UEnemyTemperatureReplicatorComponent* TemperatureReplicator; // 0x2b0(0x08)
	FBossFight BossFightInfo_1; // 0x2b8(0x18)

	void GetBossFight(FBossFight BossFight);
	void OnCanTakeDamageChanged(bool OutCanTakeDamage);
	void OnDisengaged();
	void OnDeath();
	void OnHealthChanged(float Health);
	void SetTemperatureEffect(float InTempEffect);
	void InternalSetPct(UProgressBar* InHealthBar, UProgressBar* InTrailingHealthBar, UWidgetAnimation* InHitAnimation, float InPct, bool Reset);
	void Construct();
	void OnRemoveBossFight();
	void SetupTemperature();
	void OnTemperatureEffectChanged(float FloatValue);
	void ExecuteUbergraph_HUD_BossFight_Entry(int32_t EntryPoint);
};

