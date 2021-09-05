// BlueprintGeneratedClass BP_FallingState.BP_FallingState_C
// Size: 0x1e8 (Inherited: 0x1a0)
struct UBP_FallingState_C : UFallingStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1a0(0x08)
	USoundBase* JumpBootsActivated_Cue; // 0x1a8(0x08)
	UParticleSystem* JumpBootsActivated_Particles; // 0x1b0(0x08)
	USoundBase* ImpactCompensation_Impact_Cue; // 0x1b8(0x08)
	UParticleSystem* Impactcompensation_Impact_Particles; // 0x1c0(0x08)
	USoundBase* ImpactCompensation_Activate_Cue; // 0x1c8(0x08)
	USoundBase* ImpactCompensationDeactivateCue; // 0x1d0(0x08)
	bool IC_WasActivated; // 0x1d8(0x01)
	float HoverBootsBreakingSpeed; // 0x1dc(0x04)
	UParticleSystem* JumpBootsActivated_Particles_FirstPerson; // 0x1e0(0x08)

	void ShowJumpBootsActivation();
	void ReceiveHoverBootsTick(float DeltaSeconds);
	void ReceiveHoverBootsActiveChanged(bool IsActive);
	void ExecuteUbergraph_BP_FallingState(int32_t EntryPoint);
};

