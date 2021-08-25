// WidgetBlueprintGeneratedClass HUD_EnemyTargeting.HUD_EnemyTargeting_C
// Size: 0x2dc (Inherited: 0x278)
struct UHUD_EnemyTargeting_C : ULookingAtWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWidgetAnimation* DeadAnim; // 0x280(0x08)
	struct UWidgetAnimation* Intro; // 0x288(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x290(0x08)
	struct UImage* DeadIcon; // 0x298(0x08)
	struct UHUD_EnemyTargeting_HealthBar_C* HealthBar; // 0x2a0(0x08)
	struct UHUD_EnemyTargeting_HealthBar_Elite_C* HealthBar_Elite; // 0x2a8(0x08)
	struct UHUD_EnemyTargeting_AfflictionBox_C* HUD_EnemyTargeting_AfflictionBox; // 0x2b0(0x08)
	struct UHUD_EnemyTargeting_Temperature_C* Icon_Temperature; // 0x2b8(0x08)
	struct UHorizontalBox* StatusIconBox; // 0x2c0(0x08)
	struct UCanvasPanel* VisibilityCanvas; // 0x2c8(0x08)
	struct FVector LastTargetLocation; // 0x2d0(0x0c)

	void GetContent(struct ULookingAtContentWidget* OutActiveContent); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.GetContent
	void SelectContent(); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SelectContent
	void UpdateScreenPosition(); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateScreenPosition
	void ClampToScreenHeight(float CoordinateY, float Bound, float ClampedY); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ClampToScreenHeight
	void UpdateWidgets(bool Reset); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateWidgets
	void HandleTargetDamaged(struct TScriptInterface<None> Health, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.HandleTargetDamaged
	void SetIsVisible(bool IsVisible); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SetIsVisible
	void ReceiveTargetLost(); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveTargetLost
	void ReceiveUpdateTarget(struct AActor* InCurrentTarget, float DeltaTime); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveUpdateTarget
	void ReceiveNewTarget(struct AActor* InCurrentTarget); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveNewTarget
	void Construct(); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.Construct
	void OnDamagedEnemy(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnDamagedEnemy
	void PreConstruct(bool IsDesignTime); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.PreConstruct
	void ExecuteUbergraph_HUD_EnemyTargeting(int32_t EntryPoint); // Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ExecuteUbergraph_HUD_EnemyTargeting
};

