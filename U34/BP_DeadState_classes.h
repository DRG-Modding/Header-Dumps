// BlueprintGeneratedClass BP_DeadState.BP_DeadState_C
// Size: 0x15c (Inherited: 0x100)
struct UBP_DeadState_C : UDeadStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	char UnknownData_108[0x8]; // 0x108(0x08)
	struct FTransform Start Transform; // 0x110(0x30)
	struct UParticleSystem* DeathEffect; // 0x140(0x08)
	struct UAnimMontage* DeathMontage; // 0x148(0x08)
	struct UParticleSystemComponent* Active DeathParticle system; // 0x150(0x08)
	float Effect start delay; // 0x158(0x04)

	void ReceiveBeginPlay(); // Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay
	void ReceiveStateExit(); // Function BP_DeadState.BP_DeadState_C.ReceiveStateExit
	void ReceiveStateEnter(); // Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter
	void Set Death parameters(float Respawn delay, float Effect Delay, struct UAnimMontage* Death montage, struct UParticleSystem* Death Effect, bool Use animtime as respawn time); // Function BP_DeadState.BP_DeadState_C.Set Death parameters
	void ExecuteUbergraph_BP_DeadState(int32_t EntryPoint); // Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState
};

