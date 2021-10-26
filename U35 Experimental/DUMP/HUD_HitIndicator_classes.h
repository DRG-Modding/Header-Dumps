// WidgetBlueprintGeneratedClass HUD_HitIndicator.HUD_HitIndicator_C
// Size: 0x274 (Inherited: 0x250)
struct UHUD_HitIndicator_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* HitAnim; // 0x258(0x08)
	UImage* IndicatorImage; // 0x260(0x08)
	UImage* KillImage; // 0x268(0x08)
	int32_t CurrentPriority; // 0x270(0x04)

	void StartAnimation(int32_t Priority, float Scale, FLinearColor Color, bool ShowKillImage);
	void OnDamagedEnemy_Event(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void Construct();
	void OnHitAnimStarted();
	void OnHitAnimFinished();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_HitIndicator(int32_t EntryPoint);
};

