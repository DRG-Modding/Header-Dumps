// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C
// Size: 0x2f8 (Inherited: 0x260)
struct UHUD_EnemyTargeting_HealthBar_Elite_C : ULookingAtContentWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UWidgetAnimation* AnimGlow; // 0x268(0x08)
	UWidgetAnimation* WeakPointHit; // 0x270(0x08)
	UWidgetAnimation* NormalHit; // 0x278(0x08)
	UProgressBar* GhostHealthBar; // 0x280(0x08)
	UTextBlock* Header; // 0x288(0x08)
	UProgressBar* HealthBar; // 0x290(0x08)
	UBorder* HealthbarBorder; // 0x298(0x08)
	UCanvasPanel* HealthBarCanvas; // 0x2a0(0x08)
	USizeBox* HealthBarSize; // 0x2a8(0x08)
	UImage* HexagonBackground; // 0x2b0(0x08)
	UImage* HexagonIcon; // 0x2b8(0x08)
	UImage* HexagonInner; // 0x2c0(0x08)
	UImage* HexagonShimmer; // 0x2c8(0x08)
	UImage* Icon_Shield; // 0x2d0(0x08)
	UTextBlock* TargetName; // 0x2d8(0x08)
	TScriptInterface<IHealth> PreviousHealthBar; // 0x2e0(0x10)
	UWidgetAnimation* HitAnimation; // 0x2f0(0x08)

	void GetCharacter(APlayerCharacter* Character);
	void Refresh(bool Reset);
	void PreConstruct(bool IsDesignTime);
	void ReceiveNewTarget(AActor* InCurrentTarget);
	void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
	void Construct();
	void ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite(int32_t EntryPoint);
};

