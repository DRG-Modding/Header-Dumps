// BlueprintGeneratedClass DE_UnderhillDeluxe.DE_UnderhillDeluxe_C
// Size: 0x104 (Inherited: 0xc0)
struct UDE_UnderhillDeluxe_C : UDrinkEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float TargetScale; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct APlayerCharacter* Character; // 0xd0(0x08)
	float StartScale; // 0xd8(0x04)
	float Progress; // 0xdc(0x04)
	float CurrentScale; // 0xe0(0x04)
	float Scale Check Cooldown; // 0xe4(0x04)
	bool IsScalingActive; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	float Previous Progress; // 0xec(0x04)
	float StartCameraOffset; // 0xf0(0x04)
	float TargetCameraOffset; // 0xf4(0x04)
	float CurrentCameraOffset; // 0xf8(0x04)
	bool EffectEnabled; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	float OriginalPitchValue; // 0x100(0x04)

	void OnRep_CurrentCameraOffset(); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentCameraOffset
	void OnRep_CurrentScale(); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnRep_CurrentScale
	void TraceForScaledCollision(bool IsNextScaleColliding); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.TraceForScaledCollision
	void ReceiveTick(float DeltaSeconds); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ReceiveTick
	void OnStartEffect(struct APlayerCharacter* Character); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStartEffect
	void OnStopEffect(); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.OnStopEffect
	void Handle Scaling(float DeltaTime); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.Handle Scaling
	void Reset Voice(); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.Reset Voice
	void ExecuteUbergraph_DE_UnderhillDeluxe(int32_t EntryPoint); // Function DE_UnderhillDeluxe.DE_UnderhillDeluxe_C.ExecuteUbergraph_DE_UnderhillDeluxe
};

