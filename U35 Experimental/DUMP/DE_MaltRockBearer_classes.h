// BlueprintGeneratedClass DE_MaltRockBearer.DE_MaltRockBearer_C
// Size: 0xf4 (Inherited: 0xc0)
struct UDE_MaltRockBearer_C : UDrinkEffectComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	APlayerCharacter* Character; // 0xc8(0x08)
	float StartScale; // 0xd0(0x04)
	float TargetScale; // 0xd4(0x04)
	float Progress; // 0xd8(0x04)
	float Current Scale; // 0xdc(0x04)
	float Previous Progress; // 0xe0(0x04)
	bool IsScalingActive; // 0xe4(0x01)
	float ScaleCheckCooldown; // 0xe8(0x04)
	bool EffectEnabled; // 0xec(0x01)
	float OriginalPitchValue; // 0xf0(0x04)

	void OnRep_Current Scale();
	void TraceForScaledCollision(bool IsNextScaleColliding);
	void ReceiveTick(float DeltaSeconds);
	void OnStartEffect(APlayerCharacter* Character);
	void OnStopEffect();
	void Handle Scaling(float DeltaTime);
	void Reset Voice();
	void ExecuteUbergraph_DE_MaltRockBearer(int32_t EntryPoint);
};

