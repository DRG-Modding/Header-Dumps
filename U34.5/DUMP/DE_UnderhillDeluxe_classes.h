// BlueprintGeneratedClass DE_UnderhillDeluxe.DE_UnderhillDeluxe_C
// Size: 0x104 (Inherited: 0xc0)
struct UDE_UnderhillDeluxe_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float TargetScale; // 0xc8(0x04)
	APlayerCharacter* Character; // 0xd0(0x08)
	float StartScale; // 0xd8(0x04)
	float Progress; // 0xdc(0x04)
	float CurrentScale; // 0xe0(0x04)
	float Scale Check Cooldown; // 0xe4(0x04)
	bool IsScalingActive; // 0xe8(0x01)
	float Previous Progress; // 0xec(0x04)
	float StartCameraOffset; // 0xf0(0x04)
	float TargetCameraOffset; // 0xf4(0x04)
	float CurrentCameraOffset; // 0xf8(0x04)
	bool EffectEnabled; // 0xfc(0x01)
	float OriginalPitchValue; // 0x100(0x04)

	void OnRep_CurrentCameraOffset();
	void OnRep_CurrentScale();
	void TraceForScaledCollision(bool IsNextScaleColliding);
	void ReceiveTick(float DeltaSeconds);
	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void Handle Scaling(float DeltaTime);
	void Reset Voice();
	void ExecuteUbergraph_DE_UnderhillDeluxe(int32_t EntryPoint);
};

