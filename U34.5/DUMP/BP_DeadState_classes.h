// BlueprintGeneratedClass BP_DeadState.BP_DeadState_C
// Size: 0x15c (Inherited: 0x100)
struct UBP_DeadState_C : UDeadStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	FTransform Start Transform; // 0x110(0x30)
	UParticleSystem* DeathEffect; // 0x140(0x08)
	UAnimMontage* DeathMontage; // 0x148(0x08)
	UParticleSystemComponent* Active DeathParticle system; // 0x150(0x08)
	float Effect start delay; // 0x158(0x04)

	void ReceiveBeginPlay();
	void ReceiveStateExit();
	void ReceiveStateEnter();
	void Set Death parameters(float Respawn delay, float Effect Delay, UAnimMontage* Death montage, UParticleSystem* Death Effect, bool Use animtime as respawn time);
	void ExecuteUbergraph_BP_DeadState(int32_t EntryPoint);
};

