// WidgetBlueprintGeneratedClass ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C
// Size: 0x280 (Inherited: 0x230)
struct UScreenOverlay_HealthDamage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* HealthImage; // 0x238(0x08)
	UImage* SplatImage; // 0x240(0x08)
	float FadeDuration; // 0x248(0x04)
	float SolidDuration; // 0x24c(0x04)
	APlayerCharacter* Player; // 0x250(0x08)
	FLinearColor Color; // 0x258(0x10)
	FLinearColor StartColor; // 0x268(0x10)
	UPlayerHealthComponent* HealthComponent; // 0x278(0x08)

	void CheckForLowHealth(float StartAnimTime);
	void Begin Splat(float Duration, FLinearColor Color);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnDamageTaken_Event(float Amount);
	void OnCharacterStateChanged(enum class ECharacterState NewState);
	void End Splat();
	void OnCameraModeChanged(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode);
	void UpdateBloodColor(bool NewValue);
	void Construct();
	void OnUpdateHealthImage(float Health);
	void ExecuteUbergraph_ScreenOverlay_HealthDamage(int32_t EntryPoint);
};

