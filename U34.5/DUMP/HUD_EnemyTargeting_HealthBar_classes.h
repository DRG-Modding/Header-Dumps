// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_HealthBar.HUD_EnemyTargeting_HealthBar_C
// Size: 0x2d0 (Inherited: 0x260)
struct UHUD_EnemyTargeting_HealthBar_C : ULookingAtContentWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UWidgetAnimation* WeakPointHit; // 0x268(0x08)
	UWidgetAnimation* NormalHit; // 0x270(0x08)
	UProgressBar* GhostHealthBar; // 0x278(0x08)
	UProgressBar* HealthBar; // 0x280(0x08)
	UCanvasPanel* HealthBarCanvas; // 0x288(0x08)
	USizeBox* HealthBarSize; // 0x290(0x08)
	UImage* Icon_Shield; // 0x298(0x08)
	UTextBlock* OwnerName; // 0x2a0(0x08)
	UTextBlock* TargetName; // 0x2a8(0x08)
	TScriptInterface<IHealth> PreviousHealthBar; // 0x2b0(0x10)
	UWidgetAnimation* HitAnimation; // 0x2c0(0x08)
	UPetComponent* PetComponent; // 0x2c8(0x08)

	void RefreshOwnerName(bool InReset);
	void GetCharacter(APlayerCharacter* Character);
	void Refresh(bool Reset);
	void PreConstruct(bool IsDesignTime);
	void ReceiveNewTarget(AActor* InCurrentTarget);
	void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
	void Construct();
	void ExecuteUbergraph_HUD_EnemyTargeting_HealthBar(int32_t EntryPoint);
};

