// WidgetBlueprintGeneratedClass HUD_EnemyTargeting.HUD_EnemyTargeting_C
// Size: 0x2dc (Inherited: 0x278)
struct UHUD_EnemyTargeting_C : ULookingAtWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UWidgetAnimation* DeadAnim; // 0x280(0x08)
	UWidgetAnimation* Intro; // 0x288(0x08)
	UWidgetSwitcher* ContentSwitcher; // 0x290(0x08)
	UImage* DeadIcon; // 0x298(0x08)
	UHUD_EnemyTargeting_HealthBar_C* HealthBar; // 0x2a0(0x08)
	UHUD_EnemyTargeting_HealthBar_Elite_C* HealthBar_Elite; // 0x2a8(0x08)
	UHUD_EnemyTargeting_AfflictionBox_C* HUD_EnemyTargeting_AfflictionBox; // 0x2b0(0x08)
	UHUD_EnemyTargeting_Temperature_C* Icon_Temperature; // 0x2b8(0x08)
	UHorizontalBox* StatusIconBox; // 0x2c0(0x08)
	UCanvasPanel* VisibilityCanvas; // 0x2c8(0x08)
	FVector LastTargetLocation; // 0x2d0(0x0c)

	void GetContent(ULookingAtContentWidget* OutActiveContent);
	void SelectContent();
	void UpdateScreenPosition();
	void ClampToScreenHeight(float CoordinateY, float Bound, float ClampedY);
	void UpdateWidgets(bool Reset);
	void HandleTargetDamaged(TScriptInterface<IHealth> Health, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void SetIsVisible(bool IsVisible);
	void ReceiveTargetLost();
	void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
	void ReceiveNewTarget(AActor* InCurrentTarget);
	void Construct();
	void OnDamagedEnemy(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_EnemyTargeting(int32_t EntryPoint);
};

