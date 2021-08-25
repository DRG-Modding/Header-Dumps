// WidgetBlueprintGeneratedClass ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C
// Size: 0x280 (Inherited: 0x230)
struct UScreenOverlay_HealthDamage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* HealthImage; // 0x238(0x08)
	struct UImage* SplatImage; // 0x240(0x08)
	float FadeDuration; // 0x248(0x04)
	float SolidDuration; // 0x24c(0x04)
	struct APlayerCharacter* Player; // 0x250(0x08)
	struct FLinearColor Color; // 0x258(0x10)
	struct FLinearColor StartColor; // 0x268(0x10)
	struct UPlayerHealthComponent* HealthComponent; // 0x278(0x08)

	void CheckForLowHealth(float StartAnimTime); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.CheckForLowHealth
	void Begin Splat(float Duration, struct FLinearColor Color); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Begin Splat
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Tick
	void OnDamageTaken_Event(float amount); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnDamageTaken_Event
	void OnCharacterStateChanged(enum class ECharacterState NewState); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCharacterStateChanged
	void End Splat(); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.End Splat
	void OnCameraModeChanged(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCameraModeChanged
	void UpdateBloodColor(bool NewValue); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.UpdateBloodColor
	void Construct(); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Construct
	void OnUpdateHealthImage(float Health); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnUpdateHealthImage
	void ExecuteUbergraph_ScreenOverlay_HealthDamage(int32_t EntryPoint); // Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.ExecuteUbergraph_ScreenOverlay_HealthDamage
};

