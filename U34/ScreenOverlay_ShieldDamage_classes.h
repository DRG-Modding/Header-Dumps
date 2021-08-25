// WidgetBlueprintGeneratedClass ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C
// Size: 0x270 (Inherited: 0x230)
struct UScreenOverlay_ShieldDamage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* SplatImage; // 0x238(0x08)
	float Duration; // 0x240(0x04)
	float Time; // 0x244(0x04)
	struct FLinearColor Color; // 0x248(0x10)
	struct FLinearColor StartColor; // 0x258(0x10)
	struct APlayerCharacter* Player; // 0x268(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Tick
	void OnArmorDamaged(float amount); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnArmorDamaged
	void Begin Splat(float Duration, struct FLinearColor Color); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Begin Splat
	void Construct(); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Construct
	void OnCharacterStateChanged(enum class ECharacterState NewState); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCharacterStateChanged
	void End Splat(); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.End Splat
	void OnCameraModeChanged(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCameraModeChanged
	void ExecuteUbergraph_ScreenOverlay_ShieldDamage(int32_t EntryPoint); // Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.ExecuteUbergraph_ScreenOverlay_ShieldDamage
};

