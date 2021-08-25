// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C
// Size: 0x2f8 (Inherited: 0x260)
struct UHUD_EnemyTargeting_HealthBar_Elite_C : ULookingAtContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimGlow; // 0x268(0x08)
	struct UWidgetAnimation* WeakPointHit; // 0x270(0x08)
	struct UWidgetAnimation* NormalHit; // 0x278(0x08)
	struct UProgressBar* GhostHealthBar; // 0x280(0x08)
	struct UTextBlock* Header; // 0x288(0x08)
	struct UProgressBar* HealthBar; // 0x290(0x08)
	struct UBorder* HealthbarBorder; // 0x298(0x08)
	struct UCanvasPanel* HealthBarCanvas; // 0x2a0(0x08)
	struct USizeBox* HealthBarSize; // 0x2a8(0x08)
	struct UImage* HexagonBackground; // 0x2b0(0x08)
	struct UImage* HexagonIcon; // 0x2b8(0x08)
	struct UImage* HexagonInner; // 0x2c0(0x08)
	struct UImage* HexagonShimmer; // 0x2c8(0x08)
	struct UImage* Icon_Shield; // 0x2d0(0x08)
	struct UTextBlock* TargetName; // 0x2d8(0x08)
	struct TScriptInterface<None> PreviousHealthBar; // 0x2e0(0x10)
	struct UWidgetAnimation* HitAnimation; // 0x2f0(0x08)

	void GetCharacter(struct APlayerCharacter* Character); // Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.GetCharacter
	void Refresh(bool Reset); // Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.Refresh
	void PreConstruct(bool IsDesignTime); // Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.PreConstruct
	void ReceiveNewTarget(struct AActor* InCurrentTarget); // Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ReceiveNewTarget
	void ReceiveUpdateTarget(struct AActor* InCurrentTarget, float DeltaTime); // Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ReceiveUpdateTarget
	void Construct(); // Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.Construct
	void ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite(int32_t EntryPoint); // Function HUD_EnemyTargeting_HealthBar_Elite.HUD_EnemyTargeting_HealthBar_Elite_C.ExecuteUbergraph_HUD_EnemyTargeting_HealthBar_Elite
};

