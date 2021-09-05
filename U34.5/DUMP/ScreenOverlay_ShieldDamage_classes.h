// WidgetBlueprintGeneratedClass ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C
// Size: 0x270 (Inherited: 0x230)
struct UScreenOverlay_ShieldDamage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* SplatImage; // 0x238(0x08)
	float Duration; // 0x240(0x04)
	float Time; // 0x244(0x04)
	FLinearColor Color; // 0x248(0x10)
	FLinearColor StartColor; // 0x258(0x10)
	APlayerCharacter* Player; // 0x268(0x08)

	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnArmorDamaged(float amount);
	void Begin Splat(float Duration, FLinearColor Color);
	void Construct();
	void OnCharacterStateChanged(enum class ECharacterState NewState);
	void End Splat();
	void OnCameraModeChanged(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode);
	void ExecuteUbergraph_ScreenOverlay_ShieldDamage(int32_t EntryPoint);
};

