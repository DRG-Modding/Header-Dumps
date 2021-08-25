// BlueprintGeneratedClass BP_FallingState.BP_FallingState_C
// Size: 0x1e8 (Inherited: 0x1a0)
struct UBP_FallingState_C : UFallingStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a0(0x08)
	struct USoundBase* JumpBootsActivated_Cue; // 0x1a8(0x08)
	struct UParticleSystem* JumpBootsActivated_Particles; // 0x1b0(0x08)
	struct USoundBase* ImpactCompensation_Impact_Cue; // 0x1b8(0x08)
	struct UParticleSystem* Impactcompensation_Impact_Particles; // 0x1c0(0x08)
	struct USoundBase* ImpactCompensation_Activate_Cue; // 0x1c8(0x08)
	struct USoundBase* ImpactCompensationDeactivateCue; // 0x1d0(0x08)
	bool IC_WasActivated; // 0x1d8(0x01)
	char UnknownData_1D9[0x3]; // 0x1d9(0x03)
	float HoverBootsBreakingSpeed; // 0x1dc(0x04)
	struct UParticleSystem* JumpBootsActivated_Particles_FirstPerson; // 0x1e0(0x08)

	void ShowJumpBootsActivation(); // Function BP_FallingState.BP_FallingState_C.ShowJumpBootsActivation
	void ReceiveHoverBootsTick(float DeltaSeconds); // Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsTick
	void ReceiveHoverBootsActiveChanged(bool IsActive); // Function BP_FallingState.BP_FallingState_C.ReceiveHoverBootsActiveChanged
	void ExecuteUbergraph_BP_FallingState(int32_t EntryPoint); // Function BP_FallingState.BP_FallingState_C.ExecuteUbergraph_BP_FallingState
};

