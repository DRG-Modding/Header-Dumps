// BlueprintGeneratedClass BP_DeadState.BP_DeadState_C
// Size: 0x15c (Inherited: 0x108)
struct UBP_DeadState_C : UDeadStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	FTransform Start Transform; // 0x110(0x30)
	UParticleSystem* deathEffect; // 0x140(0x08)
	UAnimMontage* deathMontage; // 0x148(0x08)
	UParticleSystemComponent* Active DeathParticle system; // 0x150(0x08)
	float Effect start delay; // 0x158(0x04)

	void ReceiveBeginPlay();
	void ReceiveStateExit();
	void ReceiveStateEnter();
	void SetDeathParameters(float respawnDelay, float effectDelay, UAnimMontage* deathMontage, UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime);
	void ExecuteUbergraph_BP_DeadState(int32_t EntryPoint);
};

